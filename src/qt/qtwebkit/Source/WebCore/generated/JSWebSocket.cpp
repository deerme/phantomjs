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

#if ENABLE(WEB_SOCKETS)

#include "JSWebSocket.h"

#include "Event.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "JSArrayBuffer.h"
#include "JSArrayBufferView.h"
#include "JSBlob.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "KURL.h"
#include "WebSocket.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSWebSocketTableValues[] =
{
    { "URL", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketURL), (intptr_t)0, NoIntrinsic },
    { "url", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketUrl), (intptr_t)0, NoIntrinsic },
    { "readyState", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketReadyState), (intptr_t)0, NoIntrinsic },
    { "bufferedAmount", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketBufferedAmount), (intptr_t)0, NoIntrinsic },
    { "onopen", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketOnopen), (intptr_t)setJSWebSocketOnopen, NoIntrinsic },
    { "onmessage", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketOnmessage), (intptr_t)setJSWebSocketOnmessage, NoIntrinsic },
    { "onerror", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketOnerror), (intptr_t)setJSWebSocketOnerror, NoIntrinsic },
    { "onclose", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketOnclose), (intptr_t)setJSWebSocketOnclose, NoIntrinsic },
    { "protocol", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketProtocol), (intptr_t)0, NoIntrinsic },
    { "extensions", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketExtensions), (intptr_t)0, NoIntrinsic },
    { "binaryType", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketBinaryType), (intptr_t)setJSWebSocketBinaryType, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebSocketTable = { 34, 31, JSWebSocketTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSWebSocketConstructorTableValues[] =
{
    { "CONNECTING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketCONNECTING), (intptr_t)0, NoIntrinsic },
    { "OPEN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketOPEN), (intptr_t)0, NoIntrinsic },
    { "CLOSING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketCLOSING), (intptr_t)0, NoIntrinsic },
    { "CLOSED", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketCLOSED), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebSocketConstructorTable = { 8, 7, JSWebSocketConstructorTableValues, 0 };

COMPILE_ASSERT(0 == WebSocket::CONNECTING, WebSocketEnumCONNECTINGIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(1 == WebSocket::OPEN, WebSocketEnumOPENIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == WebSocket::CLOSING, WebSocketEnumCLOSINGIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == WebSocket::CLOSED, WebSocketEnumCLOSEDIsWrongUseDoNotCheckConstants);

EncodedJSValue JSC_HOST_CALL JSWebSocketConstructor::constructJSWebSocket1(ExecState* exec)
{
    JSWebSocketConstructor* castedThis = jsCast<JSWebSocketConstructor*>(exec->callee());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& url(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwVMError(exec, createReferenceError(exec, "WebSocket constructor associated document is unavailable"));
    RefPtr<WebSocket> object = WebSocket::create(context, url, ec);
    if (ec) {
        setDOMException(exec, ec);
        return JSValue::encode(JSValue());
    }
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

EncodedJSValue JSC_HOST_CALL JSWebSocketConstructor::constructJSWebSocket2(ExecState* exec)
{
    JSWebSocketConstructor* castedThis = jsCast<JSWebSocketConstructor*>(exec->callee());
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& url(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    Vector<String> protocols(toNativeArray<String>(exec, exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwVMError(exec, createReferenceError(exec, "WebSocket constructor associated document is unavailable"));
    RefPtr<WebSocket> object = WebSocket::create(context, url, protocols, ec);
    if (ec) {
        setDOMException(exec, ec);
        return JSValue::encode(JSValue());
    }
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

EncodedJSValue JSC_HOST_CALL JSWebSocketConstructor::constructJSWebSocket3(ExecState* exec)
{
    JSWebSocketConstructor* castedThis = jsCast<JSWebSocketConstructor*>(exec->callee());
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& url(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& protocol(exec->argument(1).isEmpty() ? String() : exec->argument(1).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    ScriptExecutionContext* context = castedThis->scriptExecutionContext();
    if (!context)
        return throwVMError(exec, createReferenceError(exec, "WebSocket constructor associated document is unavailable"));
    RefPtr<WebSocket> object = WebSocket::create(context, url, protocol, ec);
    if (ec) {
        setDOMException(exec, ec);
        return JSValue::encode(JSValue());
    }
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

EncodedJSValue JSC_HOST_CALL JSWebSocketConstructor::constructJSWebSocket(ExecState* exec)
{
    size_t argsCount = exec->argumentCount();
    if (argsCount == 1)
        return JSWebSocketConstructor::constructJSWebSocket1(exec);
    JSValue arg1(exec->argument(1));
    if ((argsCount == 2 && (arg1.isObject() && isJSArray(arg1))))
        return JSWebSocketConstructor::constructJSWebSocket2(exec);
    if (argsCount == 2)
        return JSWebSocketConstructor::constructJSWebSocket3(exec);
    if (argsCount < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    return throwVMTypeError(exec);
}

static const HashTable* getJSWebSocketConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSWebSocketConstructorTable);
}

const ClassInfo JSWebSocketConstructor::s_info = { "WebSocketConstructor", &Base::s_info, 0, getJSWebSocketConstructorTable, CREATE_METHOD_TABLE(JSWebSocketConstructor) };

JSWebSocketConstructor::JSWebSocketConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebSocketConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSWebSocketPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(1), ReadOnly | DontDelete | DontEnum);
}

bool JSWebSocketConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebSocketConstructor, JSDOMWrapper>(exec, getJSWebSocketConstructorTable(exec), jsCast<JSWebSocketConstructor*>(cell), propertyName, slot);
}

bool JSWebSocketConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWebSocketConstructor, JSDOMWrapper>(exec, getJSWebSocketConstructorTable(exec), jsCast<JSWebSocketConstructor*>(object), propertyName, descriptor);
}

ConstructType JSWebSocketConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSWebSocket;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSWebSocketPrototypeTableValues[] =
{
    { "CONNECTING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketCONNECTING), (intptr_t)0, NoIntrinsic },
    { "OPEN", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketOPEN), (intptr_t)0, NoIntrinsic },
    { "CLOSING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketCLOSING), (intptr_t)0, NoIntrinsic },
    { "CLOSED", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebSocketCLOSED), (intptr_t)0, NoIntrinsic },
    { "send", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebSocketPrototypeFunctionSend), (intptr_t)1, NoIntrinsic },
    { "close", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebSocketPrototypeFunctionClose), (intptr_t)0, NoIntrinsic },
    { "addEventListener", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebSocketPrototypeFunctionAddEventListener), (intptr_t)2, NoIntrinsic },
    { "removeEventListener", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebSocketPrototypeFunctionRemoveEventListener), (intptr_t)2, NoIntrinsic },
    { "dispatchEvent", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsWebSocketPrototypeFunctionDispatchEvent), (intptr_t)1, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebSocketPrototypeTable = { 34, 31, JSWebSocketPrototypeTableValues, 0 };
static const HashTable* getJSWebSocketPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSWebSocketPrototypeTable);
}

const ClassInfo JSWebSocketPrototype::s_info = { "WebSocketPrototype", &Base::s_info, 0, getJSWebSocketPrototypeTable, CREATE_METHOD_TABLE(JSWebSocketPrototype) };

JSObject* JSWebSocketPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebSocket>(exec, globalObject);
}

bool JSWebSocketPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebSocketPrototype* thisObject = jsCast<JSWebSocketPrototype*>(cell);
    return getStaticPropertySlot<JSWebSocketPrototype, JSObject>(exec, getJSWebSocketPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSWebSocketPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSWebSocketPrototype* thisObject = jsCast<JSWebSocketPrototype*>(object);
    return getStaticPropertyDescriptor<JSWebSocketPrototype, JSObject>(exec, getJSWebSocketPrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSWebSocketTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSWebSocketTable);
}

const ClassInfo JSWebSocket::s_info = { "WebSocket", &Base::s_info, 0, getJSWebSocketTable , CREATE_METHOD_TABLE(JSWebSocket) };

JSWebSocket::JSWebSocket(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebSocket> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSWebSocket::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSWebSocket::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSWebSocketPrototype::create(exec->vm(), globalObject, JSWebSocketPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSWebSocket::destroy(JSC::JSCell* cell)
{
    JSWebSocket* thisObject = static_cast<JSWebSocket*>(cell);
    thisObject->JSWebSocket::~JSWebSocket();
}

JSWebSocket::~JSWebSocket()
{
    releaseImplIfNotNull();
}

bool JSWebSocket::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebSocket* thisObject = jsCast<JSWebSocket*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSWebSocket, Base>(exec, getJSWebSocketTable(exec), thisObject, propertyName, slot);
}

bool JSWebSocket::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSWebSocket* thisObject = jsCast<JSWebSocket*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSWebSocket, Base>(exec, getJSWebSocketTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsWebSocketURL(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->url());
    return result;
}


JSValue jsWebSocketUrl(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->url());
    return result;
}


JSValue jsWebSocketReadyState(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    JSValue result = jsNumber(impl->readyState());
    return result;
}


JSValue jsWebSocketBufferedAmount(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    JSValue result = jsNumber(impl->bufferedAmount());
    return result;
}


JSValue jsWebSocketOnopen(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    if (EventListener* listener = impl->onopen()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsWebSocketOnmessage(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    if (EventListener* listener = impl->onmessage()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsWebSocketOnerror(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    if (EventListener* listener = impl->onerror()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsWebSocketOnclose(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    if (EventListener* listener = impl->onclose()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl->scriptExecutionContext()))
                return jsFunction;
        }
    }
    return jsNull();
}


JSValue jsWebSocketProtocol(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    JSValue result = jsStringOrUndefined(exec, impl->protocol());
    return result;
}


JSValue jsWebSocketExtensions(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    JSValue result = jsStringOrUndefined(exec, impl->extensions());
    return result;
}


JSValue jsWebSocketBinaryType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->binaryType());
    return result;
}


JSValue jsWebSocketConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebSocket* domObject = jsCast<JSWebSocket*>(asObject(slotBase));
    return JSWebSocket::getConstructor(exec, domObject->globalObject());
}

void JSWebSocket::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSWebSocket* thisObject = jsCast<JSWebSocket*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSWebSocket, Base>(exec, propertyName, value, getJSWebSocketTable(exec), thisObject, slot);
}

void setJSWebSocketOnopen(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(thisObject);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    impl->setOnopen(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSWebSocketOnmessage(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(thisObject);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    impl->setOnmessage(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSWebSocketOnerror(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(thisObject);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    impl->setOnerror(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSWebSocketOnclose(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    UNUSED_PARAM(exec);
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(thisObject);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    impl->setOnclose(createJSAttributeEventListener(exec, value, thisObject));
}


void setJSWebSocketBinaryType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(thisObject);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    const String& nativeValue(value.isEmpty() ? String() : value.toString(exec)->value(exec));
    if (exec->hadException())
        return;
    impl->setBinaryType(nativeValue);
}


JSValue JSWebSocket::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebSocketConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

static EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionSend1(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebSocket::s_info))
        return throwVMTypeError(exec);
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebSocket::s_info);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ArrayBuffer* data(toArrayBuffer(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->send(data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

static EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionSend2(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebSocket::s_info))
        return throwVMTypeError(exec);
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebSocket::s_info);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    ArrayBufferView* data(toArrayBufferView(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->send(data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

static EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionSend3(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebSocket::s_info))
        return throwVMTypeError(exec);
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebSocket::s_info);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Blob* data(toBlob(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->send(data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

static EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionSend4(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebSocket::s_info))
        return throwVMTypeError(exec);
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebSocket::s_info);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& data(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->send(data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionSend(ExecState* exec)
{
    size_t argsCount = exec->argumentCount();
    JSValue arg0(exec->argument(0));
    if ((argsCount == 1 && (arg0.isObject() && asObject(arg0)->inherits(&JSArrayBuffer::s_info))))
        return jsWebSocketPrototypeFunctionSend1(exec);
    if ((argsCount == 1 && (arg0.isObject() && asObject(arg0)->inherits(&JSArrayBufferView::s_info))))
        return jsWebSocketPrototypeFunctionSend2(exec);
    if ((argsCount == 1 && (arg0.isObject() && asObject(arg0)->inherits(&JSBlob::s_info))))
        return jsWebSocketPrototypeFunctionSend3(exec);
    if (argsCount == 1)
        return jsWebSocketPrototypeFunctionSend4(exec);
    if (argsCount < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    return throwVMTypeError(exec);
}

EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionClose(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebSocket::s_info))
        return throwVMTypeError(exec);
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebSocket::s_info);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    ExceptionCode ec = 0;

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 0) {
        impl->close(ec);
        setDOMException(exec, ec);
        return JSValue::encode(jsUndefined());
    }

    unsigned short code = 0;
    double codeNativeValue = exec->argument(0).toNumber(exec);
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    if (!std::isnan(codeNativeValue))
        code = clampTo<unsigned short>(codeNativeValue);

    if (argsCount <= 1) {
        impl->close(code, ec);
        setDOMException(exec, ec);
        return JSValue::encode(jsUndefined());
    }

    const String& reason(exec->argument(1).isEmpty() ? String() : exec->argument(1).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->close(code, reason, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebSocket::s_info))
        return throwVMTypeError(exec);
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebSocket::s_info);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl->addEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebSocket::s_info))
        return throwVMTypeError(exec);
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebSocket::s_info);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl->removeEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsWebSocketPrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSWebSocket::s_info))
        return throwVMTypeError(exec);
    JSWebSocket* castedThis = jsCast<JSWebSocket*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSWebSocket::s_info);
    WebSocket* impl = static_cast<WebSocket*>(castedThis->impl());
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

void JSWebSocket::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    JSWebSocket* thisObject = jsCast<JSWebSocket*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    COMPILE_ASSERT(StructureFlags & OverridesVisitChildren, OverridesVisitChildrenWithoutSettingFlag);
    ASSERT(thisObject->structure()->typeInfo().overridesVisitChildren());
    Base::visitChildren(thisObject, visitor);
    thisObject->impl()->visitJSEventListeners(visitor);
}

// Constant getters

JSValue jsWebSocketCONNECTING(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsWebSocketOPEN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsWebSocketCLOSING(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsWebSocketCLOSED(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

static inline bool isObservable(JSWebSocket* jsWebSocket)
{
    if (jsWebSocket->hasCustomProperties())
        return true;
    if (jsWebSocket->impl()->hasEventListeners())
        return true;
    return false;
}

bool JSWebSocketOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSWebSocket* jsWebSocket = jsCast<JSWebSocket*>(handle.get().asCell());
    if (jsWebSocket->impl()->hasPendingActivity())
        return true;
    if (jsWebSocket->impl()->isFiringEventListeners())
        return true;
    if (!isObservable(jsWebSocket))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSWebSocketOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSWebSocket* jsWebSocket = jsCast<JSWebSocket*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsWebSocket->impl(), jsWebSocket);
    jsWebSocket->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7WebSocket@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore9WebSocketE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebSocket* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebSocket>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7WebSocket@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore9WebSocketE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails WebSocket does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(WebSocket), WebSocket_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // WebSocket has subclasses. If WebSocket has subclasses that get passed
    // to toJS() we currently require WebSocket you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<WebSocket>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSWebSocket>(exec, globalObject, impl);
}

WebSocket* toWebSocket(JSC::JSValue value)
{
    return value.inherits(&JSWebSocket::s_info) ? jsCast<JSWebSocket*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WEB_SOCKETS)
