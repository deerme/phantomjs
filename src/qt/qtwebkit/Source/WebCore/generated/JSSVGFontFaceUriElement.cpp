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

#include "JSSVGFontFaceUriElement.h"

#include "SVGFontFaceUriElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFontFaceUriElementTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFontFaceUriElementConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFontFaceUriElementTable = { 2, 1, JSSVGFontFaceUriElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFontFaceUriElementConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFontFaceUriElementConstructorTable = { 1, 0, JSSVGFontFaceUriElementConstructorTableValues, 0 };
const ClassInfo JSSVGFontFaceUriElementConstructor::s_info = { "SVGFontFaceUriElementConstructor", &Base::s_info, &JSSVGFontFaceUriElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFontFaceUriElementConstructor) };

JSSVGFontFaceUriElementConstructor::JSSVGFontFaceUriElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFontFaceUriElementConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSSVGFontFaceUriElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFontFaceUriElementConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFontFaceUriElementConstructor, JSDOMWrapper>(exec, &JSSVGFontFaceUriElementConstructorTable, jsCast<JSSVGFontFaceUriElementConstructor*>(cell), propertyName, slot);
}

bool JSSVGFontFaceUriElementConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFontFaceUriElementConstructor, JSDOMWrapper>(exec, &JSSVGFontFaceUriElementConstructorTable, jsCast<JSSVGFontFaceUriElementConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFontFaceUriElementPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSVGFontFaceUriElementPrototypeTable = { 1, 0, JSSVGFontFaceUriElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFontFaceUriElementPrototype::s_info = { "SVGFontFaceUriElementPrototype", &Base::s_info, &JSSVGFontFaceUriElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFontFaceUriElementPrototype) };

JSObject* JSSVGFontFaceUriElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFontFaceUriElement>(exec, globalObject);
}

const ClassInfo JSSVGFontFaceUriElement::s_info = { "SVGFontFaceUriElement", &Base::s_info, &JSSVGFontFaceUriElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFontFaceUriElement) };

JSSVGFontFaceUriElement::JSSVGFontFaceUriElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFontFaceUriElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGFontFaceUriElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFontFaceUriElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSVGFontFaceUriElementPrototype::create(exec->vm(), globalObject, JSSVGFontFaceUriElementPrototype::createStructure(exec->vm(), globalObject, JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFontFaceUriElement::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFontFaceUriElement* thisObject = jsCast<JSSVGFontFaceUriElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSSVGFontFaceUriElement, Base>(exec, &JSSVGFontFaceUriElementTable, thisObject, propertyName, slot);
}

bool JSSVGFontFaceUriElement::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSVGFontFaceUriElement* thisObject = jsCast<JSSVGFontFaceUriElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSSVGFontFaceUriElement, Base>(exec, &JSSVGFontFaceUriElementTable, thisObject, propertyName, descriptor);
}

JSValue jsSVGFontFaceUriElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFontFaceUriElement* domObject = jsCast<JSSVGFontFaceUriElement*>(asObject(slotBase));
    return JSSVGFontFaceUriElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFontFaceUriElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFontFaceUriElementConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FONTS)