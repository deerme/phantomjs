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
#include "JSEventSource.h"

#include "Dictionary.h"
#include "Event.h"
#include "EventListener.h"
#include "EventSource.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSEventSourceTableValues[] =
{
    { "URL", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceURL), (intptr_t)0, NoIntrinsic },
    { "url", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceUrl), (intptr_t)0, NoIntrinsic },
    { "withCredentials", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceWithCredentials), (intptr_t)0, NoIntrinsic },
    { "readyState", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceReadyState), (intptr_t)0, NoIntrinsic },
    { "onopen", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceOnopen), (intptr_t)setJSEventSourceOnopen, NoIntrinsic },
    { "onmessage", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceOnmessage), (intptr_t)setJSEventSourceOnmessage, NoIntrinsic },
    { "onerror", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceOnerror), (intptr_t)setJSEventSourceOnerror, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSEventSourceTable = { 18, 15, JSEventSourceTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSEventSourceConstructorTableValues[] =
{
    { "CONNECTING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceCONNECTING), (intptr_t)0, NoIntrinsic },
    { "OPEN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceOPEN), (intptr_t)0, NoIntrinsic },
    { "CLOSED", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceCLOSED), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSEventSourceConstructorTable = { 8, 7, JSEventSourceConstructorTableValues, 0 };

COMPILE_ASSERT(0 == EventSource::CONNECTING, EventSourceEnumCONNECTINGIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == EventSource::OPEN, EventSourceEnumOPENIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == EventSource::CLOSED, EventSourceEnumCLOSEDIsWrongUseDoNotCheckConstants);

EncodedJSValue JSC_HOST_CALL JSEventSourceConstructor::constructJSEventSource(ExecState* exec)
{
    JSEventSourceConstructor* castedThis = jsCast<JSEventSourceConstructor*>(exec->callee());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& url(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    Dictionary eventSourceInit(exec, exec->argument(1));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwVMError(exec, createReferenceError(exec, "EventSource constructor associated document is unavailable"));
    RefPtr<EventSource> object = EventSource::create(context, url, eventSourceInit, ec);
    if (ec) {
        setDOMException(exec, ec);
        return JSValue::encode(JSValue());
    }
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

static const HashTable* getJSEventSourceConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSEventSourceConstructorTable);
}

const ClassInfo JSEventSourceConstructor::s_info = { "EventSourceConstructor", &Base::s_info, 0, getJSEventSourceConstructorTable, CREATE_METHOD_TABLE(JSEventSourceConstructor) };

JSEventSourceConstructor::JSEventSourceConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSEventSourceConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSEventSourcePrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(1), ReadOnly | DontDelete | DontEnum);
}

bool JSEventSourceConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSEventSourceConstructor, JSDOMWrapper>(exec, getJSEventSourceConstructorTable(exec), jsCast<JSEventSourceConstructor*>(cell), propertyName, slot);
}

bool JSEventSourceConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSEventSourceConstructor, JSDOMWrapper>(exec, getJSEventSourceConstructorTable(exec), jsCast<JSEventSourceConstructor*>(object), propertyName, descriptor);
}

ConstructType JSEventSourceConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSEventSource;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSEventSourcePrototypeTableValues[] =
{
    { "CONNECTING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceCONNECTING), (intptr_t)0, NoIntrinsic },
    { "OPEN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceOPEN), (intptr_t)0, NoIntrinsic },
    { "CLOSED", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsEventSourceCLOSED), (intptr_t)0, NoIntrinsic },
    { "close", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsEventSourcePrototypeFunctionClose), (intptr_t)0, NoIntrinsic },
    { "addEventListener", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsEventSourcePrototypeFunctionAddEventListener), (intptr_t)2, NoIntrinsic },
    { "removeEventListener", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsEventSourcePrototypeFunctionRemoveEventListener), (intptr_t)2, NoIntrinsic },
    { "dispatchEvent", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsEventSourcePrototypeFunctionDispatchEvent), (intptr_t)1, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSEventSourcePrototypeTable = { 17, 15, JSEventSourcePrototypeTableValues, 0 };
static const HashTable* getJSEventSourcePrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSEventSourcePrototypeTable);
}

const ClassInfo JSEventSourcePrototype::s_info = { "EventSourcePrototype", &Base::s_info, 0, getJSEventSourcePrototypeTable, CREATE_METHOD_TABLE(JSEventSourcePrototype) };

JSObject* JSEventSourcePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSEventSource>(exec, globalObject);
}

bool JSEventSourcePrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSEventSourcePrototype* thisObject = jsCast<JSEventSourcePrototype*>(cell);
    return getStaticPropertySlot<JSEventSourcePrototype, JSObject>(exec, getJSEventSourcePrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSEventSourcePrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSEventSourcePrototype* thisObject = jsCast<JSEventSourcePrototype*>(object);
    return getStaticPropertyDescriptor<JSEventSourcePrototype, JSObject>(exec, getJSEventSourcePrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSEventSourceTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSEventSourceTable);
}

const ClassInfo JSEventSource::s_info = { "EventSource", &Base::s_info, 0, getJSEventSourceTable , CREATE_METHOD_TABLE(JSEventSource) };

JSEventSource::JSEventSource(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<EventSource> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSEventSource::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSEventSource::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSEventSourcePrototype::create(exec->vm(), globalObject, JSEventSourcePrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSEventSource::destroy(JSC::JSCell* cell)
{
    JSEventSource* thisObject = static_cast<JSEventSource*>(cell);
    thisObject->JSEventSource::~JSEventSource();
}

JSEventSource::~JSEventSource()
{
    releaseImplIfNotNull();
}

bool JSEventSource::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSEventSource* thisObject = jsCast<JSEventSource*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSEventSource, Base>(exec, getJSEventSourceTable(exec), thisObject, propertyName, slot);
}

bool JSEventSource::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSEventSource* thisObject = jsCast<JSEventSource*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSEventSource, Base>(exec, getJSEventSourceTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsEventSourceURL(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEventSource* castedThis = jsCast<JSEventSource*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    EventSource* impl = static_cast<EventSource*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->url());
    return result;
}


JSValue jsEventSourceUrl(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEventSource* castedThis = jsCast<JSEventSource*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    EventSource* impl = static_cast<EventSource*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->url());
    return result;
}


JSValue jsEventSourceWithCredentials(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEventSource* castedThis = jsCast<JSEventSource*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    EventSource* impl = static_cast<EventSource*>(castedThis->impl());
    JSValue result = jsBoolean(impl->withCredentials());
    return result;
}


JSValue jsEventSourceReadyState(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEventSource* castedThis = jsCast<JSEventSource*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    EventSource* impl = static_cast<EventSource*>(castedThis->impl());
    JSValue result = jsNumber(impl->readyState());
    return result;
}


JSValue jsEventSourceOnopen(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEventSource* castedThis = jsCast<JSEventSource*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    EventSource* impl = static_cast<EventSource*>(castedThis->impl());
    if (EventListener* listener = impl->onopen()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsEventSourceOnmessage(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEventSource* castedThis = jsCast<JSEventSource*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    EventSource* impl = static_cast<EventSource*>(castedThis->impl());
    if (EventListener* listener = impl->onmessage()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsEventSourceOnerror(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEventSource* castedThis = jsCast<JSEventSource*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    EventSource* impl = static_cast<EventSource*>(castedThis->impl());
    if (EventListener* listener = impl->onerror()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsEventSourceConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSEventSource* domObject = jsCast<JSEventSource*>(asObject(slotBase));
    return JSEventSource::getConstructor(exec, domObject->globalObject());
}

void JSEventSource::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSEventSource* thisObject = jsCast<JSEventSource*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSEventSource, Base>(exec, propertyName, value, getJSEventSourceTable(exec), thisObject, slot);
}

void setJSEventSourceOnopen(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSEventSource* castedThis = jsCast<JSEventSource*>(thisObject);
    EventSource* impl = static_cast<EventSource*>(castedThis->impl());
    impl->setOnopen(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSEventSourceOnmessage(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSEventSource* castedThis = jsCast<JSEventSource*>(thisObject);
    EventSource* impl = static_cast<EventSource*>(castedThis->impl());
    impl->setOnmessage(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSEventSourceOnerror(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSEventSource* castedThis = jsCast<JSEventSource*>(thisObject);
    EventSource* impl = static_cast<EventSource*>(castedThis->impl());
    impl->setOnerror(createJSAttributeEventListener(exec, value, thisObject));
}


JSValue JSEventSource::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSEventSourceConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsEventSourcePrototypeFunctionClose(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEventSource::s_info))
        return throwVMTypeError(exec);
    JSEventSource* castedThis = jsCast<JSEventSource*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSEventSource::s_info);
    EventSource* impl = static_cast<EventSource*>(castedThis->impl());
    impl->close();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEventSourcePrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEventSource::s_info))
        return throwVMTypeError(exec);
    JSEventSource* castedThis = jsCast<JSEventSource*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSEventSource::s_info);
    EventSource* impl = static_cast<EventSource*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl->addEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEventSourcePrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEventSource::s_info))
        return throwVMTypeError(exec);
    JSEventSource* castedThis = jsCast<JSEventSource*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSEventSource::s_info);
    EventSource* impl = static_cast<EventSource*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl->removeEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsEventSourcePrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSEventSource::s_info))
        return throwVMTypeError(exec);
    JSEventSource* castedThis = jsCast<JSEventSource*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSEventSource::s_info);
    EventSource* impl = static_cast<EventSource*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Event* evt(toEvent(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->dispatchEvent(evt, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

void JSEventSource::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    JSEventSource* thisObject = jsCast<JSEventSource*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    COMPILE_ASSERT(StructureFlags & OverridesVisitChildren, OverridesVisitChildrenWithoutSettingFlag);
    ASSERT(thisObject->structure()->typeInfo().overridesVisitChildren());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl()->visitJSEventListeners(visitor);
}

// Constant getters

JSValue jsEventSourceCONNECTING(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsEventSourceOPEN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsEventSourceCLOSED(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

static inline bool isObservable(JSEventSource* jsEventSource)
{
    if (jsEventSource->hasCustomProperties())
        return true;
    if (jsEventSource->impl()->hasEventListeners())
        return true;
    return false;
}

bool JSEventSourceOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSEventSource* jsEventSource = jsCast<JSEventSource*>(handle.get().asCell());
    if (jsEventSource->impl()->hasPendingActivity())
        return true;
    if (jsEventSource->impl()->isFiringEventListeners())
        return true;
    if (!isObservable(jsEventSource))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSEventSourceOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSEventSource* jsEventSource = jsCast<JSEventSource*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsEventSource->impl(), jsEventSource);
    jsEventSource->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7EventSource@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore11EventSourceE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, EventSource* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSEventSource>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7EventSource@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore11EventSourceE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails EventSource does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(EventSource), EventSource_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // EventSource has subclasses. If EventSource has subclasses that get passed
    // to toJS() we currently require EventSource you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<EventSource>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSEventSource>(exec, globalObject, impl);
}

EventSource* toEventSource(JSC::JSValue value)
{
    return value.inherits(&JSEventSource::s_info) ? jsCast<JSEventSource*>(asObject(value))->impl() : 0;
}

}
