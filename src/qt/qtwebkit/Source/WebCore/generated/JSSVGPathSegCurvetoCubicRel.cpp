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

#include "JSSVGPathSegCurvetoCubicRel.h"

#include "SVGPathSegCurvetoCubicRel.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGPathSegCurvetoCubicRelTableValues[] =
{
    { "x", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicRelX), (intptr_t)setJSSVGPathSegCurvetoCubicRelX, NoIntrinsic },
    { "y", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicRelY), (intptr_t)setJSSVGPathSegCurvetoCubicRelY, NoIntrinsic },
    { "x1", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicRelX1), (intptr_t)setJSSVGPathSegCurvetoCubicRelX1, NoIntrinsic },
    { "y1", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicRelY1), (intptr_t)setJSSVGPathSegCurvetoCubicRelY1, NoIntrinsic },
    { "x2", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicRelX2), (intptr_t)setJSSVGPathSegCurvetoCubicRelX2, NoIntrinsic },
    { "y2", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicRelY2), (intptr_t)setJSSVGPathSegCurvetoCubicRelY2, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGPathSegCurvetoCubicRelConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegCurvetoCubicRelTable = { 16, 15, JSSVGPathSegCurvetoCubicRelTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGPathSegCurvetoCubicRelConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegCurvetoCubicRelConstructorTable = { 1, 0, JSSVGPathSegCurvetoCubicRelConstructorTableValues, 0 };
const ClassInfo JSSVGPathSegCurvetoCubicRelConstructor::s_info = { "SVGPathSegCurvetoCubicRelConstructor", &Base::s_info, &JSSVGPathSegCurvetoCubicRelConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGPathSegCurvetoCubicRelConstructor) };

JSSVGPathSegCurvetoCubicRelConstructor::JSSVGPathSegCurvetoCubicRelConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGPathSegCurvetoCubicRelConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGPathSegCurvetoCubicRelPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGPathSegCurvetoCubicRelConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPathSegCurvetoCubicRelConstructor, JSDOMWrapper>(exec, &JSSVGPathSegCurvetoCubicRelConstructorTable, jsCast<JSSVGPathSegCurvetoCubicRelConstructor*>(cell), propertyName, slot);
}

bool JSSVGPathSegCurvetoCubicRelConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGPathSegCurvetoCubicRelConstructor, JSDOMWrapper>(exec, &JSSVGPathSegCurvetoCubicRelConstructorTable, jsCast<JSSVGPathSegCurvetoCubicRelConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPathSegCurvetoCubicRelPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGPathSegCurvetoCubicRelPrototypeTable = { 1, 0, JSSVGPathSegCurvetoCubicRelPrototypeTableValues, 0 };
const ClassInfo JSSVGPathSegCurvetoCubicRelPrototype::s_info = { "SVGPathSegCurvetoCubicRelPrototype", &Base::s_info, &JSSVGPathSegCurvetoCubicRelPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGPathSegCurvetoCubicRelPrototype) };

JSObject* JSSVGPathSegCurvetoCubicRelPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGPathSegCurvetoCubicRel>(exec, globalObject);
}

const ClassInfo JSSVGPathSegCurvetoCubicRel::s_info = { "SVGPathSegCurvetoCubicRel", &Base::s_info, &JSSVGPathSegCurvetoCubicRelTable, 0 , CREATE_METHOD_TABLE(JSSVGPathSegCurvetoCubicRel) };

JSSVGPathSegCurvetoCubicRel::JSSVGPathSegCurvetoCubicRel(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGPathSegCurvetoCubicRel> impl)
    : JSSVGPathSeg(structure, globalObject, impl)
{
}

void JSSVGPathSegCurvetoCubicRel::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGPathSegCurvetoCubicRel::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGPathSegCurvetoCubicRelPrototype::create(exec->vm(), globalObject, JSSVGPathSegCurvetoCubicRelPrototype::createStructure(exec->vm(), globalObject, JSSVGPathSegPrototype::self(exec, globalObject)));
}

bool JSSVGPathSegCurvetoCubicRel::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGPathSegCurvetoCubicRel* thisObject = jsCast<JSSVGPathSegCurvetoCubicRel*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGPathSegCurvetoCubicRel, Base>(exec, &JSSVGPathSegCurvetoCubicRelTable, thisObject, propertyName, slot);
}

bool JSSVGPathSegCurvetoCubicRel::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGPathSegCurvetoCubicRel* thisObject = jsCast<JSSVGPathSegCurvetoCubicRel*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGPathSegCurvetoCubicRel, Base>(exec, &JSSVGPathSegCurvetoCubicRelTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGPathSegCurvetoCubicRelX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegCurvetoCubicRel* castedThis = jsCast<JSSVGPathSegCurvetoCubicRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicRel* impl = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    JSValue result = jsNumber(impl->x());
    return result;
}


JSValue jsSVGPathSegCurvetoCubicRelY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegCurvetoCubicRel* castedThis = jsCast<JSSVGPathSegCurvetoCubicRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicRel* impl = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    JSValue result = jsNumber(impl->y());
    return result;
}


JSValue jsSVGPathSegCurvetoCubicRelX1(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegCurvetoCubicRel* castedThis = jsCast<JSSVGPathSegCurvetoCubicRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicRel* impl = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    JSValue result = jsNumber(impl->x1());
    return result;
}


JSValue jsSVGPathSegCurvetoCubicRelY1(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegCurvetoCubicRel* castedThis = jsCast<JSSVGPathSegCurvetoCubicRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicRel* impl = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    JSValue result = jsNumber(impl->y1());
    return result;
}


JSValue jsSVGPathSegCurvetoCubicRelX2(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegCurvetoCubicRel* castedThis = jsCast<JSSVGPathSegCurvetoCubicRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicRel* impl = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    JSValue result = jsNumber(impl->x2());
    return result;
}


JSValue jsSVGPathSegCurvetoCubicRelY2(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegCurvetoCubicRel* castedThis = jsCast<JSSVGPathSegCurvetoCubicRel*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGPathSegCurvetoCubicRel* impl = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    JSValue result = jsNumber(impl->y2());
    return result;
}


JSValue jsSVGPathSegCurvetoCubicRelConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGPathSegCurvetoCubicRel* domObject = jsCast<JSSVGPathSegCurvetoCubicRel*>(asObject(slotBase));
    return JSSVGPathSegCurvetoCubicRel::getConstructor(exec, domObject->globalObject());
}

void JSSVGPathSegCurvetoCubicRel::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSSVGPathSegCurvetoCubicRel* thisObject = jsCast<JSSVGPathSegCurvetoCubicRel*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSSVGPathSegCurvetoCubicRel, Base>(exec, propertyName, value, &JSSVGPathSegCurvetoCubicRelTable, thisObject, slot);
}

void setJSSVGPathSegCurvetoCubicRelX(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsCast<JSSVGPathSegCurvetoCubicRel*>(thisObject);
    SVGPathSegCurvetoCubicRel* impl = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setX(nativeValue);
}


void setJSSVGPathSegCurvetoCubicRelY(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsCast<JSSVGPathSegCurvetoCubicRel*>(thisObject);
    SVGPathSegCurvetoCubicRel* impl = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setY(nativeValue);
}


void setJSSVGPathSegCurvetoCubicRelX1(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsCast<JSSVGPathSegCurvetoCubicRel*>(thisObject);
    SVGPathSegCurvetoCubicRel* impl = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setX1(nativeValue);
}


void setJSSVGPathSegCurvetoCubicRelY1(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsCast<JSSVGPathSegCurvetoCubicRel*>(thisObject);
    SVGPathSegCurvetoCubicRel* impl = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setY1(nativeValue);
}


void setJSSVGPathSegCurvetoCubicRelX2(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsCast<JSSVGPathSegCurvetoCubicRel*>(thisObject);
    SVGPathSegCurvetoCubicRel* impl = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setX2(nativeValue);
}


void setJSSVGPathSegCurvetoCubicRelY2(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSSVGPathSegCurvetoCubicRel* castedThis = jsCast<JSSVGPathSegCurvetoCubicRel*>(thisObject);
    SVGPathSegCurvetoCubicRel* impl = static_cast<SVGPathSegCurvetoCubicRel*>(castedThis->impl());
    float nativeValue(value.toFloat(exec));
    if (exec->hadException())
        return;
    impl->setY2(nativeValue);
}


JSValue JSSVGPathSegCurvetoCubicRel::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGPathSegCurvetoCubicRelConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
