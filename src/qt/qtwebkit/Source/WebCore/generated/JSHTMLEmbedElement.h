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

#ifndef JSHTMLEmbedElement_h
#define JSHTMLEmbedElement_h

#include "HTMLEmbedElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLElement.h"
#include <runtime/CallData.h>
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLEmbedElement : public JSHTMLElement {
public:
    typedef JSHTMLElement Base;
    static JSHTMLEmbedElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLEmbedElement> impl)
    {
        JSHTMLEmbedElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLEmbedElement>(globalObject->vm().heap)) JSHTMLEmbedElement(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static bool getOwnPropertySlotByIndex(JSC::JSCell*, JSC::ExecState*, unsigned propertyName, JSC::PropertySlot&);
    bool getOwnPropertySlotDelegate(JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    bool getOwnPropertyDescriptorDelegate(JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void putByIndex(JSC::JSCell*, JSC::ExecState*, unsigned propertyName, JSC::JSValue, bool shouldThrow);
    bool putDelegate(JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::CallType getCallData(JSC::JSCell*, JSC::CallData&);

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    JSHTMLEmbedElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLEmbedElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSHTMLEmbedElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSHTMLEmbedElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLEmbedElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLEmbedElementPrototype>(vm.heap)) JSHTMLEmbedElementPrototype(vm, globalObject, structure);
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
    JSHTMLEmbedElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSHTMLEmbedElementConstructor : public DOMConstructorObject {
private:
    JSHTMLEmbedElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLEmbedElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLEmbedElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLEmbedElementConstructor>(*exec->heap())) JSHTMLEmbedElementConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLEmbedElementPrototypeFunctionGetSVGDocument(JSC::ExecState*);
// Attributes

JSC::JSValue jsHTMLEmbedElementAlign(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLEmbedElementAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLEmbedElementHeight(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLEmbedElementHeight(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLEmbedElementName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLEmbedElementName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLEmbedElementSrc(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLEmbedElementSrc(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLEmbedElementType(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLEmbedElementType(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLEmbedElementWidth(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLEmbedElementWidth(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLEmbedElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
