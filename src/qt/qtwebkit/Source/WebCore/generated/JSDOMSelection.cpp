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
#include "JSDOMSelection.h"

#include "DOMSelection.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "JSRange.h"
#include "KURL.h"
#include "Node.h"
#include "Range.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSDOMSelectionTableValues[] =
{
    { "anchorNode", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMSelectionAnchorNode), (intptr_t)0, NoIntrinsic },
    { "anchorOffset", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMSelectionAnchorOffset), (intptr_t)0, NoIntrinsic },
    { "focusNode", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMSelectionFocusNode), (intptr_t)0, NoIntrinsic },
    { "focusOffset", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMSelectionFocusOffset), (intptr_t)0, NoIntrinsic },
    { "isCollapsed", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMSelectionIsCollapsed), (intptr_t)0, NoIntrinsic },
    { "rangeCount", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMSelectionRangeCount), (intptr_t)0, NoIntrinsic },
    { "baseNode", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMSelectionBaseNode), (intptr_t)0, NoIntrinsic },
    { "baseOffset", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMSelectionBaseOffset), (intptr_t)0, NoIntrinsic },
    { "extentNode", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMSelectionExtentNode), (intptr_t)0, NoIntrinsic },
    { "extentOffset", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMSelectionExtentOffset), (intptr_t)0, NoIntrinsic },
    { "type", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMSelectionType), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMSelectionConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMSelectionTable = { 35, 31, JSDOMSelectionTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSDOMSelectionConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMSelectionConstructorTable = { 1, 0, JSDOMSelectionConstructorTableValues, 0 };
const ClassInfo JSDOMSelectionConstructor::s_info = { "SelectionConstructor", &Base::s_info, &JSDOMSelectionConstructorTable, 0, CREATE_METHOD_TABLE(JSDOMSelectionConstructor) };

JSDOMSelectionConstructor::JSDOMSelectionConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSDOMSelectionConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSDOMSelectionPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSDOMSelectionConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMSelectionConstructor, JSDOMWrapper>(exec, &JSDOMSelectionConstructorTable, jsCast<JSDOMSelectionConstructor*>(cell), propertyName, slot);
}

bool JSDOMSelectionConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDOMSelectionConstructor, JSDOMWrapper>(exec, &JSDOMSelectionConstructorTable, jsCast<JSDOMSelectionConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSDOMSelectionPrototypeTableValues[] =
{
    { "collapse", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMSelectionPrototypeFunctionCollapse), (intptr_t)0, NoIntrinsic },
    { "collapseToEnd", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMSelectionPrototypeFunctionCollapseToEnd), (intptr_t)0, NoIntrinsic },
    { "collapseToStart", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMSelectionPrototypeFunctionCollapseToStart), (intptr_t)0, NoIntrinsic },
    { "deleteFromDocument", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMSelectionPrototypeFunctionDeleteFromDocument), (intptr_t)0, NoIntrinsic },
    { "containsNode", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMSelectionPrototypeFunctionContainsNode), (intptr_t)0, NoIntrinsic },
    { "selectAllChildren", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMSelectionPrototypeFunctionSelectAllChildren), (intptr_t)0, NoIntrinsic },
    { "extend", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMSelectionPrototypeFunctionExtend), (intptr_t)0, NoIntrinsic },
    { "getRangeAt", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMSelectionPrototypeFunctionGetRangeAt), (intptr_t)0, NoIntrinsic },
    { "removeAllRanges", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMSelectionPrototypeFunctionRemoveAllRanges), (intptr_t)0, NoIntrinsic },
    { "addRange", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMSelectionPrototypeFunctionAddRange), (intptr_t)0, NoIntrinsic },
    { "toString", DontDelete | DontEnum | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMSelectionPrototypeFunctionToString), (intptr_t)0, NoIntrinsic },
    { "modify", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMSelectionPrototypeFunctionModify), (intptr_t)0, NoIntrinsic },
    { "setBaseAndExtent", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMSelectionPrototypeFunctionSetBaseAndExtent), (intptr_t)0, NoIntrinsic },
    { "setPosition", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMSelectionPrototypeFunctionSetPosition), (intptr_t)0, NoIntrinsic },
    { "empty", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMSelectionPrototypeFunctionEmpty), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMSelectionPrototypeTable = { 34, 31, JSDOMSelectionPrototypeTableValues, 0 };
const ClassInfo JSDOMSelectionPrototype::s_info = { "SelectionPrototype", &Base::s_info, &JSDOMSelectionPrototypeTable, 0, CREATE_METHOD_TABLE(JSDOMSelectionPrototype) };

JSObject* JSDOMSelectionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMSelection>(exec, globalObject);
}

bool JSDOMSelectionPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDOMSelectionPrototype* thisObject = jsCast<JSDOMSelectionPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSDOMSelectionPrototypeTable, thisObject, propertyName, slot);
}

bool JSDOMSelectionPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDOMSelectionPrototype* thisObject = jsCast<JSDOMSelectionPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSDOMSelectionPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSDOMSelection::s_info = { "Selection", &Base::s_info, &JSDOMSelectionTable, 0 , CREATE_METHOD_TABLE(JSDOMSelection) };

JSDOMSelection::JSDOMSelection(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMSelection> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSDOMSelection::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSDOMSelection::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSDOMSelectionPrototype::create(exec->vm(), globalObject, JSDOMSelectionPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSDOMSelection::destroy(JSC::JSCell* cell)
{
    JSDOMSelection* thisObject = static_cast<JSDOMSelection*>(cell);
    thisObject->JSDOMSelection::~JSDOMSelection();
}

JSDOMSelection::~JSDOMSelection()
{
    releaseImplIfNotNull();
}

bool JSDOMSelection::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDOMSelection* thisObject = jsCast<JSDOMSelection*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSDOMSelection, Base>(exec, &JSDOMSelectionTable, thisObject, propertyName, slot);
}

bool JSDOMSelection::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDOMSelection* thisObject = jsCast<JSDOMSelection*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSDOMSelection, Base>(exec, &JSDOMSelectionTable, thisObject, propertyName, descriptor);
}

JSValue jsDOMSelectionAnchorNode(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->anchorNode()));
    return result;
}


JSValue jsDOMSelectionAnchorOffset(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    JSValue result = jsNumber(impl->anchorOffset());
    return result;
}


JSValue jsDOMSelectionFocusNode(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->focusNode()));
    return result;
}


JSValue jsDOMSelectionFocusOffset(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    JSValue result = jsNumber(impl->focusOffset());
    return result;
}


JSValue jsDOMSelectionIsCollapsed(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    JSValue result = jsBoolean(impl->isCollapsed());
    return result;
}


JSValue jsDOMSelectionRangeCount(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    JSValue result = jsNumber(impl->rangeCount());
    return result;
}


JSValue jsDOMSelectionBaseNode(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->baseNode()));
    return result;
}


JSValue jsDOMSelectionBaseOffset(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    JSValue result = jsNumber(impl->baseOffset());
    return result;
}


JSValue jsDOMSelectionExtentNode(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->extentNode()));
    return result;
}


JSValue jsDOMSelectionExtentOffset(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    JSValue result = jsNumber(impl->extentOffset());
    return result;
}


JSValue jsDOMSelectionType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    JSValue result = jsStringWithCache(exec, impl->type());
    return result;
}


JSValue jsDOMSelectionConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMSelection* domObject = jsCast<JSDOMSelection*>(asObject(slotBase));
    return JSDOMSelection::getConstructor(exec, domObject->globalObject());
}

JSValue JSDOMSelection::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDOMSelectionConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionCollapse(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMSelection::s_info))
        return throwVMTypeError(exec);
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMSelection::s_info);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    ExceptionCode ec = 0;
    Node* node(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int index(toInt32(exec, exec->argument(1), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->collapse(node, index, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionCollapseToEnd(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMSelection::s_info))
        return throwVMTypeError(exec);
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMSelection::s_info);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    ExceptionCode ec = 0;
    impl->collapseToEnd(ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionCollapseToStart(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMSelection::s_info))
        return throwVMTypeError(exec);
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMSelection::s_info);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    ExceptionCode ec = 0;
    impl->collapseToStart(ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionDeleteFromDocument(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMSelection::s_info))
        return throwVMTypeError(exec);
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMSelection::s_info);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    impl->deleteFromDocument();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionContainsNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMSelection::s_info))
        return throwVMTypeError(exec);
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMSelection::s_info);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    Node* node(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    bool allowPartial(exec->argument(1).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->containsNode(node, allowPartial));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionSelectAllChildren(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMSelection::s_info))
        return throwVMTypeError(exec);
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMSelection::s_info);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    ExceptionCode ec = 0;
    Node* node(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->selectAllChildren(node, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionExtend(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMSelection::s_info))
        return throwVMTypeError(exec);
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMSelection::s_info);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    ExceptionCode ec = 0;
    Node* node(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int offset(toInt32(exec, exec->argument(1), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->extend(node, offset, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionGetRangeAt(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMSelection::s_info))
        return throwVMTypeError(exec);
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMSelection::s_info);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    ExceptionCode ec = 0;
    int index(toInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->getRangeAt(index, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionRemoveAllRanges(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMSelection::s_info))
        return throwVMTypeError(exec);
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMSelection::s_info);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    impl->removeAllRanges();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionAddRange(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMSelection::s_info))
        return throwVMTypeError(exec);
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMSelection::s_info);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    Range* range(toRange(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->addRange(range);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMSelection::s_info))
        return throwVMTypeError(exec);
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMSelection::s_info);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());

    JSC::JSValue result = jsStringWithCache(exec, impl->toString());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionModify(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMSelection::s_info))
        return throwVMTypeError(exec);
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMSelection::s_info);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    const String& alter(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& direction(exec->argument(1).isEmpty() ? String() : exec->argument(1).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& granularity(exec->argument(2).isEmpty() ? String() : exec->argument(2).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->modify(alter, direction, granularity);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionSetBaseAndExtent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMSelection::s_info))
        return throwVMTypeError(exec);
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMSelection::s_info);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    ExceptionCode ec = 0;
    Node* baseNode(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int baseOffset(toInt32(exec, exec->argument(1), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    Node* extentNode(toNode(exec->argument(2)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int extentOffset(toInt32(exec, exec->argument(3), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->setBaseAndExtent(baseNode, baseOffset, extentNode, extentOffset, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionSetPosition(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMSelection::s_info))
        return throwVMTypeError(exec);
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMSelection::s_info);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    ExceptionCode ec = 0;
    Node* node(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int offset(toInt32(exec, exec->argument(1), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl->setPosition(node, offset, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsDOMSelectionPrototypeFunctionEmpty(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMSelection::s_info))
        return throwVMTypeError(exec);
    JSDOMSelection* castedThis = jsCast<JSDOMSelection*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMSelection::s_info);
    DOMSelection* impl = static_cast<DOMSelection*>(castedThis->impl());
    impl->empty();
    return JSValue::encode(jsUndefined());
}

static inline bool isObservable(JSDOMSelection* jsDOMSelection)
{
    if (jsDOMSelection->hasCustomProperties())
        return true;
    return false;
}

bool JSDOMSelectionOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSDOMSelection* jsDOMSelection = jsCast<JSDOMSelection*>(handle.get().asCell());
    if (!isObservable(jsDOMSelection))
        return false;
    Frame* root = jsDOMSelection->impl()->frame();
    if (!root)
        return false;
    return visitor.containsOpaqueRoot(root);
}

void JSDOMSelectionOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSDOMSelection* jsDOMSelection = jsCast<JSDOMSelection*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsDOMSelection->impl(), jsDOMSelection);
    jsDOMSelection->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7DOMSelection@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore12DOMSelectionE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DOMSelection* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDOMSelection>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7DOMSelection@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore12DOMSelectionE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails DOMSelection does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(DOMSelection), DOMSelection_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // DOMSelection has subclasses. If DOMSelection has subclasses that get passed
    // to toJS() we currently require DOMSelection you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<DOMSelection>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSDOMSelection>(exec, globalObject, impl);
}

DOMSelection* toDOMSelection(JSC::JSValue value)
{
    return value.inherits(&JSDOMSelection::s_info) ? jsCast<JSDOMSelection*>(asObject(value))->impl() : 0;
}

}
