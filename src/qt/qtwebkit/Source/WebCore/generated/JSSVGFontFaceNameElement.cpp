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

#if ENABLE(SVG) && ENABLE(SVG_FONTS)

#include "JSSVGFontFaceNameElement.h"

#include "SVGFontFaceNameElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFontFaceNameElementTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFontFaceNameElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFontFaceNameElementTable = { 2, 1, JSSVGFontFaceNameElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFontFaceNameElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFontFaceNameElementConstructorTable = { 1, 0, JSSVGFontFaceNameElementConstructorTableValues, 0 };
const ClassInfo JSSVGFontFaceNameElementConstructor::s_info = { "SVGFontFaceNameElementConstructor", &Base::s_info, &JSSVGFontFaceNameElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFontFaceNameElementConstructor) };

JSSVGFontFaceNameElementConstructor::JSSVGFontFaceNameElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFontFaceNameElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGFontFaceNameElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFontFaceNameElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFontFaceNameElementConstructor, JSDOMWrapper>(exec, &JSSVGFontFaceNameElementConstructorTable, jsCast<JSSVGFontFaceNameElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGFontFaceNameElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFontFaceNameElementConstructor, JSDOMWrapper>(exec, &JSSVGFontFaceNameElementConstructorTable, jsCast<JSSVGFontFaceNameElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFontFaceNameElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFontFaceNameElementPrototypeTable = { 1, 0, JSSVGFontFaceNameElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFontFaceNameElementPrototype::s_info = { "SVGFontFaceNameElementPrototype", &Base::s_info, &JSSVGFontFaceNameElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFontFaceNameElementPrototype) };

JSObject* JSSVGFontFaceNameElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFontFaceNameElement>(exec, globalObject);
}

const ClassInfo JSSVGFontFaceNameElement::s_info = { "SVGFontFaceNameElement", &Base::s_info, &JSSVGFontFaceNameElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFontFaceNameElement) };

JSSVGFontFaceNameElement::JSSVGFontFaceNameElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFontFaceNameElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGFontFaceNameElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFontFaceNameElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGFontFaceNameElementPrototype::create(exec->vm(), globalObject, JSSVGFontFaceNameElementPrototype::createStructure(exec->vm(), globalObject, JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFontFaceNameElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFontFaceNameElement* thisObject = jsCast<JSSVGFontFaceNameElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGFontFaceNameElement, Base>(exec, &JSSVGFontFaceNameElementTable, thisObject, propertyName, slot);
}

bool JSSVGFontFaceNameElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGFontFaceNameElement* thisObject = jsCast<JSSVGFontFaceNameElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGFontFaceNameElement, Base>(exec, &JSSVGFontFaceNameElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGFontFaceNameElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFontFaceNameElement* domObject = jsCast<JSSVGFontFaceNameElement*>(asObject(slotBase));
    return JSSVGFontFaceNameElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFontFaceNameElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFontFaceNameElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FONTS)
