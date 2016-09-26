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

#include "JSSVGFEComponentTransferElement.h"

#include "JSSVGAnimatedString.h"
#include "SVGFEComponentTransferElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedLength.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFEComponentTransferElementTableValues[] =
{
    { "in1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEComponentTransferElementIn1), (intptr_t)0, NoIntrinsic },
#if ENABLE(SVG)
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEComponentTransferElementX), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEComponentTransferElementY), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEComponentTransferElementWidth), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEComponentTransferElementHeight), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "result", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEComponentTransferElementResult), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEComponentTransferElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEComponentTransferElementTable = { 18, 15, JSSVGFEComponentTransferElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFEComponentTransferElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEComponentTransferElementConstructorTable = { 1, 0, JSSVGFEComponentTransferElementConstructorTableValues, 0 };
const ClassInfo JSSVGFEComponentTransferElementConstructor::s_info = { "SVGFEComponentTransferElementConstructor", &Base::s_info, &JSSVGFEComponentTransferElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFEComponentTransferElementConstructor) };

JSSVGFEComponentTransferElementConstructor::JSSVGFEComponentTransferElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEComponentTransferElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGFEComponentTransferElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFEComponentTransferElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEComponentTransferElementConstructor, JSDOMWrapper>(exec, &JSSVGFEComponentTransferElementConstructorTable, jsCast<JSSVGFEComponentTransferElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGFEComponentTransferElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEComponentTransferElementConstructor, JSDOMWrapper>(exec, &JSSVGFEComponentTransferElementConstructorTable, jsCast<JSSVGFEComponentTransferElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEComponentTransferElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFEComponentTransferElementPrototypeTable = { 1, 0, JSSVGFEComponentTransferElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEComponentTransferElementPrototype::s_info = { "SVGFEComponentTransferElementPrototype", &Base::s_info, &JSSVGFEComponentTransferElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFEComponentTransferElementPrototype) };

JSObject* JSSVGFEComponentTransferElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEComponentTransferElement>(exec, globalObject);
}

const ClassInfo JSSVGFEComponentTransferElement::s_info = { "SVGFEComponentTransferElement", &Base::s_info, &JSSVGFEComponentTransferElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFEComponentTransferElement) };

JSSVGFEComponentTransferElement::JSSVGFEComponentTransferElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEComponentTransferElement> impl)
    : JSSVGStyledElement(structure, globalObject, impl)
{
}

void JSSVGFEComponentTransferElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFEComponentTransferElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGFEComponentTransferElementPrototype::create(exec->vm(), globalObject, JSSVGFEComponentTransferElementPrototype::createStructure(exec->vm(), globalObject, JSSVGStyledElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEComponentTransferElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEComponentTransferElement* thisObject = jsCast<JSSVGFEComponentTransferElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGFEComponentTransferElement, Base>(exec, &JSSVGFEComponentTransferElementTable, thisObject, propertyName, slot);
}

bool JSSVGFEComponentTransferElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGFEComponentTransferElement* thisObject = jsCast<JSSVGFEComponentTransferElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGFEComponentTransferElement, Base>(exec, &JSSVGFEComponentTransferElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGFEComponentTransferElementIn1(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEComponentTransferElement* castedThis = jsCast<JSSVGFEComponentTransferElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEComponentTransferElement* impl = static_cast<SVGFEComponentTransferElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = impl->in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGFEComponentTransferElementX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEComponentTransferElement* castedThis = jsCast<JSSVGFEComponentTransferElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEComponentTransferElement* impl = static_cast<SVGFEComponentTransferElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEComponentTransferElementY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEComponentTransferElement* castedThis = jsCast<JSSVGFEComponentTransferElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEComponentTransferElement* impl = static_cast<SVGFEComponentTransferElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEComponentTransferElementWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEComponentTransferElement* castedThis = jsCast<JSSVGFEComponentTransferElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEComponentTransferElement* impl = static_cast<SVGFEComponentTransferElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEComponentTransferElementHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEComponentTransferElement* castedThis = jsCast<JSSVGFEComponentTransferElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEComponentTransferElement* impl = static_cast<SVGFEComponentTransferElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEComponentTransferElementResult(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEComponentTransferElement* castedThis = jsCast<JSSVGFEComponentTransferElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEComponentTransferElement* impl = static_cast<SVGFEComponentTransferElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = impl->resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGFEComponentTransferElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEComponentTransferElement* domObject = jsCast<JSSVGFEComponentTransferElement*>(asObject(slotBase));
    return JSSVGFEComponentTransferElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFEComponentTransferElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEComponentTransferElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(FILTERS) && ENABLE(SVG)
