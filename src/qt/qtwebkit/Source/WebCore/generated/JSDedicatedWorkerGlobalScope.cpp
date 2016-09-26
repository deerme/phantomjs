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

#if ENABLE(WORKERS)

#include "JSDedicatedWorkerGlobalScope.h"

#include "DedicatedWorkerGlobalScope.h"
#include "EventListener.h"
#include "JSEventListener.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

#if ENABLE(WORKERS)
#include "JSDedicatedWorkerGlobalScope.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSDedicatedWorkerGlobalScopeTableValues[] =
{
    { "onmessage", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDedicatedWorkerGlobalScopeOnmessage), (intptr_t)setJSDedicatedWorkerGlobalScopeOnmessage, NoIntrinsic },
#if ENABLE(WORKERS)
    { "DedicatedWorkerGlobalScope", DontEnum, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDedicatedWorkerGlobalScopeDedicatedWorkerGlobalScopeConstructor), (intptr_t)setJSDedicatedWorkerGlobalScopeDedicatedWorkerGlobalScopeConstructor, NoIntrinsic },
#endif
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDedicatedWorkerGlobalScopeConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDedicatedWorkerGlobalScopeTable = { 8, 7, JSDedicatedWorkerGlobalScopeTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSDedicatedWorkerGlobalScopeConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDedicatedWorkerGlobalScopeConstructorTable = { 1, 0, JSDedicatedWorkerGlobalScopeConstructorTableValues, 0 };
static const HashTable* getJSDedicatedWorkerGlobalScopeConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSDedicatedWorkerGlobalScopeConstructorTable);
}

const ClassInfo JSDedicatedWorkerGlobalScopeConstructor::s_info = { "DedicatedWorkerGlobalScopeConstructor", &Base::s_info, 0, getJSDedicatedWorkerGlobalScopeConstructorTable, CREATE_METHOD_TABLE(JSDedicatedWorkerGlobalScopeConstructor) };

JSDedicatedWorkerGlobalScopeConstructor::JSDedicatedWorkerGlobalScopeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSDedicatedWorkerGlobalScopeConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, globalObject->prototype(), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSDedicatedWorkerGlobalScopeConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDedicatedWorkerGlobalScopeConstructor, JSDOMWrapper>(exec, getJSDedicatedWorkerGlobalScopeConstructorTable(exec), jsCast<JSDedicatedWorkerGlobalScopeConstructor*>(cell), propertyName, slot);
}

bool JSDedicatedWorkerGlobalScopeConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDedicatedWorkerGlobalScopeConstructor, JSDOMWrapper>(exec, getJSDedicatedWorkerGlobalScopeConstructorTable(exec), jsCast<JSDedicatedWorkerGlobalScopeConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSDedicatedWorkerGlobalScopePrototypeTableValues[] =
{
    { "postMessage", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDedicatedWorkerGlobalScopePrototypeFunctionPostMessage), (intptr_t)1, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDedicatedWorkerGlobalScopePrototypeTable = { 2, 1, JSDedicatedWorkerGlobalScopePrototypeTableValues, 0 };
static const HashTable* getJSDedicatedWorkerGlobalScopePrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSDedicatedWorkerGlobalScopePrototypeTable);
}

const ClassInfo JSDedicatedWorkerGlobalScopePrototype::s_info = { "DedicatedWorkerGlobalScopePrototype", &Base::s_info, 0, getJSDedicatedWorkerGlobalScopePrototypeTable, CREATE_METHOD_TABLE(JSDedicatedWorkerGlobalScopePrototype) };

bool JSDedicatedWorkerGlobalScopePrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDedicatedWorkerGlobalScopePrototype* thisObject = jsCast<JSDedicatedWorkerGlobalScopePrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, getJSDedicatedWorkerGlobalScopePrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSDedicatedWorkerGlobalScopePrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDedicatedWorkerGlobalScopePrototype* thisObject = jsCast<JSDedicatedWorkerGlobalScopePrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, getJSDedicatedWorkerGlobalScopePrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSDedicatedWorkerGlobalScopeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSDedicatedWorkerGlobalScopeTable);
}

const ClassInfo JSDedicatedWorkerGlobalScope::s_info = { "DedicatedWorkerGlobalScope", &Base::s_info, 0, getJSDedicatedWorkerGlobalScopeTable , CREATE_METHOD_TABLE(JSDedicatedWorkerGlobalScope) };

JSDedicatedWorkerGlobalScope::JSDedicatedWorkerGlobalScope(VM& vm, Structure* structure, PassRefPtr<DedicatedWorkerGlobalScope> impl)
    : JSWorkerGlobalScope(vm, structure, impl)
{
}

bool JSDedicatedWorkerGlobalScope::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDedicatedWorkerGlobalScope* thisObject = jsCast<JSDedicatedWorkerGlobalScope*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSDedicatedWorkerGlobalScope, Base>(exec, getJSDedicatedWorkerGlobalScopeTable(exec), thisObject, propertyName, slot);
}

bool JSDedicatedWorkerGlobalScope::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDedicatedWorkerGlobalScope* thisObject = jsCast<JSDedicatedWorkerGlobalScope*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSDedicatedWorkerGlobalScope, Base>(exec, getJSDedicatedWorkerGlobalScopeTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsDedicatedWorkerGlobalScopeOnmessage(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDedicatedWorkerGlobalScope* castedThis = jsCast<JSDedicatedWorkerGlobalScope*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DedicatedWorkerGlobalScope* impl = static_cast<DedicatedWorkerGlobalScope*>(castedThis->impl());
    if (EventListener* listener = impl->onmessage()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl))
                return jsFunction;
        }
    }
    return jsNull();
}


#if ENABLE(WORKERS)
JSValue jsDedicatedWorkerGlobalScopeDedicatedWorkerGlobalScopeConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDedicatedWorkerGlobalScope* castedThis = jsCast<JSDedicatedWorkerGlobalScope*>(asObject(slotBase));
    return JSDedicatedWorkerGlobalScope::getConstructor(exec, castedThis->globalObject());
}

#endif

JSValue jsDedicatedWorkerGlobalScopeConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDedicatedWorkerGlobalScope* domObject = jsCast<JSDedicatedWorkerGlobalScope*>(asObject(slotBase));
    return JSDedicatedWorkerGlobalScope::getConstructor(exec, domObject->globalObject());
}

void JSDedicatedWorkerGlobalScope::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSDedicatedWorkerGlobalScope* thisObject = jsCast<JSDedicatedWorkerGlobalScope*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSDedicatedWorkerGlobalScope, Base>(exec, propertyName, value, getJSDedicatedWorkerGlobalScopeTable(exec), thisObject, slot);
}

void setJSDedicatedWorkerGlobalScopeOnmessage(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSDedicatedWorkerGlobalScope* castedThis = jsCast<JSDedicatedWorkerGlobalScope*>(thisObject);
    DedicatedWorkerGlobalScope* impl = static_cast<DedicatedWorkerGlobalScope*>(castedThis->impl());
    impl->setOnmessage(createJSAttributeEventListener(exec, value, thisObject));
}


#if ENABLE(WORKERS)
void setJSDedicatedWorkerGlobalScopeDedicatedWorkerGlobalScopeConstructor(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    // Shadowing a built-in constructor
    jsCast<JSDedicatedWorkerGlobalScope*>(thisObject)->putDirect(exec->vm(), Identifier(exec, "DedicatedWorkerGlobalScope"), value);
}

#endif

JSValue JSDedicatedWorkerGlobalScope::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDedicatedWorkerGlobalScopeConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDedicatedWorkerGlobalScopePrototypeFunctionPostMessage(ExecState* exec)
{
    JSDedicatedWorkerGlobalScope* castedThis = toJSDedicatedWorkerGlobalScope(exec->hostThisValue().toThisObject(exec));
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDedicatedWorkerGlobalScope::s_info);
    return JSValue::encode(castedThis->postMessage(exec));
}

DedicatedWorkerGlobalScope* toDedicatedWorkerGlobalScope(JSC::JSValue value)
{
    return value.inherits(&JSDedicatedWorkerGlobalScope::s_info) ? jsCast<JSDedicatedWorkerGlobalScope*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WORKERS)