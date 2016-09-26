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

#include "config.h"

#if ENABLE(CSS_REGIONS)

#include "JSWebKitCSSRegionRule.h"

#include "CSSRuleList.h"
#include "JSCSSRuleList.h"
#include "WebKitCSSRegionRule.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSWebKitCSSRegionRuleTableValues[] =
{
    { "cssRules", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSRegionRuleCssRules), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSRegionRuleConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebKitCSSRegionRuleTable = { 4, 3, JSWebKitCSSRegionRuleTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSWebKitCSSRegionRuleConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebKitCSSRegionRuleConstructorTable = { 1, 0, JSWebKitCSSRegionRuleConstructorTableValues, 0 };
const ClassInfo JSWebKitCSSRegionRuleConstructor::s_info = { "WebKitCSSRegionRuleConstructor", &Base::s_info, &JSWebKitCSSRegionRuleConstructorTable, 0, CREATE_METHOD_TABLE(JSWebKitCSSRegionRuleConstructor) };

JSWebKitCSSRegionRuleConstructor::JSWebKitCSSRegionRuleConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebKitCSSRegionRuleConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSWebKitCSSRegionRulePrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSWebKitCSSRegionRuleConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitCSSRegionRuleConstructor, JSDOMWrapper>(exec, &JSWebKitCSSRegionRuleConstructorTable, jsCast<JSWebKitCSSRegionRuleConstructor*>(cell), propertyName, slot);
}

bool JSWebKitCSSRegionRuleConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWebKitCSSRegionRuleConstructor, JSDOMWrapper>(exec, &JSWebKitCSSRegionRuleConstructorTable, jsCast<JSWebKitCSSRegionRuleConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSWebKitCSSRegionRulePrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebKitCSSRegionRulePrototypeTable = { 1, 0, JSWebKitCSSRegionRulePrototypeTableValues, 0 };
const ClassInfo JSWebKitCSSRegionRulePrototype::s_info = { "WebKitCSSRegionRulePrototype", &Base::s_info, &JSWebKitCSSRegionRulePrototypeTable, 0, CREATE_METHOD_TABLE(JSWebKitCSSRegionRulePrototype) };

JSObject* JSWebKitCSSRegionRulePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebKitCSSRegionRule>(exec, globalObject);
}

const ClassInfo JSWebKitCSSRegionRule::s_info = { "WebKitCSSRegionRule", &Base::s_info, &JSWebKitCSSRegionRuleTable, 0 , CREATE_METHOD_TABLE(JSWebKitCSSRegionRule) };

JSWebKitCSSRegionRule::JSWebKitCSSRegionRule(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebKitCSSRegionRule> impl)
    : JSCSSRule(structure, globalObject, impl)
{
}

void JSWebKitCSSRegionRule::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSWebKitCSSRegionRule::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSWebKitCSSRegionRulePrototype::create(exec->vm(), globalObject, JSWebKitCSSRegionRulePrototype::createStructure(exec->vm(), globalObject, JSCSSRulePrototype::self(exec, globalObject)));
}

bool JSWebKitCSSRegionRule::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebKitCSSRegionRule* thisObject = jsCast<JSWebKitCSSRegionRule*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSWebKitCSSRegionRule, Base>(exec, &JSWebKitCSSRegionRuleTable, thisObject, propertyName, slot);
}

bool JSWebKitCSSRegionRule::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSWebKitCSSRegionRule* thisObject = jsCast<JSWebKitCSSRegionRule*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSWebKitCSSRegionRule, Base>(exec, &JSWebKitCSSRegionRuleTable, thisObject, propertyName, descriptor);
}

JSValue jsWebKitCSSRegionRuleCssRules(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSRegionRule* castedThis = jsCast<JSWebKitCSSRegionRule*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebKitCSSRegionRule* impl = static_cast<WebKitCSSRegionRule*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->cssRules()));
    return result;
}


JSValue jsWebKitCSSRegionRuleConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebKitCSSRegionRule* domObject = jsCast<JSWebKitCSSRegionRule*>(asObject(slotBase));
    return JSWebKitCSSRegionRule::getConstructor(exec, domObject->globalObject());
}

JSValue JSWebKitCSSRegionRule::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebKitCSSRegionRuleConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(CSS_REGIONS)