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

#if ENABLE(FILTERS) && ENABLE(SVG)

#include "JSSVGFilterElement.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedInteger.h"
#include "JSSVGAnimatedLength.h"
#include "SVGFilterElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedString.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFilterElementTableValues[] =
{
    { "filterUnits", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFilterElementFilterUnits), (intptr_t)0, NoIntrinsic },
    { "primitiveUnits", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFilterElementPrimitiveUnits), (intptr_t)0, NoIntrinsic },
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFilterElementX), (intptr_t)0, NoIntrinsic },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFilterElementY), (intptr_t)0, NoIntrinsic },
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFilterElementWidth), (intptr_t)0, NoIntrinsic },
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFilterElementHeight), (intptr_t)0, NoIntrinsic },
    { "filterResX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFilterElementFilterResX), (intptr_t)0, NoIntrinsic },
    { "filterResY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFilterElementFilterResY), (intptr_t)0, NoIntrinsic },
#if ENABLE(SVG)
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFilterElementExternalResourcesRequired), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "href", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFilterElementHref), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFilterElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFilterElementTable = { 34, 31, JSSVGFilterElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFilterElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFilterElementConstructorTable = { 1, 0, JSSVGFilterElementConstructorTableValues, 0 };
const ClassInfo JSSVGFilterElementConstructor::s_info = { "SVGFilterElementConstructor", &Base::s_info, &JSSVGFilterElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFilterElementConstructor) };

JSSVGFilterElementConstructor::JSSVGFilterElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFilterElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGFilterElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFilterElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFilterElementConstructor, JSDOMWrapper>(exec, &JSSVGFilterElementConstructorTable, jsCast<JSSVGFilterElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGFilterElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFilterElementConstructor, JSDOMWrapper>(exec, &JSSVGFilterElementConstructorTable, jsCast<JSSVGFilterElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFilterElementPrototypeTableValues[] =
{
    { "setFilterRes", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsSVGFilterElementPrototypeFunctionSetFilterRes), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFilterElementPrototypeTable = { 2, 1, JSSVGFilterElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFilterElementPrototype::s_info = { "SVGFilterElementPrototype", &Base::s_info, &JSSVGFilterElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFilterElementPrototype) };

JSObject* JSSVGFilterElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFilterElement>(exec, globalObject);
}

bool JSSVGFilterElementPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFilterElementPrototype* thisObject = jsCast<JSSVGFilterElementPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGFilterElementPrototypeTable, thisObject, propertyName, slot);
}

bool JSSVGFilterElementPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGFilterElementPrototype* thisObject = jsCast<JSSVGFilterElementPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGFilterElementPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSSVGFilterElement::s_info = { "SVGFilterElement", &Base::s_info, &JSSVGFilterElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFilterElement) };

JSSVGFilterElement::JSSVGFilterElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFilterElement> impl)
    : JSSVGStyledElement(structure, globalObject, impl)
{
}

void JSSVGFilterElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFilterElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGFilterElementPrototype::create(exec->vm(), globalObject, JSSVGFilterElementPrototype::createStructure(exec->vm(), globalObject, JSSVGStyledElementPrototype::self(exec, globalObject)));
}

bool JSSVGFilterElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFilterElement* thisObject = jsCast<JSSVGFilterElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGFilterElement, Base>(exec, &JSSVGFilterElementTable, thisObject, propertyName, slot);
}

bool JSSVGFilterElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGFilterElement* thisObject = jsCast<JSSVGFilterElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGFilterElement, Base>(exec, &JSSVGFilterElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGFilterElementFilterUnits(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFilterElement* castedThis = jsCast<JSSVGFilterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFilterElement* impl = static_cast<SVGFilterElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = impl->filterUnitsAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFilterElementPrimitiveUnits(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFilterElement* castedThis = jsCast<JSSVGFilterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFilterElement* impl = static_cast<SVGFilterElement*>(castedThis->impl());
    RefPtr<SVGAnimatedEnumeration> obj = impl->primitiveUnitsAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFilterElementX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFilterElement* castedThis = jsCast<JSSVGFilterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFilterElement* impl = static_cast<SVGFilterElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFilterElementY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFilterElement* castedThis = jsCast<JSSVGFilterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFilterElement* impl = static_cast<SVGFilterElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFilterElementWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFilterElement* castedThis = jsCast<JSSVGFilterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFilterElement* impl = static_cast<SVGFilterElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFilterElementHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFilterElement* castedThis = jsCast<JSSVGFilterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFilterElement* impl = static_cast<SVGFilterElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFilterElementFilterResX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFilterElement* castedThis = jsCast<JSSVGFilterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFilterElement* impl = static_cast<SVGFilterElement*>(castedThis->impl());
    RefPtr<SVGAnimatedInteger> obj = impl->filterResXAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFilterElementFilterResY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFilterElement* castedThis = jsCast<JSSVGFilterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFilterElement* impl = static_cast<SVGFilterElement*>(castedThis->impl());
    RefPtr<SVGAnimatedInteger> obj = impl->filterResYAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGFilterElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFilterElement* castedThis = jsCast<JSSVGFilterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFilterElement* impl = static_cast<SVGFilterElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = impl->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFilterElementHref(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFilterElement* castedThis = jsCast<JSSVGFilterElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFilterElement* impl = static_cast<SVGFilterElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = impl->hrefAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGFilterElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFilterElement* domObject = jsCast<JSSVGFilterElement*>(asObject(slotBase));
    return JSSVGFilterElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFilterElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFilterElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGFilterElementPrototypeFunctionSetFilterRes(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGFilterElement::s_info))
        return throwVMTypeError(exec);
    JSSVGFilterElement* castedThis = jsCast<JSSVGFilterElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSVGFilterElement::s_info);
    SVGFilterElement* impl = static_cast<SVGFilterElement*>(castedThis->impl());
    unsigned filterResX(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    unsigned filterResY(toUInt32(exec, exec->argument(1), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->setFilterRes(filterResX, filterResY);
    return JSValue::encode(jsUndefined());
}


}

#endif // ENABLE(FILTERS) && ENABLE(SVG)
