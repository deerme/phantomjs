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

#ifndef JSWorkerLocation_h
#define JSWorkerLocation_h

#if ENABLE(WORKERS)

#include "JSDOMBinding.h"
#include "WorkerLocation.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSWorkerLocation : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSWorkerLocation* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WorkerLocation> impl)
    {
        JSWorkerLocation* ptr = new (NotNull, JSC::allocateCell<JSWorkerLocation>(globalObject->vm().heap)) JSWorkerLocation(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void destroy(JSC::JSCell*);
    ~JSWorkerLocation();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    WorkerLocation* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    WorkerLocation* m_impl;
protected:
    JSWorkerLocation(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<WorkerLocation>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSWorkerLocationOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, WorkerLocation*)
{
    DEFINE_STATIC_LOCAL(JSWorkerLocationOwner, jsWorkerLocationOwner, ());
    return &jsWorkerLocationOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, WorkerLocation*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, WorkerLocation*);
WorkerLocation* toWorkerLocation(JSC::JSValue);

class JSWorkerLocationPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSWorkerLocationPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWorkerLocationPrototype* ptr = new (NotNull, JSC::allocateCell<JSWorkerLocationPrototype>(vm.heap)) JSWorkerLocationPrototype(vm, globalObject, structure);
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
    JSWorkerLocationPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSWorkerLocationConstructor : public DOMConstructorObject {
private:
    JSWorkerLocationConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWorkerLocationConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWorkerLocationConstructor* ptr = new (NotNull, JSC::allocateCell<JSWorkerLocationConstructor>(*exec->heap())) JSWorkerLocationConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsWorkerLocationPrototypeFunctionToString(JSC::ExecState*);
// Attributes

JSC::JSValue jsWorkerLocationHref(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWorkerLocationProtocol(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWorkerLocationHost(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWorkerLocationHostname(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWorkerLocationPort(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWorkerLocationPathname(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWorkerLocationSearch(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWorkerLocationHash(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWorkerLocationConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(WORKERS)

#endif
