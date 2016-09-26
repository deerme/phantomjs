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

#if ENABLE(SVG)

#include "JSSVGPatternElement.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedTransformList.h"
#include "SVGPatternElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedPreserveAspectRatio.h"
#include "JSSVGAnimatedRect.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGStringList.h"
#include "SVGStringList.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGPatternElementTableValues[] =
{
    { "patternUnits", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementPatternUnits), (intptr_t)0, NoIntrinsic },
    { "patternContentUnits", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementPatternContentUnits), (intptr_t)0, NoIntrinsic },
    { "patternTransform", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementPatternTransform), (intptr_t)0, NoIntrinsic },
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementX), (intptr_t)0, NoIntrinsic },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementY), (intptr_t)0, NoIntrinsic },
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementWidth), (intptr_t)0, NoIntrinsic },
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementHeight), (intptr_t)0, NoIntrinsic },
#if ENABLE(SVG)
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementExternalResourcesRequired), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "viewBox", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementViewBox), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "preserveAspectRatio", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementPreserveAspectRatio), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "requiredFeatures", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementRequiredFeatures), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "requiredExtensions", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementRequiredExtensions), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "systemLanguage", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementSystemLanguage), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "href", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementHref), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPatternElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPatternElementTable = { 37, 31, JSSVGPatternElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGPatternElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPatternElementConstructorTable = { 1, 0, JSSVGPatternElementConstructorTableValues, 0 };
const ClassInfo JSSVGPatternElementConstructor::s_info = { "SVGPatternElementConstructor", &Base::s_info, &JSSVGPatternElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGPatternElementConstructor) };

JSSVGPatternElementConstructor::JSSVGPatternElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPatternElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGPatternElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGPatternElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPatternElementConstructor, JSDOMWrapper>(exec, &JSSVGPatternElementConstructorTable, jsCast<JSSVGPatternElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGPatternElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPatternElementConstructor, JSDOMWrapper>(exec, &JSSVGPatternElementConstructorTable, jsCast<JSSVGPatternElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPatternElementPrototypeTableValues[] =
{
#if ENABLE(SVG)
    { "hasExtension", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsSVGPatternElementPrototypeFunctionHasExtension), (intptr_t)0, NoIntrinsic },
#endif
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPatternElementPrototypeTable = { 2, 1, JSSVGPatternElementPrototypeTableValues, 0 };
const ClassInfo JSSVGPatternElementPrototype::s_info = { "SVGPatternElementPrototype", &Base::s_info, &JSSVGPatternElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGPatternElementPrototype) };

JSObject* JSSVGPatternElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPatternElement>(exec, globalObject);
}

bool JSSVGPatternElementPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGPatternElementPrototype* thisObject = jsCast<JSSVGPatternElementPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGPatternElementPrototypeTable, thisObject, propertyName, slot);
}

bool JSSVGPatternElementPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGPatternElementPrototype* thisObject = jsCast<JSSVGPatternElementPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGPatternElementPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSSVGPatternElement::s_info = { "SVGPatternElement", &Base::s_info, &JSSVGPatternElementTable, 0 , CREATE_METHOD_TABLE(JSSVGPatternElement) };

JSSVGPatternElement::JSSVGPatternElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPatternElement> impl)
    : JSSVGStyledElement(structure, globalObject, impl)
{
}

void JSSVGPatternElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPatternElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGPatternElementPrototype::create(exec->vm(), globalObject, JSSVGPatternElementPrototype::createStructure(exec->vm(), globalObject, JSSVGStyledElementPrototype::self(exec, globalObject)));
}

bool JSSVGPatternElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGPatternElement* thisObject = jsCast<JSSVGPatternElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGPatternElement, Base>(exec, &JSSVGPatternElementTable, thisObject, propertyName, slot);
}

bool JSSVGPatternElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGPatternElement* thisObject = jsCast<JSSVGPatternElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGPatternElement, Base>(exec, &JSSVGPatternElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGPatternElementPatternUnits(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPatternElement* castedThis = jsCast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* impl = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = impl->patternUnitsAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementPatternContentUnits(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPatternElement* castedThis = jsCast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* impl = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = impl->patternContentUnitsAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementPatternTransform(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPatternElement* castedThis = jsCast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* impl = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedTransformList> obj = impl->patternTransformAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPatternElement* castedThis = jsCast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* impl = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPatternElement* castedThis = jsCast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* impl = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPatternElement* castedThis = jsCast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* impl = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGPatternElementHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPatternElement* castedThis = jsCast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* impl = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGPatternElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPatternElement* castedThis = jsCast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* impl = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = impl->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGPatternElementViewBox(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPatternElement* castedThis = jsCast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* impl = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedRect> obj = impl->viewBoxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGPatternElementPreserveAspectRatio(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPatternElement* castedThis = jsCast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* impl = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedPreserveAspectRatio> obj = impl->preserveAspectRatioAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGPatternElementRequiredFeatures(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPatternElement* castedThis = jsCast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* impl = static_cast<SVGPatternElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(impl, impl->requiredFeatures())));
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGPatternElementRequiredExtensions(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPatternElement* castedThis = jsCast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* impl = static_cast<SVGPatternElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(impl, impl->requiredExtensions())));
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGPatternElementSystemLanguage(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPatternElement* castedThis = jsCast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* impl = static_cast<SVGPatternElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(impl, impl->systemLanguage())));
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGPatternElementHref(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPatternElement* castedThis = jsCast<JSSVGPatternElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPatternElement* impl = static_cast<SVGPatternElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = impl->hrefAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGPatternElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPatternElement* domObject = jsCast<JSSVGPatternElement*>(asObject(slotBase));
    return JSSVGPatternElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGPatternElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPatternElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

#if ENABLE(SVG)
EncodedJSValue JSC_HOST_CALL jsSVGPatternElementPrototypeFunctionHasExtension(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGPatternElement::s_info))
        return throwVMTypeError(exec);
    JSSVGPatternElement* castedThis = jsCast<JSSVGPatternElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGPatternElement::s_info);
    SVGPatternElement* impl = static_cast<SVGPatternElement*>(castedThis->impl());
    const String& extension(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->hasExtension(extension));
    return JSValue::encode(result);
}

#endif


}

#endif // ENABLE(SVG)