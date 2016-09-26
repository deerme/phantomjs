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

#ifndef JSDeviceMotionEvent_h
#define JSDeviceMotionEvent_h

#if ENABLE(DEVICE_ORIENTATION)

#include "DeviceMotionEvent.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSDeviceMotionEvent : public JSEvent {
public:
    typedef JSEvent Base;
    static JSDeviceMotionEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DeviceMotionEvent> impl)
    {
        JSDeviceMotionEvent* ptr = new (NotNull, JSC::allocateCell<JSDeviceMotionEvent>(globalObject->vm().heap)) JSDeviceMotionEvent(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom attributes
    JSC::JSValue acceleration(JSC::ExecState*) const;
    JSC::JSValue accelerationIncludingGravity(JSC::ExecState*) const;
    JSC::JSValue rotationRate(JSC::ExecState*) const;
    JSC::JSValue interval(JSC::ExecState*) const;

    // Custom functions
    JSC::JSValue initDeviceMotionEvent(JSC::ExecState*);
protected:
    JSDeviceMotionEvent(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<DeviceMotionEvent>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSDeviceMotionEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSDeviceMotionEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSDeviceMotionEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSDeviceMotionEventPrototype>(vm.heap)) JSDeviceMotionEventPrototype(vm, globalObject, structure);
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
    JSDeviceMotionEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSDeviceMotionEventConstructor : public DOMConstructorObject {
private:
    JSDeviceMotionEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSDeviceMotionEventConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSDeviceMotionEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSDeviceMotionEventConstructor>(*exec->heap())) JSDeviceMotionEventConstructor(structure, globalObject);
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
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDeviceMotionEventPrototypeFunctionInitDeviceMotionEvent(JSC::ExecState*);
// Attributes

JSC::JSValue jsDeviceMotionEventAcceleration(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsDeviceMotionEventAccelerationIncludingGravity(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsDeviceMotionEventRotationRate(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsDeviceMotionEventInterval(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsDeviceMotionEventConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(DEVICE_ORIENTATION)

#endif
