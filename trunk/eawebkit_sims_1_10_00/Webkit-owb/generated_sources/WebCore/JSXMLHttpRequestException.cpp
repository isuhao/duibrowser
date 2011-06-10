/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

/*
* This file was modified by Electronic Arts Inc Copyright � 2009
*/

#include "config.h"

#include "JSXMLHttpRequestException.h"

#include <wtf/GetPtr.h>

#include "KURL.h"
#include "XMLHttpRequestException.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSXMLHttpRequestExceptionTableValues[5] =
{
    { "code", (intptr_t)JSXMLHttpRequestException::CodeAttrNum, DontDelete|ReadOnly, 0 },
    { "name", (intptr_t)JSXMLHttpRequestException::NameAttrNum, DontDelete|ReadOnly, 0 },
    { "message", (intptr_t)JSXMLHttpRequestException::MessageAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSXMLHttpRequestException::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSXMLHttpRequestExceptionTable = { 127, JSXMLHttpRequestExceptionTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSXMLHttpRequestExceptionConstructorTableValues[3] =
{
    { "NETWORK_ERR", (intptr_t)101, DontDelete|ReadOnly, 0 },
    { "ABORT_ERR", (intptr_t)102, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSXMLHttpRequestExceptionConstructorTable = { 1, JSXMLHttpRequestExceptionConstructorTableValues, 0 };

class JSXMLHttpRequestExceptionConstructor : public DOMObject {
public:
    JSXMLHttpRequestExceptionConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSXMLHttpRequestExceptionPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSXMLHttpRequestExceptionConstructor::s_info = { "XMLHttpRequestExceptionConstructor", 0, &JSXMLHttpRequestExceptionConstructorTable, 0 };

bool JSXMLHttpRequestExceptionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLHttpRequestExceptionConstructor, DOMObject>(exec, &JSXMLHttpRequestExceptionConstructorTable, this, propertyName, slot);
}

JSValue* JSXMLHttpRequestExceptionConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSXMLHttpRequestExceptionPrototypeTableValues[4] =
{
    { "NETWORK_ERR", (intptr_t)101, DontDelete|ReadOnly, 0 },
    { "ABORT_ERR", (intptr_t)102, DontDelete|ReadOnly, 0 },
    { "toString", (intptr_t)jsXMLHttpRequestExceptionPrototypeFunctionToString, DontDelete|DontEnum|Function, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSXMLHttpRequestExceptionPrototypeTable = { 3, JSXMLHttpRequestExceptionPrototypeTableValues, 0 };

const ClassInfo JSXMLHttpRequestExceptionPrototype::s_info = { "XMLHttpRequestExceptionPrototype", 0, &JSXMLHttpRequestExceptionPrototypeTable, 0 };

JSObject* JSXMLHttpRequestExceptionPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSXMLHttpRequestException.prototype]]");
    return KJS::cacheGlobalObject<JSXMLHttpRequestExceptionPrototype>(exec, prototypeIdentifier);
}

bool JSXMLHttpRequestExceptionPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSXMLHttpRequestExceptionPrototype, JSObject>(exec, &JSXMLHttpRequestExceptionPrototypeTable, this, propertyName, slot);
}

JSValue* JSXMLHttpRequestExceptionPrototype::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

const ClassInfo JSXMLHttpRequestException::s_info = { "XMLHttpRequestException", 0, &JSXMLHttpRequestExceptionTable , 0 };

JSXMLHttpRequestException::JSXMLHttpRequestException(JSObject* prototype, XMLHttpRequestException* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSXMLHttpRequestException::~JSXMLHttpRequestException()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSXMLHttpRequestException::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXMLHttpRequestException, Base>(exec, &JSXMLHttpRequestExceptionTable, this, propertyName, slot);
}

JSValue* JSXMLHttpRequestException::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case CodeAttrNum: {
        XMLHttpRequestException* imp = static_cast<XMLHttpRequestException*>(impl());
        return jsNumber(exec, imp->code());
    }
    case NameAttrNum: {
        XMLHttpRequestException* imp = static_cast<XMLHttpRequestException*>(impl());
        return jsString(exec, imp->name());
    }
    case MessageAttrNum: {
        XMLHttpRequestException* imp = static_cast<XMLHttpRequestException*>(impl());
        return jsString(exec, imp->message());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSXMLHttpRequestException::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[XMLHttpRequestException.constructor]]");
    return KJS::cacheGlobalObject<JSXMLHttpRequestExceptionConstructor>(exec, constructorIdentifier);
}

JSValue* jsXMLHttpRequestExceptionPrototypeFunctionToString(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXMLHttpRequestException::s_info))
        return throwError(exec, TypeError);
    JSXMLHttpRequestException* castedThisObj = static_cast<JSXMLHttpRequestException*>(thisValue);
    XMLHttpRequestException* imp = static_cast<XMLHttpRequestException*>(castedThisObj->impl());


    KJS::JSValue* result = jsString(exec, imp->toString());
    return result;
}

KJS::JSValue* toJS(KJS::ExecState* exec, XMLHttpRequestException* obj)
{
    return cacheDOMObject<XMLHttpRequestException, JSXMLHttpRequestException, JSXMLHttpRequestExceptionPrototype>(exec, obj);
}
XMLHttpRequestException* toXMLHttpRequestException(KJS::JSValue* val)
{
    return val->isObject(&JSXMLHttpRequestException::s_info) ? static_cast<JSXMLHttpRequestException*>(val)->impl() : 0;
}

}
