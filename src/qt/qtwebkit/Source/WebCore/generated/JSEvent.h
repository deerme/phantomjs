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

#ifndef JSEvent_h
#define JSEvent_h

#include "Event.h"
#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSDictionary;

class JSEvent : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Event> impl)
    {
        JSEvent* ptr = new (NotNull, JSC::allocateCell<JSEvent>(globalObject->vm().heap)) JSEvent(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSEvent();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom attributes
    JSC::JSValue clipboardData(JSC::ExecState*) const;
    Event* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    Event* m_impl;
protected:
    JSEvent(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<Event>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSEventOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, Event*)
{
    DEFINE_STATIC_LOCAL(JSEventOwner, jsEventOwner, ());
    return &jsEventOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, Event*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, Event*);
Event* toEvent(JSC::JSValue);

class JSEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSEventPrototype>(vm.heap)) JSEventPrototype(vm, globalObject, structure);
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
    JSEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSEventConstructor : public DOMConstructorObject {
private:
    JSEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSEventConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSEventConstructor>(*exec->heap())) JSEventConstructor(structure, globalObject);
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
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

bool fillEventInit(EventInit&, JSDictionary&);

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionStopPropagation(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionPreventDefault(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionInitEvent(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsEventPrototypeFunctionStopImmediatePropagation(JSC::ExecState*);
// Attributes

JSC::JSValue jsEventType(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventTarget(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventCurrentTarget(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventEventPhase(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventBubbles(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventCancelable(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventTimeStamp(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventDefaultPrevented(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventSrcElement(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventReturnValue(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSEventReturnValue(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsEventCancelBubble(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSEventCancelBubble(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsEventClipboardData(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

JSC::JSValue jsEventNONE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventCAPTURING_PHASE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventAT_TARGET(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventBUBBLING_PHASE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventMOUSEDOWN(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventMOUSEUP(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventMOUSEOVER(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventMOUSEOUT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventMOUSEMOVE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventMOUSEDRAG(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventCLICK(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventDBLCLICK(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventKEYDOWN(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventKEYUP(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventKEYPRESS(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventDRAGDROP(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventFOCUS(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventBLUR(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventSELECT(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsEventCHANGE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
