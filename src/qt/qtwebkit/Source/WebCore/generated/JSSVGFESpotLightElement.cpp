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

#include "JSSVGFESpotLightElement.h"

#include "JSSVGAnimatedNumber.h"
#include "SVGFESpotLightElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFESpotLightElementTableValues[] =
{
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpotLightElementX), (intptr_t)0, NoIntrinsic },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpotLightElementY), (intptr_t)0, NoIntrinsic },
    { "z", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpotLightElementZ), (intptr_t)0, NoIntrinsic },
    { "pointsAtX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpotLightElementPointsAtX), (intptr_t)0, NoIntrinsic },
    { "pointsAtY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpotLightElementPointsAtY), (intptr_t)0, NoIntrinsic },
    { "pointsAtZ", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpotLightElementPointsAtZ), (intptr_t)0, NoIntrinsic },
    { "specularExponent", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpotLightElementSpecularExponent), (intptr_t)0, NoIntrinsic },
    { "limitingConeAngle", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpotLightElementLimitingConeAngle), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpotLightElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFESpotLightElementTable = { 32, 31, JSSVGFESpotLightElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFESpotLightElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFESpotLightElementConstructorTable = { 1, 0, JSSVGFESpotLightElementConstructorTableValues, 0 };
const ClassInfo JSSVGFESpotLightElementConstructor::s_info = { "SVGFESpotLightElementConstructor", &Base::s_info, &JSSVGFESpotLightElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFESpotLightElementConstructor) };

JSSVGFESpotLightElementConstructor::JSSVGFESpotLightElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFESpotLightElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGFESpotLightElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFESpotLightElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFESpotLightElementConstructor, JSDOMWrapper>(exec, &JSSVGFESpotLightElementConstructorTable, jsCast<JSSVGFESpotLightElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGFESpotLightElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFESpotLightElementConstructor, JSDOMWrapper>(exec, &JSSVGFESpotLightElementConstructorTable, jsCast<JSSVGFESpotLightElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFESpotLightElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFESpotLightElementPrototypeTable = { 1, 0, JSSVGFESpotLightElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFESpotLightElementPrototype::s_info = { "SVGFESpotLightElementPrototype", &Base::s_info, &JSSVGFESpotLightElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFESpotLightElementPrototype) };

JSObject* JSSVGFESpotLightElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFESpotLightElement>(exec, globalObject);
}

const ClassInfo JSSVGFESpotLightElement::s_info = { "SVGFESpotLightElement", &Base::s_info, &JSSVGFESpotLightElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFESpotLightElement) };

JSSVGFESpotLightElement::JSSVGFESpotLightElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFESpotLightElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGFESpotLightElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFESpotLightElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGFESpotLightElementPrototype::create(exec->vm(), globalObject, JSSVGFESpotLightElementPrototype::createStructure(exec->vm(), globalObject, JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFESpotLightElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFESpotLightElement* thisObject = jsCast<JSSVGFESpotLightElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGFESpotLightElement, Base>(exec, &JSSVGFESpotLightElementTable, thisObject, propertyName, slot);
}

bool JSSVGFESpotLightElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGFESpotLightElement* thisObject = jsCast<JSSVGFESpotLightElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGFESpotLightElement, Base>(exec, &JSSVGFESpotLightElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGFESpotLightElementX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpotLightElement* castedThis = jsCast<JSSVGFESpotLightElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpotLightElement* impl = static_cast<SVGFESpotLightElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFESpotLightElementY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpotLightElement* castedThis = jsCast<JSSVGFESpotLightElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpotLightElement* impl = static_cast<SVGFESpotLightElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFESpotLightElementZ(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpotLightElement* castedThis = jsCast<JSSVGFESpotLightElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpotLightElement* impl = static_cast<SVGFESpotLightElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->zAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFESpotLightElementPointsAtX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpotLightElement* castedThis = jsCast<JSSVGFESpotLightElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpotLightElement* impl = static_cast<SVGFESpotLightElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->pointsAtXAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFESpotLightElementPointsAtY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpotLightElement* castedThis = jsCast<JSSVGFESpotLightElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpotLightElement* impl = static_cast<SVGFESpotLightElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->pointsAtYAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFESpotLightElementPointsAtZ(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpotLightElement* castedThis = jsCast<JSSVGFESpotLightElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpotLightElement* impl = static_cast<SVGFESpotLightElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->pointsAtZAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFESpotLightElementSpecularExponent(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpotLightElement* castedThis = jsCast<JSSVGFESpotLightElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpotLightElement* impl = static_cast<SVGFESpotLightElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->specularExponentAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFESpotLightElementLimitingConeAngle(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpotLightElement* castedThis = jsCast<JSSVGFESpotLightElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpotLightElement* impl = static_cast<SVGFESpotLightElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->limitingConeAngleAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFESpotLightElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpotLightElement* domObject = jsCast<JSSVGFESpotLightElement*>(asObject(slotBase));
    return JSSVGFESpotLightElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFESpotLightElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFESpotLightElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(FILTERS) && ENABLE(SVG)
