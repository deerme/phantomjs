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

#ifndef JSHTMLCanvasElement_h
#define JSHTMLCanvasElement_h

#include "HTMLCanvasElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLCanvasElement : public JSHTMLElement {
public:
    typedef JSHTMLElement Base;
    static JSHTMLCanvasElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLCanvasElement> impl)
    {
        JSHTMLCanvasElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLCanvasElement>(globalObject->vm().heap)) JSHTMLCanvasElement(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);

    // Custom functions
    JSC::JSValue toDataURL(JSC::ExecState*);
    JSC::JSValue getContext(JSC::ExecState*);
    JSC::JSValue supportsContext(JSC::ExecState*);
    HTMLCanvasElement* impl() const
    {
        return static_cast<HTMLCanvasElement*>(Base::impl());
    }
protected:
    JSHTMLCanvasElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLCanvasElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

HTMLCanvasElement* toHTMLCanvasElement(JSC::JSValue);

class JSHTMLCanvasElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSHTMLCanvasElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLCanvasElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLCanvasElementPrototype>(vm.heap)) JSHTMLCanvasElementPrototype(vm, globalObject, structure);
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
    JSHTMLCanvasElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSHTMLCanvasElementConstructor : public DOMConstructorObject {
private:
    JSHTMLCanvasElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLCanvasElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLCanvasElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLCanvasElementConstructor>(*exec->heap())) JSHTMLCanvasElementConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLCanvasElementPrototypeFunctionToDataURL(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLCanvasElementPrototypeFunctionGetContext(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLCanvasElementPrototypeFunctionSupportsContext(JSC::ExecState*);
// Attributes

JSC::JSValue jsHTMLCanvasElementWidth(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLCanvasElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLCanvasElementHeight(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLCanvasElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLCanvasElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
