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
#include "JSArrayBuffer.h"

#include "ExceptionCode.h"
#include "JSArrayBuffer.h"
#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <wtf/ArrayBuffer.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSArrayBufferTableValues[] =
{
    { "byteLength", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsArrayBufferByteLength), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsArrayBufferConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSArrayBufferTable = { 5, 3, JSArrayBufferTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSArrayBufferConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSArrayBufferConstructorTable = { 1, 0, JSArrayBufferConstructorTableValues, 0 };
static const HashTable* getJSArrayBufferConstructorTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSArrayBufferConstructorTable);
}

const ClassInfo JSArrayBufferConstructor::s_info = { "ArrayBufferConstructor", &Base::s_info, 0, getJSArrayBufferConstructorTable, CREATE_METHOD_TABLE(JSArrayBufferConstructor) };

JSArrayBufferConstructor::JSArrayBufferConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSArrayBufferConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSArrayBufferPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(1), ReadOnly | DontDelete | DontEnum);
}

bool JSArrayBufferConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSArrayBufferConstructor, JSDOMWrapper>(exec, getJSArrayBufferConstructorTable(exec), jsCast<JSArrayBufferConstructor*>(cell), propertyName, slot);
}

bool JSArrayBufferConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSArrayBufferConstructor, JSDOMWrapper>(exec, getJSArrayBufferConstructorTable(exec), jsCast<JSArrayBufferConstructor*>(object), propertyName, descriptor);
}

ConstructType JSArrayBufferConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSArrayBuffer;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSArrayBufferPrototypeTableValues[] =
{
    { "slice", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsArrayBufferPrototypeFunctionSlice), (intptr_t)1, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSArrayBufferPrototypeTable = { 2, 1, JSArrayBufferPrototypeTableValues, 0 };
static const HashTable* getJSArrayBufferPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSArrayBufferPrototypeTable);
}

const ClassInfo JSArrayBufferPrototype::s_info = { "ArrayBufferPrototype", &Base::s_info, 0, getJSArrayBufferPrototypeTable, CREATE_METHOD_TABLE(JSArrayBufferPrototype) };

JSObject* JSArrayBufferPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSArrayBuffer>(exec, globalObject);
}

bool JSArrayBufferPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSArrayBufferPrototype* thisObject = jsCast<JSArrayBufferPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, getJSArrayBufferPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSArrayBufferPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSArrayBufferPrototype* thisObject = jsCast<JSArrayBufferPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, getJSArrayBufferPrototypeTable(exec), thisObject, propertyName, descriptor);
}

static const HashTable* getJSArrayBufferTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSArrayBufferTable);
}

const ClassInfo JSArrayBuffer::s_info = { "ArrayBuffer", &Base::s_info, 0, getJSArrayBufferTable , CREATE_METHOD_TABLE(JSArrayBuffer) };

JSArrayBuffer::JSArrayBuffer(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<ArrayBuffer> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSArrayBuffer::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSArrayBuffer::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSArrayBufferPrototype::create(exec->vm(), globalObject, JSArrayBufferPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSArrayBuffer::destroy(JSC::JSCell* cell)
{
    JSArrayBuffer* thisObject = static_cast<JSArrayBuffer*>(cell);
    thisObject->JSArrayBuffer::~JSArrayBuffer();
}

JSArrayBuffer::~JSArrayBuffer()
{
    releaseImplIfNotNull();
}

bool JSArrayBuffer::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSArrayBuffer* thisObject = jsCast<JSArrayBuffer*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSArrayBuffer, Base>(exec, getJSArrayBufferTable(exec), thisObject, propertyName, slot);
}

bool JSArrayBuffer::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSArrayBuffer* thisObject = jsCast<JSArrayBuffer*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSArrayBuffer, Base>(exec, getJSArrayBufferTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsArrayBufferByteLength(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSArrayBuffer* castedThis = jsCast<JSArrayBuffer*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ArrayBuffer* impl = static_cast<ArrayBuffer*>(castedThis->impl());
    JSValue result = jsNumber(impl->byteLength());
    return result;
}


JSValue jsArrayBufferConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSArrayBuffer* domObject = jsCast<JSArrayBuffer*>(asObject(slotBase));
    return JSArrayBuffer::getConstructor(exec, domObject->globalObject());
}

JSValue JSArrayBuffer::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSArrayBufferConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsArrayBufferPrototypeFunctionSlice(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSArrayBuffer::s_info))
        return throwVMTypeError(exec);
    JSArrayBuffer* castedThis = jsCast<JSArrayBuffer*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSArrayBuffer::s_info);
    ArrayBuffer* impl = static_cast<ArrayBuffer*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    int begin(toInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    size_t argsCount = exec->argumentCount();
    if (argsCount <= 1) {

        JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->slice(begin)));
        return JSValue::encode(result);
    }

    int end(toInt32(exec, exec->argument(1), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->slice(begin, end)));
    return JSValue::encode(result);
}

static inline bool isObservable(JSArrayBuffer* jsArrayBuffer)
{
    if (jsArrayBuffer->hasCustomProperties())
        return true;
    return false;
}

bool JSArrayBufferOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSArrayBuffer* jsArrayBuffer = jsCast<JSArrayBuffer*>(handle.get().asCell());
    if (!isObservable(jsArrayBuffer))
        return false;
    ArrayBuffer* root = jsArrayBuffer->impl();
    return visitor.containsOpaqueRoot(root);
}

void JSArrayBufferOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSArrayBuffer* jsArrayBuffer = jsCast<JSArrayBuffer*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsArrayBuffer->impl(), jsArrayBuffer);
    jsArrayBuffer->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, ArrayBuffer* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSArrayBuffer>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to ArrayBuffer.
    COMPILE_ASSERT(!__is_polymorphic(ArrayBuffer), ArrayBuffer_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<ArrayBuffer>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSArrayBuffer>(exec, globalObject, impl);
}

ArrayBuffer* toArrayBuffer(JSC::JSValue value)
{
    return value.inherits(&JSArrayBuffer::s_info) ? jsCast<JSArrayBuffer*>(asObject(value))->impl() : 0;
}

}
