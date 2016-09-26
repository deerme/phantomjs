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

#include "JSSVGUseElement.h"

#include "JSSVGAnimatedLength.h"
#include "JSSVGElementInstance.h"
#include "SVGElementInstance.h"
#include "SVGUseElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedString.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGUseElementTableValues[] =
{
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUseElementX), (intptr_t)0, NoIntrinsic },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUseElementY), (intptr_t)0, NoIntrinsic },
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUseElementWidth), (intptr_t)0, NoIntrinsic },
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUseElementHeight), (intptr_t)0, NoIntrinsic },
    { "instanceRoot", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUseElementInstanceRoot), (intptr_t)0, NoIntrinsic },
    { "animatedInstanceRoot", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUseElementAnimatedInstanceRoot), (intptr_t)0, NoIntrinsic },
#if ENABLE(SVG)
    { "externalResourcesRequired", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUseElementExternalResourcesRequired), (intptr_t)0, NoIntrinsic },
#endif
#if ENABLE(SVG)
    { "href", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUseElementHref), (intptr_t)0, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGUseElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGUseElementTable = { 33, 31, JSSVGUseElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGUseElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGUseElementConstructorTable = { 1, 0, JSSVGUseElementConstructorTableValues, 0 };
const ClassInfo JSSVGUseElementConstructor::s_info = { "SVGUseElementConstructor", &Base::s_info, &JSSVGUseElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGUseElementConstructor) };

JSSVGUseElementConstructor::JSSVGUseElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGUseElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGUseElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGUseElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGUseElementConstructor, JSDOMWrapper>(exec, &JSSVGUseElementConstructorTable, jsCast<JSSVGUseElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGUseElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGUseElementConstructor, JSDOMWrapper>(exec, &JSSVGUseElementConstructorTable, jsCast<JSSVGUseElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGUseElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGUseElementPrototypeTable = { 1, 0, JSSVGUseElementPrototypeTableValues, 0 };
const ClassInfo JSSVGUseElementPrototype::s_info = { "SVGUseElementPrototype", &Base::s_info, &JSSVGUseElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGUseElementPrototype) };

JSObject* JSSVGUseElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGUseElement>(exec, globalObject);
}

const ClassInfo JSSVGUseElement::s_info = { "SVGUseElement", &Base::s_info, &JSSVGUseElementTable, 0 , CREATE_METHOD_TABLE(JSSVGUseElement) };

JSSVGUseElement::JSSVGUseElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGUseElement> impl)
    : JSSVGGraphicsElement(structure, globalObject, impl)
{
}

void JSSVGUseElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGUseElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGUseElementPrototype::create(exec->vm(), globalObject, JSSVGUseElementPrototype::createStructure(exec->vm(), globalObject, JSSVGGraphicsElementPrototype::self(exec, globalObject)));
}

bool JSSVGUseElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGUseElement* thisObject = jsCast<JSSVGUseElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGUseElement, Base>(exec, &JSSVGUseElementTable, thisObject, propertyName, slot);
}

bool JSSVGUseElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGUseElement* thisObject = jsCast<JSSVGUseElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGUseElement, Base>(exec, &JSSVGUseElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGUseElementX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGUseElement* castedThis = jsCast<JSSVGUseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGUseElement* impl = static_cast<SVGUseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGUseElementY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGUseElement* castedThis = jsCast<JSSVGUseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGUseElement* impl = static_cast<SVGUseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGUseElementWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGUseElement* castedThis = jsCast<JSSVGUseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGUseElement* impl = static_cast<SVGUseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGUseElementHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGUseElement* castedThis = jsCast<JSSVGUseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGUseElement* impl = static_cast<SVGUseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = impl->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGUseElementInstanceRoot(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGUseElement* castedThis = jsCast<JSSVGUseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGUseElement* impl = static_cast<SVGUseElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->instanceRoot()));
    return result;
}


JSValue jsSVGUseElementAnimatedInstanceRoot(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGUseElement* castedThis = jsCast<JSSVGUseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGUseElement* impl = static_cast<SVGUseElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->animatedInstanceRoot()));
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGUseElementExternalResourcesRequired(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGUseElement* castedThis = jsCast<JSSVGUseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGUseElement* impl = static_cast<SVGUseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedBoolean> obj = impl->externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGUseElementHref(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGUseElement* castedThis = jsCast<JSSVGUseElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGUseElement* impl = static_cast<SVGUseElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = impl->hrefAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGUseElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGUseElement* domObject = jsCast<JSSVGUseElement*>(asObject(slotBase));
    return JSSVGUseElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGUseElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGUseElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
