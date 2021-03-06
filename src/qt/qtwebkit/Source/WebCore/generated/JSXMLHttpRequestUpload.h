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

#ifndef JSXMLHttpRequestUpload_h
#define JSXMLHttpRequestUpload_h

#include "JSDOMBinding.h"
#include "XMLHttpRequestUpload.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSXMLHttpRequestUpload : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSXMLHttpRequestUpload* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<XMLHttpRequestUpload> impl)
    {
        JSXMLHttpRequestUpload* ptr = new (NotNull, JSC::allocateCell<JSXMLHttpRequestUpload>(globalObject->vm().heap)) JSXMLHttpRequestUpload(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSXMLHttpRequestUpload();
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    static void visitChildren(JSCell*, JSC::SlotVisitor&);

    XMLHttpRequestUpload* impl() const { return m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    XMLHttpRequestUpload* m_impl;
protected:
    JSXMLHttpRequestUpload(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<XMLHttpRequestUpload>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

class JSXMLHttpRequestUploadOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld*, XMLHttpRequestUpload*)
{
    DEFINE_STATIC_LOCAL(JSXMLHttpRequestUploadOwner, jsXMLHttpRequestUploadOwner, ());
    return &jsXMLHttpRequestUploadOwner;
}

inline void* wrapperContext(DOMWrapperWorld* world, XMLHttpRequestUpload*)
{
    return world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, XMLHttpRequestUpload*);
XMLHttpRequestUpload* toXMLHttpRequestUpload(JSC::JSValue);

class JSXMLHttpRequestUploadPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSXMLHttpRequestUploadPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSXMLHttpRequestUploadPrototype* ptr = new (NotNull, JSC::allocateCell<JSXMLHttpRequestUploadPrototype>(vm.heap)) JSXMLHttpRequestUploadPrototype(vm, globalObject, structure);
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
    JSXMLHttpRequestUploadPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSXMLHttpRequestUploadConstructor : public DOMConstructorObject {
private:
    JSXMLHttpRequestUploadConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSXMLHttpRequestUploadConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSXMLHttpRequestUploadConstructor* ptr = new (NotNull, JSC::allocateCell<JSXMLHttpRequestUploadConstructor>(*exec->heap())) JSXMLHttpRequestUploadConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestUploadPrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestUploadPrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsXMLHttpRequestUploadPrototypeFunctionDispatchEvent(JSC::ExecState*);
// Attributes

JSC::JSValue jsXMLHttpRequestUploadOnabort(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSXMLHttpRequestUploadOnabort(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsXMLHttpRequestUploadOnerror(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSXMLHttpRequestUploadOnerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsXMLHttpRequestUploadOnload(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSXMLHttpRequestUploadOnload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsXMLHttpRequestUploadOnloadend(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSXMLHttpRequestUploadOnloadend(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsXMLHttpRequestUploadOnloadstart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSXMLHttpRequestUploadOnloadstart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsXMLHttpRequestUploadOnprogress(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSXMLHttpRequestUploadOnprogress(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsXMLHttpRequestUploadConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
