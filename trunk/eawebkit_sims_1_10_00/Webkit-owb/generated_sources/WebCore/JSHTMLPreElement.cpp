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

#include "JSHTMLPreElement.h"

#include <wtf/GetPtr.h>

#include "HTMLPreElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLPreElementTableValues[4] =
{
    { "width", (intptr_t)JSHTMLPreElement::WidthAttrNum, DontDelete, 0 },
    { "wrap", (intptr_t)JSHTMLPreElement::WrapAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLPreElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLPreElementTable = { 15, JSHTMLPreElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLPreElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLPreElementConstructorTable = { 0, JSHTMLPreElementConstructorTableValues, 0 };

class JSHTMLPreElementConstructor : public DOMObject {
public:
    JSHTMLPreElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLPreElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLPreElementConstructor::s_info = { "HTMLPreElementConstructor", 0, &JSHTMLPreElementConstructorTable, 0 };

bool JSHTMLPreElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLPreElementConstructor, DOMObject>(exec, &JSHTMLPreElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLPreElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLPreElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLPreElementPrototypeTable = { 0, JSHTMLPreElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLPreElementPrototype::s_info = { "HTMLPreElementPrototype", 0, &JSHTMLPreElementPrototypeTable, 0 };

JSObject* JSHTMLPreElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLPreElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLPreElementPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSHTMLPreElement::s_info = { "HTMLPreElement", &JSHTMLElement::s_info, &JSHTMLPreElementTable , 0 };

JSHTMLPreElement::JSHTMLPreElement(JSObject* prototype, HTMLPreElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLPreElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLPreElement, Base>(exec, &JSHTMLPreElementTable, this, propertyName, slot);
}

JSValue* JSHTMLPreElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case WidthAttrNum: {
        HTMLPreElement* imp = static_cast<HTMLPreElement*>(impl());
        return jsNumber(exec, imp->width());
    }
    case WrapAttrNum: {
        HTMLPreElement* imp = static_cast<HTMLPreElement*>(impl());
        return jsBoolean(imp->wrap());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLPreElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLPreElement, Base>(exec, propertyName, value, &JSHTMLPreElementTable, this);
}

void JSHTMLPreElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case WidthAttrNum: {
        HTMLPreElement* imp = static_cast<HTMLPreElement*>(impl());
        imp->setWidth(value->toInt32(exec));
        break;
    }
    case WrapAttrNum: {
        HTMLPreElement* imp = static_cast<HTMLPreElement*>(impl());
        imp->setWrap(value->toBoolean(exec));
        break;
    }
    }
}

JSValue* JSHTMLPreElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLPreElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLPreElementConstructor>(exec, constructorIdentifier);
}


}
