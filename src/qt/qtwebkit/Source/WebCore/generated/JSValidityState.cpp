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
#include "JSValidityState.h"

#include "ValidityState.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSValidityStateTableValues[] =
{
    { "valueMissing", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsValidityStateValueMissing), (intptr_t)0, NoIntrinsic },
    { "typeMismatch", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsValidityStateTypeMismatch), (intptr_t)0, NoIntrinsic },
    { "patternMismatch", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsValidityStatePatternMismatch), (intptr_t)0, NoIntrinsic },
    { "tooLong", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsValidityStateTooLong), (intptr_t)0, NoIntrinsic },
    { "rangeUnderflow", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsValidityStateRangeUnderflow), (intptr_t)0, NoIntrinsic },
    { "rangeOverflow", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsValidityStateRangeOverflow), (intptr_t)0, NoIntrinsic },
    { "stepMismatch", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsValidityStateStepMismatch), (intptr_t)0, NoIntrinsic },
    { "badInput", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsValidityStateBadInput), (intptr_t)0, NoIntrinsic },
    { "customError", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsValidityStateCustomError), (intptr_t)0, NoIntrinsic },
    { "valid", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsValidityStateValid), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSValidityStateTable = { 35, 31, JSValidityStateTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSValidityStatePrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSValidityStatePrototypeTable = { 1, 0, JSValidityStatePrototypeTableValues, 0 };
const ClassInfo JSValidityStatePrototype::s_info = { "ValidityStatePrototype", &Base::s_info, &JSValidityStatePrototypeTable, 0, CREATE_METHOD_TABLE(JSValidityStatePrototype) };

JSObject* JSValidityStatePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSValidityState>(exec, globalObject);
}

const ClassInfo JSValidityState::s_info = { "ValidityState", &Base::s_info, &JSValidityStateTable, 0 , CREATE_METHOD_TABLE(JSValidityState) };

JSValidityState::JSValidityState(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<ValidityState> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSValidityState::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSValidityState::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSValidityStatePrototype::create(exec->vm(), globalObject, JSValidityStatePrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSValidityState::destroy(JSC::JSCell* cell)
{
    JSValidityState* thisObject = static_cast<JSValidityState*>(cell);
    thisObject->JSValidityState::~JSValidityState();
}

JSValidityState::~JSValidityState()
{
    releaseImplIfNotNull();
}

bool JSValidityState::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSValidityState* thisObject = jsCast<JSValidityState*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSValidityState, Base>(exec, &JSValidityStateTable, thisObject, propertyName, slot);
}

bool JSValidityState::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSValidityState* thisObject = jsCast<JSValidityState*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSValidityState, Base>(exec, &JSValidityStateTable, thisObject, propertyName, descriptor);
}

JSValue jsValidityStateValueMissing(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSValidityState* castedThis = jsCast<JSValidityState*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ValidityState* impl = static_cast<ValidityState*>(castedThis->impl());
    JSValue result = jsBoolean(impl->valueMissing());
    return result;
}


JSValue jsValidityStateTypeMismatch(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSValidityState* castedThis = jsCast<JSValidityState*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ValidityState* impl = static_cast<ValidityState*>(castedThis->impl());
    JSValue result = jsBoolean(impl->typeMismatch());
    return result;
}


JSValue jsValidityStatePatternMismatch(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSValidityState* castedThis = jsCast<JSValidityState*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ValidityState* impl = static_cast<ValidityState*>(castedThis->impl());
    JSValue result = jsBoolean(impl->patternMismatch());
    return result;
}


JSValue jsValidityStateTooLong(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSValidityState* castedThis = jsCast<JSValidityState*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ValidityState* impl = static_cast<ValidityState*>(castedThis->impl());
    JSValue result = jsBoolean(impl->tooLong());
    return result;
}


JSValue jsValidityStateRangeUnderflow(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSValidityState* castedThis = jsCast<JSValidityState*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ValidityState* impl = static_cast<ValidityState*>(castedThis->impl());
    JSValue result = jsBoolean(impl->rangeUnderflow());
    return result;
}


JSValue jsValidityStateRangeOverflow(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSValidityState* castedThis = jsCast<JSValidityState*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ValidityState* impl = static_cast<ValidityState*>(castedThis->impl());
    JSValue result = jsBoolean(impl->rangeOverflow());
    return result;
}


JSValue jsValidityStateStepMismatch(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSValidityState* castedThis = jsCast<JSValidityState*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ValidityState* impl = static_cast<ValidityState*>(castedThis->impl());
    JSValue result = jsBoolean(impl->stepMismatch());
    return result;
}


JSValue jsValidityStateBadInput(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSValidityState* castedThis = jsCast<JSValidityState*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ValidityState* impl = static_cast<ValidityState*>(castedThis->impl());
    JSValue result = jsBoolean(impl->badInput());
    return result;
}


JSValue jsValidityStateCustomError(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSValidityState* castedThis = jsCast<JSValidityState*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ValidityState* impl = static_cast<ValidityState*>(castedThis->impl());
    JSValue result = jsBoolean(impl->customError());
    return result;
}


JSValue jsValidityStateValid(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSValidityState* castedThis = jsCast<JSValidityState*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ValidityState* impl = static_cast<ValidityState*>(castedThis->impl());
    JSValue result = jsBoolean(impl->valid());
    return result;
}


static inline bool isObservable(JSValidityState* jsValidityState)
{
    if (jsValidityState->hasCustomProperties())
        return true;
    return false;
}

bool JSValidityStateOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSValidityState* jsValidityState = jsCast<JSValidityState*>(handle.get().asCell());
    if (!isObservable(jsValidityState))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSValidityStateOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSValidityState* jsValidityState = jsCast<JSValidityState*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsValidityState->impl(), jsValidityState);
    jsValidityState->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, ValidityState* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSValidityState>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to ValidityState.
    COMPILE_ASSERT(!__is_polymorphic(ValidityState), ValidityState_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<ValidityState>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSValidityState>(exec, globalObject, impl);
}

ValidityState* toValidityState(JSC::JSValue value)
{
    return value.inherits(&JSValidityState::s_info) ? jsCast<JSValidityState*>(asObject(value))->impl() : 0;
}

}