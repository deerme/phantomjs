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

#include "JSDOMNamedFlowCollection.h"

#include "DOMNamedFlowCollection.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSWebKitNamedFlow.h"
#include "WebKitNamedFlow.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSDOMNamedFlowCollectionTableValues[] =
{
    { "length", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMNamedFlowCollectionLength), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMNamedFlowCollectionTable = { 2, 1, JSDOMNamedFlowCollectionTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSDOMNamedFlowCollectionPrototypeTableValues[] =
{
    { "item", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMNamedFlowCollectionPrototypeFunctionItem), (intptr_t)1, NoIntrinsic },
    { "namedItem", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMNamedFlowCollectionPrototypeFunctionNamedItem), (intptr_t)1, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMNamedFlowCollectionPrototypeTable = { 5, 3, JSDOMNamedFlowCollectionPrototypeTableValues, 0 };
const ClassInfo JSDOMNamedFlowCollectionPrototype::s_info = { "WebKitNamedFlowCollectionPrototype", &Base::s_info, &JSDOMNamedFlowCollectionPrototypeTable, 0, CREATE_METHOD_TABLE(JSDOMNamedFlowCollectionPrototype) };

JSObject* JSDOMNamedFlowCollectionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMNamedFlowCollection>(exec, globalObject);
}

bool JSDOMNamedFlowCollectionPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDOMNamedFlowCollectionPrototype* thisObject = jsCast<JSDOMNamedFlowCollectionPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSDOMNamedFlowCollectionPrototypeTable, thisObject, propertyName, slot);
}

bool JSDOMNamedFlowCollectionPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDOMNamedFlowCollectionPrototype* thisObject = jsCast<JSDOMNamedFlowCollectionPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSDOMNamedFlowCollectionPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSDOMNamedFlowCollection::s_info = { "WebKitNamedFlowCollection", &Base::s_info, &JSDOMNamedFlowCollectionTable, 0 , CREATE_METHOD_TABLE(JSDOMNamedFlowCollection) };

JSDOMNamedFlowCollection::JSDOMNamedFlowCollection(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMNamedFlowCollection> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSDOMNamedFlowCollection::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSDOMNamedFlowCollection::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSDOMNamedFlowCollectionPrototype::create(exec->vm(), globalObject, JSDOMNamedFlowCollectionPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSDOMNamedFlowCollection::destroy(JSC::JSCell* cell)
{
    JSDOMNamedFlowCollection* thisObject = static_cast<JSDOMNamedFlowCollection*>(cell);
    thisObject->JSDOMNamedFlowCollection::~JSDOMNamedFlowCollection();
}

JSDOMNamedFlowCollection::~JSDOMNamedFlowCollection()
{
    releaseImplIfNotNull();
}

bool JSDOMNamedFlowCollection::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDOMNamedFlowCollection* thisObject = jsCast<JSDOMNamedFlowCollection*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    const HashEntry* entry = getStaticValueSlotEntryWithoutCaching<JSDOMNamedFlowCollection>(exec, propertyName);
    if (entry) {
        slot.setCustom(thisObject, entry->propertyGetter());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<DOMNamedFlowCollection*>(thisObject->impl())->length()) {
        slot.setCustomIndex(thisObject, index, indexGetter);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<DOMNamedFlowCollection*>(thisObject->impl()), propertyName)) {
        slot.setCustom(thisObject, thisObject->nameGetter);
        return true;
    }
    return getStaticValueSlot<JSDOMNamedFlowCollection, Base>(exec, &JSDOMNamedFlowCollectionTable, thisObject, propertyName, slot);
}

bool JSDOMNamedFlowCollection::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDOMNamedFlowCollection* thisObject = jsCast<JSDOMNamedFlowCollection*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    const HashEntry* entry = JSDOMNamedFlowCollectionTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(thisObject, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < static_cast<DOMNamedFlowCollection*>(thisObject->impl())->length()) {
        PropertySlot slot;
        slot.setCustomIndex(thisObject, index, indexGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), DontDelete | ReadOnly);
        return true;
    }
    if (canGetItemsForName(exec, static_cast<DOMNamedFlowCollection*>(thisObject->impl()), propertyName)) {
        PropertySlot slot;
        slot.setCustom(thisObject, nameGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), ReadOnly | DontDelete | DontEnum);
        return true;
    }
    return getStaticValueDescriptor<JSDOMNamedFlowCollection, Base>(exec, &JSDOMNamedFlowCollectionTable, thisObject, propertyName, descriptor);
}

bool JSDOMNamedFlowCollection::getOwnPropertySlotByIndex(JSCell* cell, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSDOMNamedFlowCollection* thisObject = jsCast<JSDOMNamedFlowCollection*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    if (index < static_cast<DOMNamedFlowCollection*>(thisObject->impl())->length()) {
        slot.setCustomIndex(thisObject, index, thisObject->indexGetter);
        return true;
    }
    PropertyName propertyName = Identifier::from(exec, index);
    if (canGetItemsForName(exec, static_cast<DOMNamedFlowCollection*>(thisObject->impl()), propertyName)) {
        slot.setCustom(thisObject, thisObject->nameGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

JSValue jsDOMNamedFlowCollectionLength(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMNamedFlowCollection* castedThis = jsCast<JSDOMNamedFlowCollection*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMNamedFlowCollection* impl = static_cast<DOMNamedFlowCollection*>(castedThis->impl());
    JSValue result = jsNumber(impl->length());
    return result;
}


void JSDOMNamedFlowCollection::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSDOMNamedFlowCollection* thisObject = jsCast<JSDOMNamedFlowCollection*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    for (unsigned i = 0; i < static_cast<DOMNamedFlowCollection*>(thisObject->impl())->length(); ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

EncodedJSValue JSC_HOST_CALL jsDOMNamedFlowCollectionPrototypeFunctionItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMNamedFlowCollection::s_info))
        return throwVMTypeError(exec);
    JSDOMNamedFlowCollection* castedThis = jsCast<JSDOMNamedFlowCollection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMNamedFlowCollection::s_info);
    DOMNamedFlowCollection* impl = static_cast<DOMNamedFlowCollection*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    unsigned index(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->item(index)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDOMNamedFlowCollectionPrototypeFunctionNamedItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMNamedFlowCollection::s_info))
        return throwVMTypeError(exec);
    JSDOMNamedFlowCollection* castedThis = jsCast<JSDOMNamedFlowCollection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMNamedFlowCollection::s_info);
    DOMNamedFlowCollection* impl = static_cast<DOMNamedFlowCollection*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    const String& name(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->namedItem(name)));
    return JSValue::encode(result);
}


JSValue JSDOMNamedFlowCollection::indexGetter(ExecState* exec, JSValue slotBase, unsigned index)
{
    JSDOMNamedFlowCollection* thisObj = jsCast<JSDOMNamedFlowCollection*>(asObject(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, &s_info);
    return toJS(exec, thisObj->globalObject(), static_cast<DOMNamedFlowCollection*>(thisObj->impl())->item(index));
}

bool JSDOMNamedFlowCollection::canGetItemsForName(ExecState*, DOMNamedFlowCollection* collection, PropertyName propertyName)
{
    return collection->hasNamedItem(propertyNameToAtomicString(propertyName));
}

JSValue JSDOMNamedFlowCollection::nameGetter(ExecState* exec, JSValue slotBase, PropertyName propertyName)
{
    JSDOMNamedFlowCollection* thisObj = jsCast<JSDOMNamedFlowCollection*>(asObject(slotBase));
    return toJS(exec, thisObj->globalObject(), static_cast<DOMNamedFlowCollection*>(thisObj->impl())->namedItem(propertyNameToAtomicString(propertyName)));
}

static inline bool isObservable(JSDOMNamedFlowCollection* jsDOMNamedFlowCollection)
{
    if (jsDOMNamedFlowCollection->hasCustomProperties())
        return true;
    return false;
}

bool JSDOMNamedFlowCollectionOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSDOMNamedFlowCollection* jsDOMNamedFlowCollection = jsCast<JSDOMNamedFlowCollection*>(handle.get().asCell());
    if (!isObservable(jsDOMNamedFlowCollection))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSDOMNamedFlowCollectionOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSDOMNamedFlowCollection* jsDOMNamedFlowCollection = jsCast<JSDOMNamedFlowCollection*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsDOMNamedFlowCollection->impl(), jsDOMNamedFlowCollection);
    jsDOMNamedFlowCollection->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DOMNamedFlowCollection* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDOMNamedFlowCollection>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to DOMNamedFlowCollection.
    COMPILE_ASSERT(!__is_polymorphic(DOMNamedFlowCollection), DOMNamedFlowCollection_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<DOMNamedFlowCollection>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSDOMNamedFlowCollection>(exec, globalObject, impl);
}

DOMNamedFlowCollection* toDOMNamedFlowCollection(JSC::JSValue value)
{
    return value.inherits(&JSDOMNamedFlowCollection::s_info) ? jsCast<JSDOMNamedFlowCollection*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(CSS_REGIONS)
