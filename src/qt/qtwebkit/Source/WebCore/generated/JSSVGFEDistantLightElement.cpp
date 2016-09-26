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

#include "JSSVGFEDistantLightElement.h"

#include "JSSVGAnimatedNumber.h"
#include "SVGFEDistantLightElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFEDistantLightElementTableValues[] =
{
    { "azimuth", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDistantLightElementAzimuth), (intptr_t)0, NoIntrinsic },
    { "elevation", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDistantLightElementElevation), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDistantLightElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEDistantLightElementTable = { 9, 7, JSSVGFEDistantLightElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFEDistantLightElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEDistantLightElementConstructorTable = { 1, 0, JSSVGFEDistantLightElementConstructorTableValues, 0 };
const ClassInfo JSSVGFEDistantLightElementConstructor::s_info = { "SVGFEDistantLightElementConstructor", &Base::s_info, &JSSVGFEDistantLightElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFEDistantLightElementConstructor) };

JSSVGFEDistantLightElementConstructor::JSSVGFEDistantLightElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEDistantLightElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGFEDistantLightElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFEDistantLightElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEDistantLightElementConstructor, JSDOMWrapper>(exec, &JSSVGFEDistantLightElementConstructorTable, jsCast<JSSVGFEDistantLightElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGFEDistantLightElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEDistantLightElementConstructor, JSDOMWrapper>(exec, &JSSVGFEDistantLightElementConstructorTable, jsCast<JSSVGFEDistantLightElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEDistantLightElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEDistantLightElementPrototypeTable = { 1, 0, JSSVGFEDistantLightElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEDistantLightElementPrototype::s_info = { "SVGFEDistantLightElementPrototype", &Base::s_info, &JSSVGFEDistantLightElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFEDistantLightElementPrototype) };

JSObject* JSSVGFEDistantLightElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEDistantLightElement>(exec, globalObject);
}

const ClassInfo JSSVGFEDistantLightElement::s_info = { "SVGFEDistantLightElement", &Base::s_info, &JSSVGFEDistantLightElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFEDistantLightElement) };

JSSVGFEDistantLightElement::JSSVGFEDistantLightElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEDistantLightElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGFEDistantLightElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFEDistantLightElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGFEDistantLightElementPrototype::create(exec->vm(), globalObject, JSSVGFEDistantLightElementPrototype::createStructure(exec->vm(), globalObject, JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEDistantLightElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEDistantLightElement* thisObject = jsCast<JSSVGFEDistantLightElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGFEDistantLightElement, Base>(exec, &JSSVGFEDistantLightElementTable, thisObject, propertyName, slot);
}

bool JSSVGFEDistantLightElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGFEDistantLightElement* thisObject = jsCast<JSSVGFEDistantLightElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGFEDistantLightElement, Base>(exec, &JSSVGFEDistantLightElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGFEDistantLightElementAzimuth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDistantLightElement* castedThis = jsCast<JSSVGFEDistantLightElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDistantLightElement* impl = static_cast<SVGFEDistantLightElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->azimuthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDistantLightElementElevation(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDistantLightElement* castedThis = jsCast<JSSVGFEDistantLightElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDistantLightElement* impl = static_cast<SVGFEDistantLightElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = impl->elevationAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDistantLightElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDistantLightElement* domObject = jsCast<JSSVGFEDistantLightElement*>(asObject(slotBase));
    return JSSVGFEDistantLightElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFEDistantLightElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEDistantLightElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(FILTERS) && ENABLE(SVG)
