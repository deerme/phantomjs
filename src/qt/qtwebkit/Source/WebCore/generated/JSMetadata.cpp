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

#include "JSMetadata.h"

#include "Metadata.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSMetadataTableValues[] =
{
    { "modificationTime", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMetadataModificationTime), (intptr_t)0, NoIntrinsic },
    { "size", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsMetadataSize), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSMetadataTable = { 4, 3, JSMetadataTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSMetadataPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSMetadataPrototypeTable = { 1, 0, JSMetadataPrototypeTableValues, 0 };
static const HashTable* getJSMetadataPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSMetadataPrototypeTable);
}

const ClassInfo JSMetadataPrototype::s_info = { "MetadataPrototype", &Base::s_info, 0, getJSMetadataPrototypeTable, CREATE_METHOD_TABLE(JSMetadataPrototype) };

JSObject* JSMetadataPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSMetadata>(exec, globalObject);
}

static const HashTable* getJSMetadataTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSMetadataTable);
}

const ClassInfo JSMetadata::s_info = { "Metadata", &Base::s_info, 0, getJSMetadataTable , CREATE_METHOD_TABLE(JSMetadata) };

JSMetadata::JSMetadata(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Metadata> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSMetadata::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSMetadata::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSMetadataPrototype::create(exec->vm(), globalObject, JSMetadataPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSMetadata::destroy(JSC::JSCell* cell)
{
    JSMetadata* thisObject = static_cast<JSMetadata*>(cell);
    thisObject->JSMetadata::~JSMetadata();
}

JSMetadata::~JSMetadata()
{
    releaseImplIfNotNull();
}

bool JSMetadata::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSMetadata* thisObject = jsCast<JSMetadata*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSMetadata, Base>(exec, getJSMetadataTable(exec), thisObject, propertyName, slot);
}

bool JSMetadata::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSMetadata* thisObject = jsCast<JSMetadata*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSMetadata, Base>(exec, getJSMetadataTable(exec), thisObject, propertyName, descriptor);
}

JSValue jsMetadataModificationTime(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMetadata* castedThis = jsCast<JSMetadata*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Metadata* impl = static_cast<Metadata*>(castedThis->impl());
    JSValue result = jsDateOrNull(exec, impl->modificationTime());
    return result;
}


JSValue jsMetadataSize(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSMetadata* castedThis = jsCast<JSMetadata*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Metadata* impl = static_cast<Metadata*>(castedThis->impl());
    JSValue result = jsNumber(impl->size());
    return result;
}


static inline bool isObservable(JSMetadata* jsMetadata)
{
    if (jsMetadata->hasCustomProperties())
        return true;
    return false;
}

bool JSMetadataOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSMetadata* jsMetadata = jsCast<JSMetadata*>(handle.get().asCell());
    if (!isObservable(jsMetadata))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSMetadataOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSMetadata* jsMetadata = jsCast<JSMetadata*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsMetadata->impl(), jsMetadata);
    jsMetadata->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, Metadata* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSMetadata>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to Metadata.
    COMPILE_ASSERT(!__is_polymorphic(Metadata), Metadata_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<Metadata>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSMetadata>(exec, globalObject, impl);
}

Metadata* toMetadata(JSC::JSValue value)
{
    return value.inherits(&JSMetadata::s_info) ? jsCast<JSMetadata*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(FILE_SYSTEM)
