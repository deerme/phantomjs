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

#ifndef JSHTMLTextAreaElement_h
#define JSHTMLTextAreaElement_h

#include "HTMLTextAreaElement.h"
#include "JSDOMBinding.h"
#include "JSHTMLElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSHTMLTextAreaElement : public JSHTMLElement {
public:
    typedef JSHTMLElement Base;
    static JSHTMLTextAreaElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLTextAreaElement> impl)
    {
        JSHTMLTextAreaElement* ptr = new (NotNull, JSC::allocateCell<JSHTMLTextAreaElement>(globalObject->vm().heap)) JSHTMLTextAreaElement(structure, globalObject, impl);
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
protected:
    JSHTMLTextAreaElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<HTMLTextAreaElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSHTMLTextAreaElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSHTMLTextAreaElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSHTMLTextAreaElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSHTMLTextAreaElementPrototype>(vm.heap)) JSHTMLTextAreaElementPrototype(vm, globalObject, structure);
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
    JSHTMLTextAreaElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSHTMLTextAreaElementConstructor : public DOMConstructorObject {
private:
    JSHTMLTextAreaElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSHTMLTextAreaElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSHTMLTextAreaElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSHTMLTextAreaElementConstructor>(*exec->heap())) JSHTMLTextAreaElementConstructor(structure, globalObject);
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

JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTextAreaElementPrototypeFunctionCheckValidity(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTextAreaElementPrototypeFunctionSetCustomValidity(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTextAreaElementPrototypeFunctionSelect(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTextAreaElementPrototypeFunctionSetRangeText(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsHTMLTextAreaElementPrototypeFunctionSetSelectionRange(JSC::ExecState*);
// Attributes

JSC::JSValue jsHTMLTextAreaElementAutofocus(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTextAreaElementAutofocus(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTextAreaElementCols(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTextAreaElementCols(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTextAreaElementDirName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTextAreaElementDirName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTextAreaElementDisabled(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTextAreaElementDisabled(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTextAreaElementForm(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLTextAreaElementMaxLength(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTextAreaElementMaxLength(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTextAreaElementName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTextAreaElementName(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTextAreaElementPlaceholder(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTextAreaElementPlaceholder(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTextAreaElementReadOnly(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTextAreaElementReadOnly(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTextAreaElementRequired(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTextAreaElementRequired(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTextAreaElementRows(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTextAreaElementRows(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTextAreaElementWrap(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTextAreaElementWrap(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTextAreaElementType(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLTextAreaElementDefaultValue(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTextAreaElementDefaultValue(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTextAreaElementValue(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTextAreaElementValue(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTextAreaElementTextLength(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLTextAreaElementWillValidate(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLTextAreaElementValidity(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLTextAreaElementValidationMessage(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLTextAreaElementLabels(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsHTMLTextAreaElementSelectionStart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTextAreaElementSelectionStart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTextAreaElementSelectionEnd(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTextAreaElementSelectionEnd(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTextAreaElementSelectionDirection(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSHTMLTextAreaElementSelectionDirection(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsHTMLTextAreaElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
