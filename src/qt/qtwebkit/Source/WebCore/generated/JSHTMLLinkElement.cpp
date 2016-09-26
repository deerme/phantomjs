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

#include "config.h"
#include "JSHTMLLinkElement.h"

#include "HTMLLinkElement.h"
#include "HTMLNames.h"
#include "JSStyleSheet.h"
#include "KURL.h"
#include "StyleSheet.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLLinkElementTableValues[] =
{
    { "disabled", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLinkElementDisabled), (intptr_t)setJSHTMLLinkElementDisabled, NoIntrinsic },
    { "charset", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLinkElementCharset), (intptr_t)setJSHTMLLinkElementCharset, NoIntrinsic },
    { "href", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLinkElementHref), (intptr_t)setJSHTMLLinkElementHref, NoIntrinsic },
    { "hreflang", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLinkElementHreflang), (intptr_t)setJSHTMLLinkElementHreflang, NoIntrinsic },
    { "media", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLinkElementMedia), (intptr_t)setJSHTMLLinkElementMedia, NoIntrinsic },
    { "rel", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLinkElementRel), (intptr_t)setJSHTMLLinkElementRel, NoIntrinsic },
    { "rev", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLinkElementRev), (intptr_t)setJSHTMLLinkElementRev, NoIntrinsic },
    { "sizes", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLinkElementSizes), (intptr_t)setJSHTMLLinkElementSizes, NoIntrinsic },
    { "target", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLinkElementTarget), (intptr_t)setJSHTMLLinkElementTarget, NoIntrinsic },
    { "type", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLinkElementType), (intptr_t)setJSHTMLLinkElementType, NoIntrinsic },
    { "sheet", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLinkElementSheet), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLLinkElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLLinkElementTable = { 33, 31, JSHTMLLinkElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLLinkElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLLinkElementConstructorTable = { 1, 0, JSHTMLLinkElementConstructorTableValues, 0 };
const ClassInfo JSHTMLLinkElementConstructor::s_info = { "HTMLLinkElementConstructor", &Base::s_info, &JSHTMLLinkElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLLinkElementConstructor) };

JSHTMLLinkElementConstructor::JSHTMLLinkElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLLinkElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSHTMLLinkElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLLinkElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLLinkElementConstructor, JSDOMWrapper>(exec, &JSHTMLLinkElementConstructorTable, jsCast<JSHTMLLinkElementConstructor*>(cell), propertyName, slot);
}

bool JSHTMLLinkElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLLinkElementConstructor, JSDOMWrapper>(exec, &JSHTMLLinkElementConstructorTable, jsCast<JSHTMLLinkElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLLinkElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSHTMLLinkElementPrototypeTable = { 1, 0, JSHTMLLinkElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLLinkElementPrototype::s_info = { "HTMLLinkElementPrototype", &Base::s_info, &JSHTMLLinkElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLLinkElementPrototype) };

JSObject* JSHTMLLinkElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLLinkElement>(exec, globalObject);
}

const ClassInfo JSHTMLLinkElement::s_info = { "HTMLLinkElement", &Base::s_info, &JSHTMLLinkElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLLinkElement) };

JSHTMLLinkElement::JSHTMLLinkElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLLinkElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLLinkElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSHTMLLinkElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSHTMLLinkElementPrototype::create(exec->vm(), globalObject, JSHTMLLinkElementPrototype::createStructure(exec->vm(), globalObject, JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLLinkElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLLinkElement* thisObject = jsCast<JSHTMLLinkElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSHTMLLinkElement, Base>(exec, &JSHTMLLinkElementTable, thisObject, propertyName, slot);
}

bool JSHTMLLinkElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSHTMLLinkElement* thisObject = jsCast<JSHTMLLinkElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSHTMLLinkElement, Base>(exec, &JSHTMLLinkElementTable, thisObject, propertyName, descriptor);
}

JSValue jsHTMLLinkElementDisabled(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    JSValue result = jsBoolean(impl->fastHasAttribute(WebCore::HTMLNames::disabledAttr));
    return result;
}


JSValue jsHTMLLinkElementCharset(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::charsetAttr));
    return result;
}


JSValue jsHTMLLinkElementHref(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->getURLAttribute(WebCore::HTMLNames::hrefAttr));
    return result;
}


JSValue jsHTMLLinkElementHreflang(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::hreflangAttr));
    return result;
}


JSValue jsHTMLLinkElementMedia(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::mediaAttr));
    return result;
}


JSValue jsHTMLLinkElementRel(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::relAttr));
    return result;
}


JSValue jsHTMLLinkElementRev(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::revAttr));
    return result;
}


JSValue jsHTMLLinkElementSizes(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(asObject(slotBase));
    return castedThis->sizes(exec);
}


JSValue jsHTMLLinkElementTarget(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::targetAttr));
    return result;
}


JSValue jsHTMLLinkElementType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->fastGetAttribute(WebCore::HTMLNames::typeAttr));
    return result;
}


JSValue jsHTMLLinkElementSheet(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->sheet()));
    return result;
}


JSValue jsHTMLLinkElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLLinkElement* domObject = jsCast<JSHTMLLinkElement*>(asObject(slotBase));
    return JSHTMLLinkElement::getConstructor(exec, domObject->globalObject());
}

void JSHTMLLinkElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLLinkElement* thisObject = jsCast<JSHTMLLinkElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSHTMLLinkElement, Base>(exec, propertyName, value, &JSHTMLLinkElementTable, thisObject, slot);
}

void setJSHTMLLinkElementDisabled(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(thisObject);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl->setBooleanAttribute(WebCore::HTMLNames::disabledAttr, nativeValue);
}


void setJSHTMLLinkElementCharset(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(thisObject);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::charsetAttr, nativeValue);
}


void setJSHTMLLinkElementHref(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(thisObject);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::hrefAttr, nativeValue);
}


void setJSHTMLLinkElementHreflang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(thisObject);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::hreflangAttr, nativeValue);
}


void setJSHTMLLinkElementMedia(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(thisObject);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::mediaAttr, nativeValue);
}


void setJSHTMLLinkElementRel(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(thisObject);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::relAttr, nativeValue);
}


void setJSHTMLLinkElementRev(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(thisObject);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::revAttr, nativeValue);
}


void setJSHTMLLinkElementSizes(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    jsCast<JSHTMLLinkElement*>(thisObject)->setSizes(exec, value);
}


void setJSHTMLLinkElementTarget(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(thisObject);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::targetAttr, nativeValue);
}


void setJSHTMLLinkElementType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLLinkElement* castedThis = jsCast<JSHTMLLinkElement*>(thisObject);
    HTMLLinkElement* impl = static_cast<HTMLLinkElement*>(castedThis->impl());
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setAttribute(WebCore::HTMLNames::typeAttr, nativeValue);
}


JSValue JSHTMLLinkElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLLinkElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}