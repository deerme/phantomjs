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

#ifndef JSWebKitCSSKeyframeRule_h
#define JSWebKitCSSKeyframeRule_h

#include "JSCSSRule.h"
#include "JSDOMBinding.h"
#include "WebKitCSSKeyframeRule.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSWebKitCSSKeyframeRule : public JSCSSRule {
public:
    typedef JSCSSRule Base;
    static JSWebKitCSSKeyframeRule* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebKitCSSKeyframeRule> impl)
    {
        JSWebKitCSSKeyframeRule* ptr = new (NotNull, JSC::allocateCell<JSWebKitCSSKeyframeRule>(globalObject->vm().heap)) JSWebKitCSSKeyframeRule(structure, globalObject, impl);
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
    JSWebKitCSSKeyframeRule(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<WebKitCSSKeyframeRule>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSWebKitCSSKeyframeRulePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSWebKitCSSKeyframeRulePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSWebKitCSSKeyframeRulePrototype* ptr = new (NotNull, JSC::allocateCell<JSWebKitCSSKeyframeRulePrototype>(vm.heap)) JSWebKitCSSKeyframeRulePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSWebKitCSSKeyframeRulePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSWebKitCSSKeyframeRuleConstructor : public DOMConstructorObject {
private:
    JSWebKitCSSKeyframeRuleConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSWebKitCSSKeyframeRuleConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSWebKitCSSKeyframeRuleConstructor* ptr = new (NotNull, JSC::allocateCell<JSWebKitCSSKeyframeRuleConstructor>(*exec->heap())) JSWebKitCSSKeyframeRuleConstructor(structure, globalObject);
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

// Attributes

JSC::JSValue jsWebKitCSSKeyframeRuleKeyText(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSWebKitCSSKeyframeRuleKeyText(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsWebKitCSSKeyframeRuleStyle(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsWebKitCSSKeyframeRuleConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif
