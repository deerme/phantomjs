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

#ifndef JSWebKitTransitionEvent_h
#define JSWebKitTransitionEvent_h

#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "WebKitTransitionEvent.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSDictionary;

class JSWebKitTransitionEvent : public JSEvent {
public:
    typedef JSEvent Base;
    static JSWebKitTransitionEvent* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebKitTransitionEvent> impl)
    {
        JSWebKitTransitionEvent* ptr = new (NotNull, JSC::allocateCell<JSWebKitTransitionEvent>(globalObject->vm().heap)) JSWebKitTransitionEvent(structure, globalObject, impl);
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
protected:
    JSWebKitTransitionEvent(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<WebKitTransitionEvent>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSWebKitTransitionEventPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSWebKitTransitionEventPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebKitTransitionEventPrototype* ptr = new (NotNull, JSC::allocateCell<JSWebKitTransitionEventPrototype>(vm.heap)) JSWebKitTransitionEventPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSWebKitTransitionEventPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSWebKitTransitionEventConstructor : public DOMConstructorObject {
private:
    JSWebKitTransitionEventConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebKitTransitionEventConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebKitTransitionEventConstructor* ptr = new (NotNull, JSC::allocateCell<JSWebKitTransitionEventConstructor>(*exec->heap())) JSWebKitTransitionEventConstructor(structure, globalObject);
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
    static JSC::EncodedJSValue JSC_HOST_CALL constructJSWebKitTransitionEvent(JSC::ExecState*);
    static JSC::ConstructType getConstructData(JSC::JSCell*, JSC::ConstructData&);
};

bool fillWebKitTransitionEventInit(WebKitTransitionEventInit&, JSDictionary&);

// Attributes

JSC::JSValue jsWebKitTransitionEventPropertyName(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWebKitTransitionEventElapsedTime(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWebKitTransitionEventPseudoElement(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWebKitTransitionEventConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
