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
#include "JSNodeIterator.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "JSNodeFilter.h"
#include "Node.h"
#include "NodeFilter.h"
#include "NodeIterator.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSNodeIteratorTableValues[] =
{
    { "root", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeIteratorRoot), (intptr_t)0, NoIntrinsic },
    { "whatToShow", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeIteratorWhatToShow), (intptr_t)0, NoIntrinsic },
    { "filter", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeIteratorFilter), (intptr_t)0, NoIntrinsic },
    { "expandEntityReferences", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeIteratorExpandEntityReferences), (intptr_t)0, NoIntrinsic },
    { "referenceNode", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeIteratorReferenceNode), (intptr_t)0, NoIntrinsic },
    { "pointerBeforeReferenceNode", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeIteratorPointerBeforeReferenceNode), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeIteratorConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSNodeIteratorTable = { 18, 15, JSNodeIteratorTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSNodeIteratorConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSNodeIteratorConstructorTable = { 1, 0, JSNodeIteratorConstructorTableValues, 0 };
const ClassInfo JSNodeIteratorConstructor::s_info = { "NodeIteratorConstructor", &Base::s_info, &JSNodeIteratorConstructorTable, 0, CREATE_METHOD_TABLE(JSNodeIteratorConstructor) };

JSNodeIteratorConstructor::JSNodeIteratorConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSNodeIteratorConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSNodeIteratorPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSNodeIteratorConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNodeIteratorConstructor, JSDOMWrapper>(exec, &JSNodeIteratorConstructorTable, jsCast<JSNodeIteratorConstructor*>(cell), propertyName, slot);
}

bool JSNodeIteratorConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSNodeIteratorConstructor, JSDOMWrapper>(exec, &JSNodeIteratorConstructorTable, jsCast<JSNodeIteratorConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSNodeIteratorPrototypeTableValues[] =
{
    { "nextNode", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodeIteratorPrototypeFunctionNextNode), (intptr_t)0, NoIntrinsic },
    { "previousNode", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodeIteratorPrototypeFunctionPreviousNode), (intptr_t)0, NoIntrinsic },
    { "detach", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodeIteratorPrototypeFunctionDetach), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSNodeIteratorPrototypeTable = { 8, 7, JSNodeIteratorPrototypeTableValues, 0 };
const ClassInfo JSNodeIteratorPrototype::s_info = { "NodeIteratorPrototype", &Base::s_info, &JSNodeIteratorPrototypeTable, 0, CREATE_METHOD_TABLE(JSNodeIteratorPrototype) };

JSObject* JSNodeIteratorPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSNodeIterator>(exec, globalObject);
}

bool JSNodeIteratorPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSNodeIteratorPrototype* thisObject = jsCast<JSNodeIteratorPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSNodeIteratorPrototypeTable, thisObject, propertyName, slot);
}

bool JSNodeIteratorPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSNodeIteratorPrototype* thisObject = jsCast<JSNodeIteratorPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSNodeIteratorPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSNodeIterator::s_info = { "NodeIterator", &Base::s_info, &JSNodeIteratorTable, 0 , CREATE_METHOD_TABLE(JSNodeIterator) };

JSNodeIterator::JSNodeIterator(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<NodeIterator> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSNodeIterator::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSNodeIterator::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSNodeIteratorPrototype::create(exec->vm(), globalObject, JSNodeIteratorPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSNodeIterator::destroy(JSC::JSCell* cell)
{
    JSNodeIterator* thisObject = static_cast<JSNodeIterator*>(cell);
    thisObject->JSNodeIterator::~JSNodeIterator();
}

JSNodeIterator::~JSNodeIterator()
{
    releaseImplIfNotNull();
}

bool JSNodeIterator::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSNodeIterator* thisObject = jsCast<JSNodeIterator*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSNodeIterator, Base>(exec, &JSNodeIteratorTable, thisObject, propertyName, slot);
}

bool JSNodeIterator::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSNodeIterator* thisObject = jsCast<JSNodeIterator*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSNodeIterator, Base>(exec, &JSNodeIteratorTable, thisObject, propertyName, descriptor);
}

JSValue jsNodeIteratorRoot(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNodeIterator* castedThis = jsCast<JSNodeIterator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    NodeIterator* impl = static_cast<NodeIterator*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->root()));
    return result;
}


JSValue jsNodeIteratorWhatToShow(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNodeIterator* castedThis = jsCast<JSNodeIterator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    NodeIterator* impl = static_cast<NodeIterator*>(castedThis->impl());
    JSValue result = jsNumber(impl->whatToShow());
    return result;
}


JSValue jsNodeIteratorFilter(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNodeIterator* castedThis = jsCast<JSNodeIterator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    NodeIterator* impl = static_cast<NodeIterator*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->filter()));
    return result;
}


JSValue jsNodeIteratorExpandEntityReferences(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNodeIterator* castedThis = jsCast<JSNodeIterator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    NodeIterator* impl = static_cast<NodeIterator*>(castedThis->impl());
    JSValue result = jsBoolean(impl->expandEntityReferences());
    return result;
}


JSValue jsNodeIteratorReferenceNode(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNodeIterator* castedThis = jsCast<JSNodeIterator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    NodeIterator* impl = static_cast<NodeIterator*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->referenceNode()));
    return result;
}


JSValue jsNodeIteratorPointerBeforeReferenceNode(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNodeIterator* castedThis = jsCast<JSNodeIterator*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    NodeIterator* impl = static_cast<NodeIterator*>(castedThis->impl());
    JSValue result = jsBoolean(impl->pointerBeforeReferenceNode());
    return result;
}


JSValue jsNodeIteratorConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNodeIterator* domObject = jsCast<JSNodeIterator*>(asObject(slotBase));
    return JSNodeIterator::getConstructor(exec, domObject->globalObject());
}

JSValue JSNodeIterator::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSNodeIteratorConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsNodeIteratorPrototypeFunctionNextNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNodeIterator::s_info))
        return throwVMTypeError(exec);
    JSNodeIterator* castedThis = jsCast<JSNodeIterator*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNodeIterator::s_info);
    NodeIterator* impl = static_cast<NodeIterator*>(castedThis->impl());
    ExceptionCode ec = 0;

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->nextNode(exec, ec)));
    setDOMException(exec, ec);
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodeIteratorPrototypeFunctionPreviousNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNodeIterator::s_info))
        return throwVMTypeError(exec);
    JSNodeIterator* castedThis = jsCast<JSNodeIterator*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNodeIterator::s_info);
    NodeIterator* impl = static_cast<NodeIterator*>(castedThis->impl());
    ExceptionCode ec = 0;

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->previousNode(exec, ec)));
    setDOMException(exec, ec);
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodeIteratorPrototypeFunctionDetach(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNodeIterator::s_info))
        return throwVMTypeError(exec);
    JSNodeIterator* castedThis = jsCast<JSNodeIterator*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNodeIterator::s_info);
    NodeIterator* impl = static_cast<NodeIterator*>(castedThis->impl());
    impl->detach();
    return JSValue::encode(jsUndefined());
}

static inline bool isObservable(JSNodeIterator* jsNodeIterator)
{
    if (jsNodeIterator->hasCustomProperties())
        return true;
    return false;
}

bool JSNodeIteratorOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSNodeIterator* jsNodeIterator = jsCast<JSNodeIterator*>(handle.get().asCell());
    if (!isObservable(jsNodeIterator))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSNodeIteratorOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSNodeIterator* jsNodeIterator = jsCast<JSNodeIterator*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsNodeIterator->impl(), jsNodeIterator);
    jsNodeIterator->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, NodeIterator* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSNodeIterator>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to NodeIterator.
    COMPILE_ASSERT(!__is_polymorphic(NodeIterator), NodeIterator_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<NodeIterator>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSNodeIterator>(exec, globalObject, impl);
}

NodeIterator* toNodeIterator(JSC::JSValue value)
{
    return value.inherits(&JSNodeIterator::s_info) ? jsCast<JSNodeIterator*>(asObject(value))->impl() : 0;
}

}
