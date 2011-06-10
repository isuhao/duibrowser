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

#include "JSHTMLBaseFontElement.h"

#include <wtf/GetPtr.h>

#include "HTMLBaseFontElement.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLBaseFontElementTableValues[5] =
{
    { "color", (intptr_t)JSHTMLBaseFontElement::ColorAttrNum, DontDelete, 0 },
    { "face", (intptr_t)JSHTMLBaseFontElement::FaceAttrNum, DontDelete, 0 },
    { "size", (intptr_t)JSHTMLBaseFontElement::SizeAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLBaseFontElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLBaseFontElementTable = { 15, JSHTMLBaseFontElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLBaseFontElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLBaseFontElementConstructorTable = { 0, JSHTMLBaseFontElementConstructorTableValues, 0 };

class JSHTMLBaseFontElementConstructor : public DOMObject {
public:
    JSHTMLBaseFontElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLBaseFontElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLBaseFontElementConstructor::s_info = { "HTMLBaseFontElementConstructor", 0, &JSHTMLBaseFontElementConstructorTable, 0 };

bool JSHTMLBaseFontElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBaseFontElementConstructor, DOMObject>(exec, &JSHTMLBaseFontElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLBaseFontElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLBaseFontElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLBaseFontElementPrototypeTable = { 0, JSHTMLBaseFontElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLBaseFontElementPrototype::s_info = { "HTMLBaseFontElementPrototype", 0, &JSHTMLBaseFontElementPrototypeTable, 0 };

JSObject* JSHTMLBaseFontElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLBaseFontElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLBaseFontElementPrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSHTMLBaseFontElement::s_info = { "HTMLBaseFontElement", &JSHTMLElement::s_info, &JSHTMLBaseFontElementTable , 0 };

JSHTMLBaseFontElement::JSHTMLBaseFontElement(JSObject* prototype, HTMLBaseFontElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLBaseFontElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBaseFontElement, Base>(exec, &JSHTMLBaseFontElementTable, this, propertyName, slot);
}

JSValue* JSHTMLBaseFontElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ColorAttrNum: {
        HTMLBaseFontElement* imp = static_cast<HTMLBaseFontElement*>(impl());
        return jsString(exec, imp->color());
    }
    case FaceAttrNum: {
        HTMLBaseFontElement* imp = static_cast<HTMLBaseFontElement*>(impl());
        return jsString(exec, imp->face());
    }
    case SizeAttrNum: {
        HTMLBaseFontElement* imp = static_cast<HTMLBaseFontElement*>(impl());
        return jsNumber(exec, imp->size());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLBaseFontElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLBaseFontElement, Base>(exec, propertyName, value, &JSHTMLBaseFontElementTable, this);
}

void JSHTMLBaseFontElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case ColorAttrNum: {
        HTMLBaseFontElement* imp = static_cast<HTMLBaseFontElement*>(impl());
        imp->setColor(valueToStringWithNullCheck(exec, value));
        break;
    }
    case FaceAttrNum: {
        HTMLBaseFontElement* imp = static_cast<HTMLBaseFontElement*>(impl());
        imp->setFace(valueToStringWithNullCheck(exec, value));
        break;
    }
    case SizeAttrNum: {
        HTMLBaseFontElement* imp = static_cast<HTMLBaseFontElement*>(impl());
        imp->setSize(value->toInt32(exec));
        break;
    }
    }
}

JSValue* JSHTMLBaseFontElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLBaseFontElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLBaseFontElementConstructor>(exec, constructorIdentifier);
}


}
