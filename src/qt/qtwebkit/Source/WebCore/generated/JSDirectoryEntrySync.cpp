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

#if ENABLE(FILE_SYSTEM)

#include "JSDirectoryEntrySync.h"

#include "Dictionary.h"
#include "DirectoryEntrySync.h"
#include "DirectoryReaderSync.h"
#include "ExceptionCode.h"
#include "FileEntrySync.h"
#include "JSDOMBinding.h"
#include "JSDirectoryEntrySync.h"
#include "JSDirectoryReaderSync.h"
#include "JSFileEntrySync.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSDirectoryEntrySyncPrototypeTableValues[] =
{
    { "createReader", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDirectoryEntrySyncPrototypeFunctionCreateReader), (intptr_t)0, NoIntrinsic },
    { "getFile", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDirectoryEntrySyncPrototypeFunctionGetFile), (intptr_t)2, NoIntrinsic },
    { "getDirectory", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDirectoryEntrySyncPrototypeFunctionGetDirectory), (intptr_t)2, NoIntrinsic },
    { "removeRecursively", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDirectoryEntrySyncPrototypeFunctionRemoveRecursively), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDirectoryEntrySyncPrototypeTable = { 10, 7, JSDirectoryEntrySyncPrototypeTableValues, 0 };
static const HashTable* getJSDirectoryEntrySyncPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSDirectoryEntrySyncPrototypeTable);
}

const ClassInfo JSDirectoryEntrySyncPrototype::s_info = { "DirectoryEntrySyncPrototype", &Base::s_info, 0, getJSDirectoryEntrySyncPrototypeTable, CREATE_METHOD_TABLE(JSDirectoryEntrySyncPrototype) };

JSObject* JSDirectoryEntrySyncPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDirectoryEntrySync>(exec, globalObject);
}

bool JSDirectoryEntrySyncPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDirectoryEntrySyncPrototype* thisObject = jsCast<JSDirectoryEntrySyncPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, getJSDirectoryEntrySyncPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSDirectoryEntrySyncPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDirectoryEntrySyncPrototype* thisObject = jsCast<JSDirectoryEntrySyncPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, getJSDirectoryEntrySyncPrototypeTable(exec), thisObject, propertyName, descriptor);
}

const ClassInfo JSDirectoryEntrySync::s_info = { "DirectoryEntrySync", &Base::s_info, 0, 0 , CREATE_METHOD_TABLE(JSDirectoryEntrySync) };

JSDirectoryEntrySync::JSDirectoryEntrySync(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DirectoryEntrySync> impl)
    : JSEntrySync(structure, globalObject, impl)
{
}

void JSDirectoryEntrySync::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSDirectoryEntrySync::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSDirectoryEntrySyncPrototype::create(exec->vm(), globalObject, JSDirectoryEntrySyncPrototype::createStructure(exec->vm(), globalObject, JSEntrySyncPrototype::self(exec, globalObject)));
}

EncodedJSValue JSC_HOST_CALL jsDirectoryEntrySyncPrototypeFunctionCreateReader(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDirectoryEntrySync::s_info))
        return throwVMTypeError(exec);
    JSDirectoryEntrySync* castedThis = jsCast<JSDirectoryEntrySync*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDirectoryEntrySync::s_info);
    DirectoryEntrySync* impl = static_cast<DirectoryEntrySync*>(castedThis->impl());
    ExceptionCode ec = 0;

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->createReader(ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDirectoryEntrySyncPrototypeFunctionGetFile(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDirectoryEntrySync::s_info))
        return throwVMTypeError(exec);
    JSDirectoryEntrySync* castedThis = jsCast<JSDirectoryEntrySync*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDirectoryEntrySync::s_info);
    DirectoryEntrySync* impl = static_cast<DirectoryEntrySync*>(castedThis->impl());
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& path(valueToStringWithUndefinedOrNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    Dictionary flags(exec, exec->argument(1));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->getFile(path, flags, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDirectoryEntrySyncPrototypeFunctionGetDirectory(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDirectoryEntrySync::s_info))
        return throwVMTypeError(exec);
    JSDirectoryEntrySync* castedThis = jsCast<JSDirectoryEntrySync*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDirectoryEntrySync::s_info);
    DirectoryEntrySync* impl = static_cast<DirectoryEntrySync*>(castedThis->impl());
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    const String& path(valueToStringWithUndefinedOrNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    Dictionary flags(exec, exec->argument(1));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->getDirectory(path, flags, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDirectoryEntrySyncPrototypeFunctionRemoveRecursively(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDirectoryEntrySync::s_info))
        return throwVMTypeError(exec);
    JSDirectoryEntrySync* castedThis = jsCast<JSDirectoryEntrySync*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDirectoryEntrySync::s_info);
    DirectoryEntrySync* impl = static_cast<DirectoryEntrySync*>(castedThis->impl());
    ExceptionCode ec = 0;
    impl->removeRecursively(ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7DirectoryEntrySync@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore18DirectoryEntrySyncE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DirectoryEntrySync* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDirectoryEntrySync>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7DirectoryEntrySync@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore18DirectoryEntrySyncE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails DirectoryEntrySync does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(DirectoryEntrySync), DirectoryEntrySync_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // DirectoryEntrySync has subclasses. If DirectoryEntrySync has subclasses that get passed
    // to toJS() we currently require DirectoryEntrySync you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<DirectoryEntrySync>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSDirectoryEntrySync>(exec, globalObject, impl);
}

DirectoryEntrySync* toDirectoryEntrySync(JSC::JSValue value)
{
    return value.inherits(&JSDirectoryEntrySync::s_info) ? jsCast<JSDirectoryEntrySync*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(FILE_SYSTEM)
