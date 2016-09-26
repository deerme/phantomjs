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

#if ENABLE(JAVASCRIPT_DEBUGGER)

#include "JSScriptProfileNode.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSScriptProfileNode.h"
#include "KURL.h"
#include "ScriptProfileNode.h"
#include <runtime/Error.h>
#include <runtime/JSArray.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSScriptProfileNodeTableValues[] =
{
    { "functionName", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeFunctionName), (intptr_t)0, NoIntrinsic },
    { "url", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeUrl), (intptr_t)0, NoIntrinsic },
    { "lineNumber", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeLineNumber), (intptr_t)0, NoIntrinsic },
    { "totalTime", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeTotalTime), (intptr_t)0, NoIntrinsic },
    { "selfTime", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeSelfTime), (intptr_t)0, NoIntrinsic },
    { "numberOfCalls", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeNumberOfCalls), (intptr_t)0, NoIntrinsic },
    { "visible", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeVisible), (intptr_t)0, NoIntrinsic },
    { "callUID", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsScriptProfileNodeCallUID), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSScriptProfileNodeTable = { 18, 15, JSScriptProfileNodeTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSScriptProfileNodePrototypeTableValues[] =
{
    { "children", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsScriptProfileNodePrototypeFunctionChildren), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSScriptProfileNodePrototypeTable = { 2, 1, JSScriptProfileNodePrototypeTableValues, 0 };
const ClassInfo JSScriptProfileNodePrototype::s_info = { "ScriptProfileNodePrototype", &Base::s_info, &JSScriptProfileNodePrototypeTable, 0, CREATE_METHOD_TABLE(JSScriptProfileNodePrototype) };

JSObject* JSScriptProfileNodePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSScriptProfileNode>(exec, globalObject);
}

bool JSScriptProfileNodePrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSScriptProfileNodePrototype* thisObject = jsCast<JSScriptProfileNodePrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSScriptProfileNodePrototypeTable, thisObject, propertyName, slot);
}

bool JSScriptProfileNodePrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSScriptProfileNodePrototype* thisObject = jsCast<JSScriptProfileNodePrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSScriptProfileNodePrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSScriptProfileNode::s_info = { "ScriptProfileNode", &Base::s_info, &JSScriptProfileNodeTable, 0 , CREATE_METHOD_TABLE(JSScriptProfileNode) };

JSScriptProfileNode::JSScriptProfileNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<ScriptProfileNode> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSScriptProfileNode::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSScriptProfileNode::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSScriptProfileNodePrototype::create(exec->vm(), globalObject, JSScriptProfileNodePrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSScriptProfileNode::destroy(JSC::JSCell* cell)
{
    JSScriptProfileNode* thisObject = static_cast<JSScriptProfileNode*>(cell);
    thisObject->JSScriptProfileNode::~JSScriptProfileNode();
}

JSScriptProfileNode::~JSScriptProfileNode()
{
    releaseImplIfNotNull();
}

bool JSScriptProfileNode::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSScriptProfileNode* thisObject = jsCast<JSScriptProfileNode*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSScriptProfileNode, Base>(exec, &JSScriptProfileNodeTable, thisObject, propertyName, slot);
}

bool JSScriptProfileNode::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSScriptProfileNode* thisObject = jsCast<JSScriptProfileNode*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSScriptProfileNode, Base>(exec, &JSScriptProfileNodeTable, thisObject, propertyName, descriptor);
}

JSValue jsScriptProfileNodeFunctionName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSScriptProfileNode* castedThis = jsCast<JSScriptProfileNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ScriptProfileNode* impl = static_cast<ScriptProfileNode*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->functionName());
    return result;
}


JSValue jsScriptProfileNodeUrl(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSScriptProfileNode* castedThis = jsCast<JSScriptProfileNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ScriptProfileNode* impl = static_cast<ScriptProfileNode*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->url());
    return result;
}


JSValue jsScriptProfileNodeLineNumber(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSScriptProfileNode* castedThis = jsCast<JSScriptProfileNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ScriptProfileNode* impl = static_cast<ScriptProfileNode*>(castedThis->impl());
    JSValue result = jsNumber(impl->lineNumber());
    return result;
}


JSValue jsScriptProfileNodeTotalTime(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSScriptProfileNode* castedThis = jsCast<JSScriptProfileNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ScriptProfileNode* impl = static_cast<ScriptProfileNode*>(castedThis->impl());
    JSValue result = jsNumber(impl->totalTime());
    return result;
}


JSValue jsScriptProfileNodeSelfTime(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSScriptProfileNode* castedThis = jsCast<JSScriptProfileNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ScriptProfileNode* impl = static_cast<ScriptProfileNode*>(castedThis->impl());
    JSValue result = jsNumber(impl->selfTime());
    return result;
}


JSValue jsScriptProfileNodeNumberOfCalls(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSScriptProfileNode* castedThis = jsCast<JSScriptProfileNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ScriptProfileNode* impl = static_cast<ScriptProfileNode*>(castedThis->impl());
    JSValue result = jsNumber(impl->numberOfCalls());
    return result;
}


JSValue jsScriptProfileNodeVisible(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSScriptProfileNode* castedThis = jsCast<JSScriptProfileNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ScriptProfileNode* impl = static_cast<ScriptProfileNode*>(castedThis->impl());
    JSValue result = jsBoolean(impl->visible());
    return result;
}


JSValue jsScriptProfileNodeCallUID(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSScriptProfileNode* castedThis = jsCast<JSScriptProfileNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ScriptProfileNode* impl = static_cast<ScriptProfileNode*>(castedThis->impl());
    JSValue result = jsNumber(impl->callUID());
    return result;
}


EncodedJSValue JSC_HOST_CALL jsScriptProfileNodePrototypeFunctionChildren(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSScriptProfileNode::s_info))
        return throwVMTypeError(exec);
    JSScriptProfileNode* castedThis = jsCast<JSScriptProfileNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSScriptProfileNode::s_info);
    ScriptProfileNode* impl = static_cast<ScriptProfileNode*>(castedThis->impl());

    JSC::JSValue result = jsArray(exec, castedThis->globalObject(), impl->children());
    return JSValue::encode(result);
}

static inline bool isObservable(JSScriptProfileNode* jsScriptProfileNode)
{
    if (jsScriptProfileNode->hasCustomProperties())
        return true;
    return false;
}

bool JSScriptProfileNodeOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSScriptProfileNode* jsScriptProfileNode = jsCast<JSScriptProfileNode*>(handle.get().asCell());
    if (!isObservable(jsScriptProfileNode))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSScriptProfileNodeOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSScriptProfileNode* jsScriptProfileNode = jsCast<JSScriptProfileNode*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsScriptProfileNode->impl(), jsScriptProfileNode);
    jsScriptProfileNode->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, ScriptProfileNode* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSScriptProfileNode>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to ScriptProfileNode.
    COMPILE_ASSERT(!__is_polymorphic(ScriptProfileNode), ScriptProfileNode_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<ScriptProfileNode>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSScriptProfileNode>(exec, globalObject, impl);
}

ScriptProfileNode* toScriptProfileNode(JSC::JSValue value)
{
    return value.inherits(&JSScriptProfileNode::s_info) ? jsCast<JSScriptProfileNode*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(JAVASCRIPT_DEBUGGER)
