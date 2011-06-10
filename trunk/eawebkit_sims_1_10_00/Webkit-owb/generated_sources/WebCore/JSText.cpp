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

#include "JSText.h"

#include <wtf/GetPtr.h>

#include "ExceptionCode.h"
#include "JSText.h"
#include "KURL.h"
#include "Text.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSTextTableValues[3] =
{
    { "wholeText", (intptr_t)JSText::WholeTextAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSText::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSTextTable = { 63, JSTextTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSTextConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSTextConstructorTable = { 0, JSTextConstructorTableValues, 0 };

class JSTextConstructor : public DOMObject {
public:
    JSTextConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSTextPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSTextConstructor::s_info = { "TextConstructor", 0, &JSTextConstructorTable, 0 };

bool JSTextConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTextConstructor, DOMObject>(exec, &JSTextConstructorTable, this, propertyName, slot);
}

JSValue* JSTextConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSTextPrototypeTableValues[3] =
{
    { "splitText", (intptr_t)jsTextPrototypeFunctionSplitText, DontDelete|Function, 1 },
    { "replaceWholeText", (intptr_t)jsTextPrototypeFunctionReplaceWholeText, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSTextPrototypeTable = { 1, JSTextPrototypeTableValues, 0 };

const ClassInfo JSTextPrototype::s_info = { "TextPrototype", 0, &JSTextPrototypeTable, 0 };

JSObject* JSTextPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSText.prototype]]");
    return KJS::cacheGlobalObject<JSTextPrototype>(exec, prototypeIdentifier);
}

bool JSTextPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSTextPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSText::s_info = { "Text", &JSCharacterData::s_info, &JSTextTable , 0 };

JSText::JSText(JSObject* prototype, Text* impl)
    : JSCharacterData(prototype, impl)
{
}

bool JSText::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSText, Base>(exec, &JSTextTable, this, propertyName, slot);
}

JSValue* JSText::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case WholeTextAttrNum: {
        Text* imp = static_cast<Text*>(impl());
        return jsString(exec, imp->wholeText());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSText::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[Text.constructor]]");
    return KJS::cacheGlobalObject<JSTextConstructor>(exec, constructorIdentifier);
}

JSValue* jsTextPrototypeFunctionSplitText(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSText::s_info))
        return throwError(exec, TypeError);
    JSText* castedThisObj = static_cast<JSText*>(thisValue);
    Text* imp = static_cast<Text*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    int offset = args[0]->toInt32(exec);
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return jsUndefined();
    }


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->splitText(offset, ec)));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsTextPrototypeFunctionReplaceWholeText(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSText::s_info))
        return throwError(exec, TypeError);
    JSText* castedThisObj = static_cast<JSText*>(thisValue);
    Text* imp = static_cast<Text*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    const UString& content = args[0]->toString(exec);


    KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->replaceWholeText(content, ec)));
    setDOMException(exec, ec);
    return result;
}


}
