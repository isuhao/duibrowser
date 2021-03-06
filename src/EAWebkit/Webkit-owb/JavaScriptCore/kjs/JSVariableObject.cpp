/*
 * Copyright (C) 2007, 2008 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer. 
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution. 
 * 3.  Neither the name of Apple Computer, Inc. ("Apple") nor the names of
 *     its contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission. 
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "JSVariableObject.h"

#include "PropertyNameArray.h"
#include "PropertyMap.h"

namespace KJS {

bool JSVariableObject::deleteProperty(ExecState* exec, const Identifier& propertyName)
{
    if (symbolTable().contains(propertyName.ustring().rep()))
        return false;

    return JSObject::deleteProperty(exec, propertyName);
}

void JSVariableObject::getPropertyNames(ExecState* exec, PropertyNameArray& propertyNames)
{
    SymbolTable::const_iterator end = symbolTable().end();
    for (SymbolTable::const_iterator it = symbolTable().begin(); it != end; ++it) {
        if (!(it->second.getAttributes() & DontEnum))
            propertyNames.add(Identifier(exec, it->first.get()));
    }
    
    JSObject::getPropertyNames(exec, propertyNames);
}

bool JSVariableObject::getPropertyAttributes(ExecState* exec, const Identifier& propertyName, unsigned& attributes) const
{
    SymbolTableEntry entry = symbolTable().get(propertyName.ustring().rep());
    if (!entry.isNull()) {
        attributes = entry.getAttributes() | DontDelete;
        return true;
    }
    return JSObject::getPropertyAttributes(exec, propertyName, attributes);
}

void JSVariableObject::mark()
{
    JSObject::mark();

    if(!d->registerArray)
        return;
    
    Register* end = d->registerArray + d->registerOffset;
    for (Register* it = d->registerArray; it != end; ++it) {
        JSValue* v = (*it).u.jsValue;
        if (!v->marked())
            v->mark();
    }
}

bool JSVariableObject::isVariableObject() const
{
    return true;
}

void JSVariableObject::copyRegisterArray(Register* src, size_t count)
{
    ASSERT(!d->registerArray);

    Register* registerArray = static_cast<Register*>(fastMalloc(count * sizeof(Register)));
    memcpy(registerArray, src, count * sizeof(Register));

    setRegisterArray(registerArray, count);
}

void JSVariableObject::setRegisterArray(Register* registerArray, size_t count)
{
    delete d->registerArray;
    d->registerArray = registerArray;
    d->registerBase = &d->registerArray;
    d->registerOffset = count;
}

} // namespace KJS
