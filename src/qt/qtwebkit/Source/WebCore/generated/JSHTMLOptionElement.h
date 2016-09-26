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

#ifndef JSHTMLOptionElement_h
#define JSHTMLOptionElement_h

#include "HTMLOptionElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLOptionElement : public JSHTMLElement {
public:
    typedef JSHTMLElement Base;
    static JSHTMLOptionElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLOptionElement> impl)
    {
        JSHTMLOptionElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLOptionElement>(globalObject->vm().heap)) JSHTMLOptionElement(structure, globalObject, impl);
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
    static JSC::JSValue getNamedConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
    HTMLOptionElement* impl() const
    {
        return static_cast<HTMLOptionElement*>(Base::impl());
    }
protected:
    JSHTMLOptionElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLOptionElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

HTMLOptionElement* toHTMLOptionElement(JSC::JSValue);

class JSHTMLOptionElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSHTMLOptionElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLOptionElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLOptionElementPrototype>(vm.heap)) JSHTMLOptionElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSHTMLOptionElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSHTMLOptionElementConstructor : public DOMConstructorObject {
private:
    JSHTMLOptionElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLOptionElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLOptionElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLOptionElementConstructor>(*exec->heap())) JSHTMLOptionElementConstructor(structure, globalObject);
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

class JSHTMLOptionElementNamedConstructor : public DOMConstructorWithDocument {
public:
    typedef DOMConstructorWithDocument Base;

    static JSHTMLOptionElementNamedConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLOptionElementNamedConstructor* constructor = new (NotNull, JSC::allocateCell<JSHTMLOptionElementNamedConstructor>(*exec->heap())) JSHTMLOptionElementNamedConstructor(structure, globalObject);
        constructor->finishCreation(exec, globalObject);
        return constructor;
    }

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static const JSC::ClassInfo s_info;

private:
    JSHTMLOptionElementNamedConstructor(JSC::Structure*, JSDOMGlobalObject*);
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSHTMLOptionElement(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);
};

// Attributes

JSC::JSValue jsHTMLOptionElementDisabled(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLOptionElementDisabled(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLOptionElementForm(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLOptionElementLabel(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLOptionElementLabel(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLOptionElementDefaultSelected(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLOptionElementDefaultSelected(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLOptionElementSelected(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLOptionElementSelected(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLOptionElementValue(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLOptionElementValue(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLOptionElementText(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLOptionElementText(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLOptionElementIndex(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLOptionElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
