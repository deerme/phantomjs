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

#include "JSSVGAnimateMotionElement.h"

#include "SVGAnimateMotionElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGAnimateMotionElementTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimateMotionElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGAnimateMotionElementTable = { 2, 1, JSSVGAnimateMotionElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGAnimateMotionElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGAnimateMotionElementConstructorTable = { 1, 0, JSSVGAnimateMotionElementConstructorTableValues, 0 };
const ClassInfo JSSVGAnimateMotionElementConstructor::s_info = { "SVGAnimateMotionElementConstructor", &Base::s_info, &JSSVGAnimateMotionElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGAnimateMotionElementConstructor) };

JSSVGAnimateMotionElementConstructor::JSSVGAnimateMotionElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGAnimateMotionElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGAnimateMotionElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGAnimateMotionElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimateMotionElementConstructor, JSDOMWrapper>(exec, &JSSVGAnimateMotionElementConstructorTable, jsCast<JSSVGAnimateMotionElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGAnimateMotionElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGAnimateMotionElementConstructor, JSDOMWrapper>(exec, &JSSVGAnimateMotionElementConstructorTable, jsCast<JSSVGAnimateMotionElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGAnimateMotionElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGAnimateMotionElementPrototypeTable = { 1, 0, JSSVGAnimateMotionElementPrototypeTableValues, 0 };
const ClassInfo JSSVGAnimateMotionElementPrototype::s_info = { "SVGAnimateMotionElementPrototype", &Base::s_info, &JSSVGAnimateMotionElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGAnimateMotionElementPrototype) };

JSObject* JSSVGAnimateMotionElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimateMotionElement>(exec, globalObject);
}

const ClassInfo JSSVGAnimateMotionElement::s_info = { "SVGAnimateMotionElement", &Base::s_info, &JSSVGAnimateMotionElementTable, 0 , CREATE_METHOD_TABLE(JSSVGAnimateMotionElement) };

JSSVGAnimateMotionElement::JSSVGAnimateMotionElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimateMotionElement> impl)
    : JSSVGAnimationElement(structure, globalObject, impl)
{
}

void JSSVGAnimateMotionElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGAnimateMotionElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGAnimateMotionElementPrototype::create(exec->vm(), globalObject, JSSVGAnimateMotionElementPrototype::createStructure(exec->vm(), globalObject, JSSVGAnimationElementPrototype::self(exec, globalObject)));
}

bool JSSVGAnimateMotionElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGAnimateMotionElement* thisObject = jsCast<JSSVGAnimateMotionElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGAnimateMotionElement, Base>(exec, &JSSVGAnimateMotionElementTable, thisObject, propertyName, slot);
}

bool JSSVGAnimateMotionElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGAnimateMotionElement* thisObject = jsCast<JSSVGAnimateMotionElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGAnimateMotionElement, Base>(exec, &JSSVGAnimateMotionElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGAnimateMotionElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGAnimateMotionElement* domObject = jsCast<JSSVGAnimateMotionElement*>(asObject(slotBase));
    return JSSVGAnimateMotionElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGAnimateMotionElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimateMotionElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
