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

#ifndef JSInt16Array_h
#define JSInt16Array_h

#include "JSArrayBufferView.h"
#include "JSDOMBinding.h"
#include <runtime/JSObject.h>
#include <wtf/Int16Array.h>

namespace WebCore {

class JSInt16Array : public JSArrayBufferView {
public:
    typedef JSArrayBufferView Base;
    static JSInt16Array* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Int16Array> impl)
    {
        JSInt16Array* ptr = new (NotNull, JSC::allocateCell<JSInt16Array>(globalObject->vm().heap)) JSInt16Array(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static bool getOwnPropertySlotByIndex(JSC::JSCell*, JSC::ExecState*, unsigned propertyName, JSC::PropertySlot&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void putByIndex(JSC::JSCell*, JSC::ExecState*, unsigned propertyName, JSC::JSValue, bool shouldThrow);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static void getOwnPropertyNames(JSC::JSObject*, JSC::ExecState*, JSC::PropertyNameArray&, JSC::EnumerationMode mode = JSC::ExcludeDontEnumProperties);
    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    Int16Array* impl() const
    {
        return static_cast<Int16Array*>(Base::impl());
    }
    static const JSC::TypedArrayType TypedArrayStorageType = JSC::TypedArrayInt16;
    intptr_t m_storageLength;
    void* m_storage;
protected:
    JSInt16Array(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<Int16Array>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetPropertyNames | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
    JSC::JSValue getByIndex(JSC::ExecState*, unsigned index);
    void indexSetter(JSC::ExecState*, unsigned index, JSC::JSValue);
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Int16Array*);
Int16Array* toInt16Array(JSC::JSValue);

class JSInt16ArrayPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSInt16ArrayPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSInt16ArrayPrototype* ptr = new (NotNull, JSC::allocateCell<JSInt16ArrayPrototype>(vm.heap)) JSInt16ArrayPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSInt16ArrayPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSInt16ArrayConstructor : public DOMConstructorObject {
private:
    JSInt16ArrayConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSInt16ArrayConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSInt16ArrayConstructor* ptr = new (NotNull, JSC::allocateCell<JSInt16ArrayConstructor>(*exec->heap())) JSInt16ArrayConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSInt16Array(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsInt16ArrayPrototypeFunctionSubarray(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsInt16ArrayPrototypeFunctionSet(JSC::ExecState*);
// Attributes

JSC::JSValue jsInt16ArrayLength(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsInt16ArrayConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsInt16ArrayBYTES_PER_ELEMENT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
