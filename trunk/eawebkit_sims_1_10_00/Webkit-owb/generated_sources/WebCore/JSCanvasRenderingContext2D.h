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

#ifndef JSCanvasRenderingContext2D_h
#define JSCanvasRenderingContext2D_h

#include "JSDOMBinding.h"
#include <kjs/JSGlobalObject.h>
#include <kjs/ObjectPrototype.h>

namespace WebCore {

class CanvasRenderingContext2D;

class JSCanvasRenderingContext2D : public DOMObject {
    typedef DOMObject Base;
public:
    JSCanvasRenderingContext2D(KJS::JSObject* prototype, CanvasRenderingContext2D*);
    virtual ~JSCanvasRenderingContext2D();
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual void put(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::JSValue*);
    void putValueProperty(KJS::ExecState*, int, KJS::JSValue*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;

    static KJS::JSValue* getConstructor(KJS::ExecState*);
    enum {
        // Attributes
        CanvasAttrNum, GlobalAlphaAttrNum, GlobalCompositeOperationAttrNum, LineWidthAttrNum, 
        LineCapAttrNum, LineJoinAttrNum, MiterLimitAttrNum, ShadowOffsetXAttrNum, 
        ShadowOffsetYAttrNum, ShadowBlurAttrNum, ShadowColorAttrNum, StrokeStyleAttrNum, 
        FillStyleAttrNum, 

        // The Constructor Attribute
        ConstructorAttrNum
    };

    // Custom attributes
    KJS::JSValue* strokeStyle(KJS::ExecState*) const;
    void setStrokeStyle(KJS::ExecState*, KJS::JSValue*);
    KJS::JSValue* fillStyle(KJS::ExecState*) const;
    void setFillStyle(KJS::ExecState*, KJS::JSValue*);

    // Custom functions
    KJS::JSValue* setStrokeColor(KJS::ExecState*, const KJS::ArgList&);
    KJS::JSValue* setFillColor(KJS::ExecState*, const KJS::ArgList&);
    KJS::JSValue* strokeRect(KJS::ExecState*, const KJS::ArgList&);
    KJS::JSValue* drawImage(KJS::ExecState*, const KJS::ArgList&);
    KJS::JSValue* drawImageFromRect(KJS::ExecState*, const KJS::ArgList&);
    KJS::JSValue* setShadow(KJS::ExecState*, const KJS::ArgList&);
    KJS::JSValue* createPattern(KJS::ExecState*, const KJS::ArgList&);
    KJS::JSValue* putImageData(KJS::ExecState*, const KJS::ArgList&);
    CanvasRenderingContext2D* impl() const { return m_impl.get(); }

private:
    RefPtr<CanvasRenderingContext2D> m_impl;
};

KJS::JSValue* toJS(KJS::ExecState*, CanvasRenderingContext2D*);
CanvasRenderingContext2D* toCanvasRenderingContext2D(KJS::JSValue*);

class JSCanvasRenderingContext2DPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;
    bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    JSCanvasRenderingContext2DPrototype(KJS::ExecState* exec)
        : KJS::JSObject(exec->lexicalGlobalObject()->objectPrototype()) { }
};

// Functions

KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionSave(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionRestore(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionScale(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionRotate(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionTranslate(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionTransform(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionCreateLinearGradient(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionCreateRadialGradient(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionClearRect(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionFillRect(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionBeginPath(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionClosePath(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionMoveTo(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionLineTo(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionQuadraticCurveTo(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionBezierCurveTo(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionArcTo(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionRect(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionArc(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionFill(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionStroke(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionClip(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionIsPointInPath(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionSetAlpha(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionSetCompositeOperation(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionSetLineWidth(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionSetLineCap(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionSetLineJoin(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionSetMiterLimit(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionClearShadow(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionSetStrokeColor(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionSetFillColor(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionStrokeRect(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionDrawImage(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionDrawImageFromRect(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionSetShadow(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionCreatePattern(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionCreateImageData(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionGetImageData(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsCanvasRenderingContext2DPrototypeFunctionPutImageData(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
} // namespace WebCore

#endif
