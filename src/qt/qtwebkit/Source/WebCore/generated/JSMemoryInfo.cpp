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
#include "JSMemoryInfo.h"

#include "MemoryInfo.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSMemoryInfoTableValues[] =
{
    { "usedJSHeapSize", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMemoryInfoUsedJSHeapSize), (intptr_t)0, NoIntrinsic },
    { "totalJSHeapSize", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMemoryInfoTotalJSHeapSize), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSMemoryInfoTable = { 4, 3, JSMemoryInfoTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSMemoryInfoPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSMemoryInfoPrototypeTable = { 1, 0, JSMemoryInfoPrototypeTableValues, 0 };
const ClassInfo JSMemoryInfoPrototype::s_info = { "MemoryInfoPrototype", &Base::s_info, &JSMemoryInfoPrototypeTable, 0, CREATE_METHOD_TABLE(JSMemoryInfoPrototype) };

JSObject* JSMemoryInfoPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMemoryInfo>(exec, globalObject);
}

const ClassInfo JSMemoryInfo::s_info = { "MemoryInfo", &Base::s_info, &JSMemoryInfoTable, 0 , CREATE_METHOD_TABLE(JSMemoryInfo) };

JSMemoryInfo::JSMemoryInfo(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MemoryInfo> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSMemoryInfo::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSMemoryInfo::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSMemoryInfoPrototype::create(exec->vm(), globalObject, JSMemoryInfoPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSMemoryInfo::destroy(JSC::JSCell* cell)
{
    JSMemoryInfo* thisObject = static_cast<JSMemoryInfo*>(cell);
    thisObject->JSMemoryInfo::~JSMemoryInfo();
}

JSMemoryInfo::~JSMemoryInfo()
{
    releaseImplIfNotNull();
}

bool JSMemoryInfo::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSMemoryInfo* thisObject = jsCast<JSMemoryInfo*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSMemoryInfo, Base>(exec, &JSMemoryInfoTable, thisObject, propertyName, slot);
}

bool JSMemoryInfo::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSMemoryInfo* thisObject = jsCast<JSMemoryInfo*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSMemoryInfo, Base>(exec, &JSMemoryInfoTable, thisObject, propertyName, descriptor);
}

JSValue jsMemoryInfoUsedJSHeapSize(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMemoryInfo* castedThis = jsCast<JSMemoryInfo*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MemoryInfo* impl = static_cast<MemoryInfo*>(castedThis->impl());
    JSValue result = jsNumber(impl->usedJSHeapSize());
    return result;
}


JSValue jsMemoryInfoTotalJSHeapSize(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMemoryInfo* castedThis = jsCast<JSMemoryInfo*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    MemoryInfo* impl = static_cast<MemoryInfo*>(castedThis->impl());
    JSValue result = jsNumber(impl->totalJSHeapSize());
    return result;
}


static inline bool isObservable(JSMemoryInfo* jsMemoryInfo)
{
    if (jsMemoryInfo->hasCustomProperties())
        return true;
    return false;
}

bool JSMemoryInfoOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSMemoryInfo* jsMemoryInfo = jsCast<JSMemoryInfo*>(handle.get().asCell());
    if (!isObservable(jsMemoryInfo))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSMemoryInfoOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSMemoryInfo* jsMemoryInfo = jsCast<JSMemoryInfo*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsMemoryInfo->impl(), jsMemoryInfo);
    jsMemoryInfo->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, MemoryInfo* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMemoryInfo>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to MemoryInfo.
    COMPILE_ASSERT(!__is_polymorphic(MemoryInfo), MemoryInfo_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<MemoryInfo>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSMemoryInfo>(exec, globalObject, impl);
}

MemoryInfo* toMemoryInfo(JSC::JSValue value)
{
    return value.inherits(&JSMemoryInfo::s_info) ? jsCast<JSMemoryInfo*>(asObject(value))->impl() : 0;
}

}