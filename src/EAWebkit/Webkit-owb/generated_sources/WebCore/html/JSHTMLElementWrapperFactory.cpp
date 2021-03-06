/*
 * THIS FILE IS AUTOMATICALLY GENERATED, DO NOT EDIT.
 *
 *
 * Copyright (C) 2005 Apple Computer, Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

/*
* This file was modified by Electronic Arts Inc Copyright � 2009-2010
*/

#include "config.h"

#include "JSHTMLElementWrapperFactory.h"
#include "JSHTMLAnchorElement.h"
#include "JSHTMLAppletElement.h"
#include "JSHTMLAreaElement.h"
#include "JSHTMLBaseElement.h"
#include "JSHTMLBaseFontElement.h"
#include "JSHTMLBlockquoteElement.h"
#include "JSHTMLBodyElement.h"
#include "JSHTMLBRElement.h"
#include "JSHTMLButtonElement.h"
#include "JSHTMLCanvasElement.h"
#include "JSHTMLTableCaptionElement.h"
#include "JSHTMLTableColElement.h"
#include "JSHTMLModElement.h"
#include "JSHTMLDirectoryElement.h"
#include "JSHTMLDivElement.h"
#include "JSHTMLDListElement.h"
#include "JSHTMLEmbedElement.h"
#include "JSHTMLFieldSetElement.h"
#include "JSHTMLFontElement.h"
#include "JSHTMLFormElement.h"
#include "JSHTMLFrameElement.h"
#include "JSHTMLFrameSetElement.h"
#include "JSHTMLHeadingElement.h"
#include "JSHTMLHeadElement.h"
#include "JSHTMLHRElement.h"
#include "JSHTMLHtmlElement.h"
#include "JSHTMLIFrameElement.h"
#include "JSHTMLImageElement.h"
#include "JSHTMLInputElement.h"
#include "JSHTMLIsIndexElement.h"
#include "JSHTMLLabelElement.h"
#include "JSHTMLLegendElement.h"
#include "JSHTMLLIElement.h"
#include "JSHTMLLinkElement.h"
#include "JSHTMLMapElement.h"
#include "JSHTMLMarqueeElement.h"
#include "JSHTMLMenuElement.h"
#include "JSHTMLMetaElement.h"
#include "JSHTMLObjectElement.h"
#include "JSHTMLOListElement.h"
#include "JSHTMLOptGroupElement.h"
#include "JSHTMLOptionElement.h"
#include "JSHTMLParagraphElement.h"
#include "JSHTMLParamElement.h"
#include "JSHTMLPreElement.h"
#include "JSHTMLQuoteElement.h"
#include "JSHTMLScriptElement.h"
#include "JSHTMLSelectElement.h"
#include "JSHTMLStyleElement.h"
#include "JSHTMLTableElement.h"
#include "JSHTMLTableSectionElement.h"
#include "JSHTMLTableCellElement.h"
#include "JSHTMLTextAreaElement.h"
#include "JSHTMLTitleElement.h"
#include "JSHTMLTableRowElement.h"
#include "JSHTMLUListElement.h"

#include "HTMLNames.h"

#include "HTMLAnchorElement.h"
#include "HTMLAppletElement.h"
#include "HTMLAreaElement.h"
#include "HTMLBaseElement.h"
#include "HTMLBaseFontElement.h"
#include "HTMLBlockquoteElement.h"
#include "HTMLBodyElement.h"
#include "HTMLBRElement.h"
#include "HTMLButtonElement.h"
#include "HTMLCanvasElement.h"
#include "HTMLTableCaptionElement.h"
#include "HTMLTableColElement.h"
#include "HTMLModElement.h"
#include "HTMLDirectoryElement.h"
#include "HTMLDivElement.h"
#include "HTMLDListElement.h"
#include "HTMLEmbedElement.h"
#include "HTMLFieldSetElement.h"
#include "HTMLFontElement.h"
#include "HTMLFormElement.h"
#include "HTMLFrameElement.h"
#include "HTMLFrameSetElement.h"
#include "HTMLHeadingElement.h"
#include "HTMLHeadElement.h"
#include "HTMLHRElement.h"
#include "HTMLHtmlElement.h"
#include "HTMLIFrameElement.h"
#include "HTMLImageElement.h"
#include "HTMLInputElement.h"
#include "HTMLIsIndexElement.h"
#include "HTMLLabelElement.h"
#include "HTMLLegendElement.h"
#include "HTMLLIElement.h"
#include "HTMLLinkElement.h"
#include "HTMLMapElement.h"
#include "HTMLMarqueeElement.h"
#include "HTMLMenuElement.h"
#include "HTMLMetaElement.h"
#include "HTMLObjectElement.h"
#include "HTMLOListElement.h"
#include "HTMLOptGroupElement.h"
#include "HTMLOptionElement.h"
#include "HTMLParagraphElement.h"
#include "HTMLParamElement.h"
#include "HTMLPreElement.h"
#include "HTMLQuoteElement.h"
#include "HTMLScriptElement.h"
#include "HTMLSelectElement.h"
#include "HTMLStyleElement.h"
#include "HTMLTableElement.h"
#include "HTMLTableSectionElement.h"
#include "HTMLTableCellElement.h"
#include "HTMLTextAreaElement.h"
#include "HTMLTitleElement.h"
#include "HTMLTableRowElement.h"
#include "HTMLUListElement.h"
using namespace KJS;

namespace WebCore {

using namespace HTMLNames;

typedef JSNode* (*CreateHTMLElementWrapperFunction)(ExecState*, PassRefPtr<HTMLElement>);

static JSNode* createAnchorWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLAnchorElement(JSHTMLAnchorElementPrototype::self(exec), static_cast<HTMLAnchorElement*>(element.get()));
}

static JSNode* createAppletWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLAppletElement(JSHTMLAppletElementPrototype::self(exec), static_cast<HTMLAppletElement*>(element.get()));
}

static JSNode* createAreaWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLAreaElement(JSHTMLAreaElementPrototype::self(exec), static_cast<HTMLAreaElement*>(element.get()));
}

static JSNode* createBaseWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLBaseElement(JSHTMLBaseElementPrototype::self(exec), static_cast<HTMLBaseElement*>(element.get()));
}

static JSNode* createBaseFontWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLBaseFontElement(JSHTMLBaseFontElementPrototype::self(exec), static_cast<HTMLBaseFontElement*>(element.get()));
}

static JSNode* createBlockquoteWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLBlockquoteElement(JSHTMLBlockquoteElementPrototype::self(exec), static_cast<HTMLBlockquoteElement*>(element.get()));
}

static JSNode* createBodyWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLBodyElement(JSHTMLBodyElementPrototype::self(exec), static_cast<HTMLBodyElement*>(element.get()));
}

static JSNode* createBRWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLBRElement(JSHTMLBRElementPrototype::self(exec), static_cast<HTMLBRElement*>(element.get()));
}

static JSNode* createButtonWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLButtonElement(JSHTMLButtonElementPrototype::self(exec), static_cast<HTMLButtonElement*>(element.get()));
}

static JSNode* createCanvasWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLCanvasElement(JSHTMLCanvasElementPrototype::self(exec), static_cast<HTMLCanvasElement*>(element.get()));
}

static JSNode* createTableCaptionWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLTableCaptionElement(JSHTMLTableCaptionElementPrototype::self(exec), static_cast<HTMLTableCaptionElement*>(element.get()));
}

static JSNode* createTableColWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLTableColElement(JSHTMLTableColElementPrototype::self(exec), static_cast<HTMLTableColElement*>(element.get()));
}

static JSNode* createModWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLModElement(JSHTMLModElementPrototype::self(exec), static_cast<HTMLModElement*>(element.get()));
}

static JSNode* createDirectoryWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLDirectoryElement(JSHTMLDirectoryElementPrototype::self(exec), static_cast<HTMLDirectoryElement*>(element.get()));
}

static JSNode* createDivWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLDivElement(JSHTMLDivElementPrototype::self(exec), static_cast<HTMLDivElement*>(element.get()));
}

static JSNode* createDListWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLDListElement(JSHTMLDListElementPrototype::self(exec), static_cast<HTMLDListElement*>(element.get()));
}

static JSNode* createEmbedWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLEmbedElement(JSHTMLEmbedElementPrototype::self(exec), static_cast<HTMLEmbedElement*>(element.get()));
}

static JSNode* createFieldSetWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLFieldSetElement(JSHTMLFieldSetElementPrototype::self(exec), static_cast<HTMLFieldSetElement*>(element.get()));
}

static JSNode* createFontWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLFontElement(JSHTMLFontElementPrototype::self(exec), static_cast<HTMLFontElement*>(element.get()));
}

static JSNode* createFormWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLFormElement(JSHTMLFormElementPrototype::self(exec), static_cast<HTMLFormElement*>(element.get()));
}

static JSNode* createFrameWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLFrameElement(JSHTMLFrameElementPrototype::self(exec), static_cast<HTMLFrameElement*>(element.get()));
}

static JSNode* createFrameSetWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLFrameSetElement(JSHTMLFrameSetElementPrototype::self(exec), static_cast<HTMLFrameSetElement*>(element.get()));
}

static JSNode* createHeadingWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLHeadingElement(JSHTMLHeadingElementPrototype::self(exec), static_cast<HTMLHeadingElement*>(element.get()));
}

static JSNode* createHeadWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLHeadElement(JSHTMLHeadElementPrototype::self(exec), static_cast<HTMLHeadElement*>(element.get()));
}

static JSNode* createHRWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLHRElement(JSHTMLHRElementPrototype::self(exec), static_cast<HTMLHRElement*>(element.get()));
}

static JSNode* createHtmlWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLHtmlElement(JSHTMLHtmlElementPrototype::self(exec), static_cast<HTMLHtmlElement*>(element.get()));
}

static JSNode* createIFrameWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLIFrameElement(JSHTMLIFrameElementPrototype::self(exec), static_cast<HTMLIFrameElement*>(element.get()));
}

static JSNode* createImageWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLImageElement(JSHTMLImageElementPrototype::self(exec), static_cast<HTMLImageElement*>(element.get()));
}

static JSNode* createInputWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLInputElement(JSHTMLInputElementPrototype::self(exec), static_cast<HTMLInputElement*>(element.get()));
}

static JSNode* createIsIndexWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLIsIndexElement(JSHTMLIsIndexElementPrototype::self(exec), static_cast<HTMLIsIndexElement*>(element.get()));
}

static JSNode* createLabelWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLLabelElement(JSHTMLLabelElementPrototype::self(exec), static_cast<HTMLLabelElement*>(element.get()));
}

static JSNode* createLegendWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLLegendElement(JSHTMLLegendElementPrototype::self(exec), static_cast<HTMLLegendElement*>(element.get()));
}

static JSNode* createLIWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLLIElement(JSHTMLLIElementPrototype::self(exec), static_cast<HTMLLIElement*>(element.get()));
}

static JSNode* createLinkWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLLinkElement(JSHTMLLinkElementPrototype::self(exec), static_cast<HTMLLinkElement*>(element.get()));
}

static JSNode* createMapWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLMapElement(JSHTMLMapElementPrototype::self(exec), static_cast<HTMLMapElement*>(element.get()));
}

static JSNode* createMarqueeWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLMarqueeElement(JSHTMLMarqueeElementPrototype::self(exec), static_cast<HTMLMarqueeElement*>(element.get()));
}

static JSNode* createMenuWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLMenuElement(JSHTMLMenuElementPrototype::self(exec), static_cast<HTMLMenuElement*>(element.get()));
}

static JSNode* createMetaWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLMetaElement(JSHTMLMetaElementPrototype::self(exec), static_cast<HTMLMetaElement*>(element.get()));
}

static JSNode* createObjectWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLObjectElement(JSHTMLObjectElementPrototype::self(exec), static_cast<HTMLObjectElement*>(element.get()));
}

static JSNode* createOListWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLOListElement(JSHTMLOListElementPrototype::self(exec), static_cast<HTMLOListElement*>(element.get()));
}

static JSNode* createOptGroupWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLOptGroupElement(JSHTMLOptGroupElementPrototype::self(exec), static_cast<HTMLOptGroupElement*>(element.get()));
}

static JSNode* createOptionWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLOptionElement(JSHTMLOptionElementPrototype::self(exec), static_cast<HTMLOptionElement*>(element.get()));
}

static JSNode* createParagraphWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLParagraphElement(JSHTMLParagraphElementPrototype::self(exec), static_cast<HTMLParagraphElement*>(element.get()));
}

static JSNode* createParamWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLParamElement(JSHTMLParamElementPrototype::self(exec), static_cast<HTMLParamElement*>(element.get()));
}

static JSNode* createPreWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLPreElement(JSHTMLPreElementPrototype::self(exec), static_cast<HTMLPreElement*>(element.get()));
}

static JSNode* createQuoteWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLQuoteElement(JSHTMLQuoteElementPrototype::self(exec), static_cast<HTMLQuoteElement*>(element.get()));
}

static JSNode* createScriptWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLScriptElement(JSHTMLScriptElementPrototype::self(exec), static_cast<HTMLScriptElement*>(element.get()));
}

static JSNode* createSelectWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLSelectElement(JSHTMLSelectElementPrototype::self(exec), static_cast<HTMLSelectElement*>(element.get()));
}

static JSNode* createStyleWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLStyleElement(JSHTMLStyleElementPrototype::self(exec), static_cast<HTMLStyleElement*>(element.get()));
}

static JSNode* createTableWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLTableElement(JSHTMLTableElementPrototype::self(exec), static_cast<HTMLTableElement*>(element.get()));
}

static JSNode* createTableSectionWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLTableSectionElement(JSHTMLTableSectionElementPrototype::self(exec), static_cast<HTMLTableSectionElement*>(element.get()));
}

static JSNode* createTableCellWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLTableCellElement(JSHTMLTableCellElementPrototype::self(exec), static_cast<HTMLTableCellElement*>(element.get()));
}

static JSNode* createTextAreaWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLTextAreaElement(JSHTMLTextAreaElementPrototype::self(exec), static_cast<HTMLTextAreaElement*>(element.get()));
}

static JSNode* createTitleWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLTitleElement(JSHTMLTitleElementPrototype::self(exec), static_cast<HTMLTitleElement*>(element.get()));
}

static JSNode* createTableRowWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLTableRowElement(JSHTMLTableRowElementPrototype::self(exec), static_cast<HTMLTableRowElement*>(element.get()));
}

static JSNode* createUListWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
    return new (exec) JSHTMLUListElement(JSHTMLUListElementPrototype::self(exec), static_cast<HTMLUListElement*>(element.get()));
}

#if USE(MULTIPLE_THREADS)
    // Unsupported so will leak...
#else
	static HashMap<WebCore::AtomicStringImpl*, CreateHTMLElementWrapperFunction>& map()
	{
		static HashMap<WebCore::AtomicStringImpl*, CreateHTMLElementWrapperFunction> map;
		return map;
	}
#endif

JSNode* createJSHTMLWrapper(ExecState* exec, PassRefPtr<HTMLElement> element)
{   
   
#if USE(MULTIPLE_THREADS)
 
#endif
    if (map().isEmpty()) {
       map().set(aTag.localName().impl(), createAnchorWrapper);
       map().set(appletTag.localName().impl(), createAppletWrapper);
       map().set(areaTag.localName().impl(), createAreaWrapper);
       map().set(baseTag.localName().impl(), createBaseWrapper);
       map().set(basefontTag.localName().impl(), createBaseFontWrapper);
       map().set(blockquoteTag.localName().impl(), createBlockquoteWrapper);
       map().set(bodyTag.localName().impl(), createBodyWrapper);
       map().set(brTag.localName().impl(), createBRWrapper);
       map().set(buttonTag.localName().impl(), createButtonWrapper);
       map().set(canvasTag.localName().impl(), createCanvasWrapper);
       map().set(captionTag.localName().impl(), createTableCaptionWrapper);
       map().set(colTag.localName().impl(), createTableColWrapper);
       map().set(delTag.localName().impl(), createModWrapper);
       map().set(dirTag.localName().impl(), createDirectoryWrapper);
       map().set(divTag.localName().impl(), createDivWrapper);
       map().set(dlTag.localName().impl(), createDListWrapper);
       map().set(embedTag.localName().impl(), createEmbedWrapper);
       map().set(fieldsetTag.localName().impl(), createFieldSetWrapper);
       map().set(fontTag.localName().impl(), createFontWrapper);
       map().set(formTag.localName().impl(), createFormWrapper);
       map().set(frameTag.localName().impl(), createFrameWrapper);
       map().set(framesetTag.localName().impl(), createFrameSetWrapper);
       map().set(h1Tag.localName().impl(), createHeadingWrapper);
       map().set(headTag.localName().impl(), createHeadWrapper);
       map().set(hrTag.localName().impl(), createHRWrapper);
       map().set(htmlTag.localName().impl(), createHtmlWrapper);
       map().set(iframeTag.localName().impl(), createIFrameWrapper);
       map().set(imgTag.localName().impl(), createImageWrapper);
       map().set(inputTag.localName().impl(), createInputWrapper);
       map().set(isindexTag.localName().impl(), createIsIndexWrapper);
       map().set(labelTag.localName().impl(), createLabelWrapper);
       map().set(legendTag.localName().impl(), createLegendWrapper);
       map().set(liTag.localName().impl(), createLIWrapper);
       map().set(linkTag.localName().impl(), createLinkWrapper);
       map().set(mapTag.localName().impl(), createMapWrapper);
       map().set(marqueeTag.localName().impl(), createMarqueeWrapper);
       map().set(menuTag.localName().impl(), createMenuWrapper);
       map().set(metaTag.localName().impl(), createMetaWrapper);
       map().set(objectTag.localName().impl(), createObjectWrapper);
       map().set(olTag.localName().impl(), createOListWrapper);
       map().set(optgroupTag.localName().impl(), createOptGroupWrapper);
       map().set(optionTag.localName().impl(), createOptionWrapper);
       map().set(pTag.localName().impl(), createParagraphWrapper);
       map().set(paramTag.localName().impl(), createParamWrapper);
       map().set(preTag.localName().impl(), createPreWrapper);
       map().set(qTag.localName().impl(), createQuoteWrapper);
       map().set(scriptTag.localName().impl(), createScriptWrapper);
       map().set(selectTag.localName().impl(), createSelectWrapper);
       map().set(styleTag.localName().impl(), createStyleWrapper);
       map().set(tableTag.localName().impl(), createTableWrapper);
       map().set(tbodyTag.localName().impl(), createTableSectionWrapper);
       map().set(tdTag.localName().impl(), createTableCellWrapper);
       map().set(textareaTag.localName().impl(), createTextAreaWrapper);
       map().set(titleTag.localName().impl(), createTitleWrapper);
       map().set(trTag.localName().impl(), createTableRowWrapper);
       map().set(ulTag.localName().impl(), createUListWrapper);
       map().set(colgroupTag.localName().impl(), createTableColWrapper);
       map().set(h2Tag.localName().impl(), createHeadingWrapper);
       map().set(h3Tag.localName().impl(), createHeadingWrapper);
       map().set(h4Tag.localName().impl(), createHeadingWrapper);
       map().set(h5Tag.localName().impl(), createHeadingWrapper);
       map().set(h6Tag.localName().impl(), createHeadingWrapper);
       map().set(imageTag.localName().impl(), createImageWrapper);
       map().set(insTag.localName().impl(), createModWrapper);
       map().set(keygenTag.localName().impl(), createSelectWrapper);
       map().set(listingTag.localName().impl(), createPreWrapper);
       map().set(tfootTag.localName().impl(), createTableSectionWrapper);
       map().set(thTag.localName().impl(), createTableCellWrapper);
       map().set(theadTag.localName().impl(), createTableSectionWrapper);
       map().set(xmpTag.localName().impl(), createPreWrapper);
    }
    CreateHTMLElementWrapperFunction createWrapperFunction = map().get(element->localName().impl());
    if (createWrapperFunction)
        return createWrapperFunction(exec, element);
    return new (exec) JSHTMLElement(JSHTMLElementPrototype::self(exec), element.get());
}

// 4/02/09 CSidhall - Added for static leak fix
void WrapperFactory::staticFinalize()
{
#if USE(MULTIPLE_THREADS)
    // Unsupported
#else
    map().clear();
#endif

}
    



}

