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

#include "JSDirectoryReaderSync.h"

#include "DirectoryReaderSync.h"
#include "EntryArraySync.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEntryArraySync.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSDirectoryReaderSyncPrototypeTableValues[] =
{
    { "readEntries", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDirectoryReaderSyncPrototypeFunctionReadEntries), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDirectoryReaderSyncPrototypeTable = { 2, 1, JSDirectoryReaderSyncPrototypeTableValues, 0 };
static const HashTable* getJSDirectoryReaderSyncPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSDirectoryReaderSyncPrototypeTable);
}

const ClassInfo JSDirectoryReaderSyncPrototype::s_info = { "DirectoryReaderSyncPrototype", &Base::s_info, 0, getJSDirectoryReaderSyncPrototypeTable, CREATE_METHOD_TABLE(JSDirectoryReaderSyncPrototype) };

JSObject* JSDirectoryReaderSyncPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDirectoryReaderSync>(exec, globalObject);
}

bool JSDirectoryReaderSyncPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDirectoryReaderSyncPrototype* thisObject = jsCast<JSDirectoryReaderSyncPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, getJSDirectoryReaderSyncPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSDirectoryReaderSyncPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDirectoryReaderSyncPrototype* thisObject = jsCast<JSDirectoryReaderSyncPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, getJSDirectoryReaderSyncPrototypeTable(exec), thisObject, propertyName, descriptor);
}

const ClassInfo JSDirectoryReaderSync::s_info = { "DirectoryReaderSync", &Base::s_info, 0, 0 , CREATE_METHOD_TABLE(JSDirectoryReaderSync) };

JSDirectoryReaderSync::JSDirectoryReaderSync(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DirectoryReaderSync> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSDirectoryReaderSync::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSDirectoryReaderSync::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSDirectoryReaderSyncPrototype::create(exec->vm(), globalObject, JSDirectoryReaderSyncPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSDirectoryReaderSync::destroy(JSC::JSCell* cell)
{
    JSDirectoryReaderSync* thisObject = static_cast<JSDirectoryReaderSync*>(cell);
    thisObject->JSDirectoryReaderSync::~JSDirectoryReaderSync();
}

JSDirectoryReaderSync::~JSDirectoryReaderSync()
{
    releaseImplIfNotNull();
}

EncodedJSValue JSC_HOST_CALL jsDirectoryReaderSyncPrototypeFunctionReadEntries(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDirectoryReaderSync::s_info))
        return throwVMTypeError(exec);
    JSDirectoryReaderSync* castedThis = jsCast<JSDirectoryReaderSync*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDirectoryReaderSync::s_info);
    DirectoryReaderSync* impl = static_cast<DirectoryReaderSync*>(castedThis->impl());
    ExceptionCode ec = 0;

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->readEntries(ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

static inline bool isObservable(JSDirectoryReaderSync* jsDirectoryReaderSync)
{
    if (jsDirectoryReaderSync->hasCustomProperties())
        return true;
    return false;
}

bool JSDirectoryReaderSyncOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSDirectoryReaderSync* jsDirectoryReaderSync = jsCast<JSDirectoryReaderSync*>(handle.get().asCell());
    if (!isObservable(jsDirectoryReaderSync))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSDirectoryReaderSyncOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSDirectoryReaderSync* jsDirectoryReaderSync = jsCast<JSDirectoryReaderSync*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsDirectoryReaderSync->impl(), jsDirectoryReaderSync);
    jsDirectoryReaderSync->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DirectoryReaderSync* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDirectoryReaderSync>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to DirectoryReaderSync.
    COMPILE_ASSERT(!__is_polymorphic(DirectoryReaderSync), DirectoryReaderSync_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<DirectoryReaderSync>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSDirectoryReaderSync>(exec, globalObject, impl);
}

DirectoryReaderSync* toDirectoryReaderSync(JSC::JSValue value)
{
    return value.inherits(&JSDirectoryReaderSync::s_info) ? jsCast<JSDirectoryReaderSync*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(FILE_SYSTEM)
