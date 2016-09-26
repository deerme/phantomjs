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
#include "JSNode.h"

#include "Document.h"
#include "Element.h"
#include "Event.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDocument.h"
#include "JSElement.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "JSNode.h"
#include "JSNodeList.h"
#include "KURL.h"
#include "NameNodeList.h"
#include "Node.h"
#include "NodeList.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSNodeTableValues[] =
{
    { "nodeName", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeNodeName), (intptr_t)0, NoIntrinsic },
    { "nodeValue", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeNodeValue), (intptr_t)setJSNodeNodeValue, NoIntrinsic },
    { "nodeType", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeNodeType), (intptr_t)0, NoIntrinsic },
    { "parentNode", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeParentNode), (intptr_t)0, NoIntrinsic },
    { "childNodes", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeChildNodes), (intptr_t)0, NoIntrinsic },
    { "firstChild", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFirstChild), (intptr_t)0, NoIntrinsic },
    { "lastChild", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeLastChild), (intptr_t)0, NoIntrinsic },
    { "previousSibling", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodePreviousSibling), (intptr_t)0, NoIntrinsic },
    { "nextSibling", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeNextSibling), (intptr_t)0, NoIntrinsic },
    { "ownerDocument", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeOwnerDocument), (intptr_t)0, NoIntrinsic },
    { "namespaceURI", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeNamespaceURI), (intptr_t)0, NoIntrinsic },
    { "prefix", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodePrefix), (intptr_t)setJSNodePrefix, NoIntrinsic },
    { "localName", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeLocalName), (intptr_t)0, NoIntrinsic },
    { "baseURI", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeBaseURI), (intptr_t)0, NoIntrinsic },
    { "textContent", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeTextContent), (intptr_t)setJSNodeTextContent, NoIntrinsic },
    { "parentElement", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeParentElement), (intptr_t)0, NoIntrinsic },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSNodeTable = { 68, 63, JSNodeTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSNodeConstructorTableValues[] =
{
    { "ELEMENT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeELEMENT_NODE), (intptr_t)0, NoIntrinsic },
    { "ATTRIBUTE_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeATTRIBUTE_NODE), (intptr_t)0, NoIntrinsic },
    { "TEXT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeTEXT_NODE), (intptr_t)0, NoIntrinsic },
    { "CDATA_SECTION_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeCDATA_SECTION_NODE), (intptr_t)0, NoIntrinsic },
    { "ENTITY_REFERENCE_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeENTITY_REFERENCE_NODE), (intptr_t)0, NoIntrinsic },
    { "ENTITY_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeENTITY_NODE), (intptr_t)0, NoIntrinsic },
    { "PROCESSING_INSTRUCTION_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodePROCESSING_INSTRUCTION_NODE), (intptr_t)0, NoIntrinsic },
    { "COMMENT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeCOMMENT_NODE), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_NODE), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_TYPE_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_TYPE_NODE), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_FRAGMENT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_FRAGMENT_NODE), (intptr_t)0, NoIntrinsic },
    { "NOTATION_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeNOTATION_NODE), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_POSITION_DISCONNECTED", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_DISCONNECTED), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_POSITION_PRECEDING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_PRECEDING), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_POSITION_FOLLOWING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_FOLLOWING), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_POSITION_CONTAINS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_CONTAINS), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_POSITION_CONTAINED_BY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_CONTAINED_BY), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSNodeConstructorTable = { 67, 63, JSNodeConstructorTableValues, 0 };

COMPILE_ASSERT(1 == Node::ELEMENT_NODE, NodeEnumELEMENT_NODEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == Node::ATTRIBUTE_NODE, NodeEnumATTRIBUTE_NODEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == Node::TEXT_NODE, NodeEnumTEXT_NODEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(4 == Node::CDATA_SECTION_NODE, NodeEnumCDATA_SECTION_NODEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(5 == Node::ENTITY_REFERENCE_NODE, NodeEnumENTITY_REFERENCE_NODEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(6 == Node::ENTITY_NODE, NodeEnumENTITY_NODEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(7 == Node::PROCESSING_INSTRUCTION_NODE, NodeEnumPROCESSING_INSTRUCTION_NODEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(8 == Node::COMMENT_NODE, NodeEnumCOMMENT_NODEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(9 == Node::DOCUMENT_NODE, NodeEnumDOCUMENT_NODEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(10 == Node::DOCUMENT_TYPE_NODE, NodeEnumDOCUMENT_TYPE_NODEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(11 == Node::DOCUMENT_FRAGMENT_NODE, NodeEnumDOCUMENT_FRAGMENT_NODEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(12 == Node::NOTATION_NODE, NodeEnumNOTATION_NODEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x01 == Node::DOCUMENT_POSITION_DISCONNECTED, NodeEnumDOCUMENT_POSITION_DISCONNECTEDIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x02 == Node::DOCUMENT_POSITION_PRECEDING, NodeEnumDOCUMENT_POSITION_PRECEDINGIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x04 == Node::DOCUMENT_POSITION_FOLLOWING, NodeEnumDOCUMENT_POSITION_FOLLOWINGIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x08 == Node::DOCUMENT_POSITION_CONTAINS, NodeEnumDOCUMENT_POSITION_CONTAINSIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x10 == Node::DOCUMENT_POSITION_CONTAINED_BY, NodeEnumDOCUMENT_POSITION_CONTAINED_BYIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x20 == Node::DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC, NodeEnumDOCUMENT_POSITION_IMPLEMENTATION_SPECIFICIsWrongUseDoNotCheckConstants);

const ClassInfo JSNodeConstructor::s_info = { "NodeConstructor", &Base::s_info, &JSNodeConstructorTable, 0, CREATE_METHOD_TABLE(JSNodeConstructor) };

JSNodeConstructor::JSNodeConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSNodeConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSNodePrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSNodeConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNodeConstructor, JSDOMWrapper>(exec, &JSNodeConstructorTable, jsCast<JSNodeConstructor*>(cell), propertyName, slot);
}

bool JSNodeConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSNodeConstructor, JSDOMWrapper>(exec, &JSNodeConstructorTable, jsCast<JSNodeConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSNodePrototypeTableValues[] =
{
    { "ELEMENT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeELEMENT_NODE), (intptr_t)0, NoIntrinsic },
    { "ATTRIBUTE_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeATTRIBUTE_NODE), (intptr_t)0, NoIntrinsic },
    { "TEXT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeTEXT_NODE), (intptr_t)0, NoIntrinsic },
    { "CDATA_SECTION_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeCDATA_SECTION_NODE), (intptr_t)0, NoIntrinsic },
    { "ENTITY_REFERENCE_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeENTITY_REFERENCE_NODE), (intptr_t)0, NoIntrinsic },
    { "ENTITY_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeENTITY_NODE), (intptr_t)0, NoIntrinsic },
    { "PROCESSING_INSTRUCTION_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodePROCESSING_INSTRUCTION_NODE), (intptr_t)0, NoIntrinsic },
    { "COMMENT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeCOMMENT_NODE), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_NODE), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_TYPE_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_TYPE_NODE), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_FRAGMENT_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_FRAGMENT_NODE), (intptr_t)0, NoIntrinsic },
    { "NOTATION_NODE", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeNOTATION_NODE), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_POSITION_DISCONNECTED", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_DISCONNECTED), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_POSITION_PRECEDING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_PRECEDING), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_POSITION_FOLLOWING", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_FOLLOWING), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_POSITION_CONTAINS", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_CONTAINS), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_POSITION_CONTAINED_BY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_CONTAINED_BY), (intptr_t)0, NoIntrinsic },
    { "DOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeDOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC), (intptr_t)0, NoIntrinsic },
    { "insertBefore", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionInsertBefore), (intptr_t)2, NoIntrinsic },
    { "replaceChild", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionReplaceChild), (intptr_t)2, NoIntrinsic },
    { "removeChild", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionRemoveChild), (intptr_t)1, NoIntrinsic },
    { "appendChild", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionAppendChild), (intptr_t)1, NoIntrinsic },
    { "hasChildNodes", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionHasChildNodes), (intptr_t)0, NoIntrinsic },
    { "cloneNode", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionCloneNode), (intptr_t)0, NoIntrinsic },
    { "normalize", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionNormalize), (intptr_t)0, NoIntrinsic },
    { "isSupported", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionIsSupported), (intptr_t)0, NoIntrinsic },
    { "isSameNode", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionIsSameNode), (intptr_t)0, NoIntrinsic },
    { "isEqualNode", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionIsEqualNode), (intptr_t)0, NoIntrinsic },
    { "lookupPrefix", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionLookupPrefix), (intptr_t)0, NoIntrinsic },
    { "isDefaultNamespace", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionIsDefaultNamespace), (intptr_t)0, NoIntrinsic },
    { "lookupNamespaceURI", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionLookupNamespaceURI), (intptr_t)0, NoIntrinsic },
    { "compareDocumentPosition", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionCompareDocumentPosition), (intptr_t)0, NoIntrinsic },
    { "contains", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionContains), (intptr_t)0, NoIntrinsic },
    { "addEventListener", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionAddEventListener), (intptr_t)2, NoIntrinsic },
    { "removeEventListener", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionRemoveEventListener), (intptr_t)2, NoIntrinsic },
    { "dispatchEvent", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsNodePrototypeFunctionDispatchEvent), (intptr_t)1, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSNodePrototypeTable = { 134, 127, JSNodePrototypeTableValues, 0 };
const ClassInfo JSNodePrototype::s_info = { "NodePrototype", &Base::s_info, &JSNodePrototypeTable, 0, CREATE_METHOD_TABLE(JSNodePrototype) };

JSObject* JSNodePrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSNode>(exec, globalObject);
}

bool JSNodePrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSNodePrototype* thisObject = jsCast<JSNodePrototype*>(cell);
    return getStaticPropertySlot<JSNodePrototype, JSObject>(exec, &JSNodePrototypeTable, thisObject, propertyName, slot);
}

bool JSNodePrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSNodePrototype* thisObject = jsCast<JSNodePrototype*>(object);
    return getStaticPropertyDescriptor<JSNodePrototype, JSObject>(exec, &JSNodePrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSNode::s_info = { "Node", &Base::s_info, &JSNodeTable, 0 , CREATE_METHOD_TABLE(JSNode) };

JSNode::JSNode(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<Node> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSNode::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSNode::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSNodePrototype::create(exec->vm(), globalObject, JSNodePrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSNode::destroy(JSC::JSCell* cell)
{
    JSNode* thisObject = static_cast<JSNode*>(cell);
    thisObject->JSNode::~JSNode();
}

JSNode::~JSNode()
{
    releaseImplIfNotNull();
}

JSValue jsNodeNodeName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* castedThis = jsCast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, impl->nodeName());
    return result;
}


JSValue jsNodeNodeValue(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* castedThis = jsCast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, impl->nodeValue());
    return result;
}


JSValue jsNodeNodeType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* castedThis = jsCast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue result = jsNumber(impl->nodeType());
    return result;
}


JSValue jsNodeParentNode(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* castedThis = jsCast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->parentNode()));
    return result;
}


JSValue jsNodeChildNodes(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* castedThis = jsCast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->childNodes()));
    return result;
}


JSValue jsNodeFirstChild(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* castedThis = jsCast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->firstChild()));
    return result;
}


JSValue jsNodeLastChild(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* castedThis = jsCast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->lastChild()));
    return result;
}


JSValue jsNodePreviousSibling(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* castedThis = jsCast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->previousSibling()));
    return result;
}


JSValue jsNodeNextSibling(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* castedThis = jsCast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->nextSibling()));
    return result;
}


JSValue jsNodeOwnerDocument(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* castedThis = jsCast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->ownerDocument()));
    return result;
}


JSValue jsNodeNamespaceURI(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* castedThis = jsCast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, impl->namespaceURI());
    return result;
}


JSValue jsNodePrefix(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* castedThis = jsCast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, impl->prefix());
    return result;
}


JSValue jsNodeLocalName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* castedThis = jsCast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, impl->localName());
    return result;
}


JSValue jsNodeBaseURI(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* castedThis = jsCast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, impl->baseURI());
    return result;
}


JSValue jsNodeTextContent(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* castedThis = jsCast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue result = jsStringOrNull(exec, impl->textContent());
    return result;
}


JSValue jsNodeParentElement(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* castedThis = jsCast<JSNode*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->parentElement()));
    return result;
}


JSValue jsNodeConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSNode* domObject = jsCast<JSNode*>(asObject(slotBase));
    return JSNode::getConstructor(exec, domObject->globalObject());
}

void JSNode::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSNode* thisObject = jsCast<JSNode*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    lookupPut<JSNode, Base>(exec, propertyName, value, &JSNodeTable, thisObject, slot);
}

void setJSNodeNodeValue(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSNode* castedThis = jsCast<JSNode*>(thisObject);
    Node* impl = static_cast<Node*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setNodeValue(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSNodePrefix(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSNode* castedThis = jsCast<JSNode*>(thisObject);
    Node* impl = static_cast<Node*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setPrefix(nativeValue, ec);
    setDOMException(exec, ec);
}


void setJSNodeTextContent(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSNode* castedThis = jsCast<JSNode*>(thisObject);
    Node* impl = static_cast<Node*>(castedThis->impl());
    ExceptionCode ec = 0;
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl->setTextContent(nativeValue, ec);
    setDOMException(exec, ec);
}


JSValue JSNode::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSNodeConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionInsertBefore(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    return JSValue::encode(castedThis->insertBefore(exec));
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionReplaceChild(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    return JSValue::encode(castedThis->replaceChild(exec));
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionRemoveChild(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    return JSValue::encode(castedThis->removeChild(exec));
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionAppendChild(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    return JSValue::encode(castedThis->appendChild(exec));
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionHasChildNodes(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    Node* impl = static_cast<Node*>(castedThis->impl());

    JSC::JSValue result = jsBoolean(impl->hasChildNodes());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionCloneNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    Node* impl = static_cast<Node*>(castedThis->impl());
    bool deep(exec->argument(0).toBoolean(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->cloneNode(deep)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionNormalize(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    Node* impl = static_cast<Node*>(castedThis->impl());
    impl->normalize();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionIsSupported(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    Node* impl = static_cast<Node*>(castedThis->impl());
    const String& feature(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& version(valueToStringWithNullCheck(exec, exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->isSupported(feature, version));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionIsSameNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    Node* impl = static_cast<Node*>(castedThis->impl());
    Node* other(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->isSameNode(other));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionIsEqualNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    Node* impl = static_cast<Node*>(castedThis->impl());
    Node* other(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->isEqualNode(other));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionLookupPrefix(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    Node* impl = static_cast<Node*>(castedThis->impl());
    const String& namespaceURI(valueToStringWithNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsStringOrNull(exec, impl->lookupPrefix(namespaceURI));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionIsDefaultNamespace(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    Node* impl = static_cast<Node*>(castedThis->impl());
    const String& namespaceURI(valueToStringWithNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->isDefaultNamespace(namespaceURI));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionLookupNamespaceURI(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    Node* impl = static_cast<Node*>(castedThis->impl());
    const String& prefix(valueToStringWithNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsStringOrNull(exec, impl->lookupNamespaceURI(prefix));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionCompareDocumentPosition(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    Node* impl = static_cast<Node*>(castedThis->impl());
    Node* other(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsNumber(impl->compareDocumentPosition(other));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionContains(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    Node* impl = static_cast<Node*>(castedThis->impl());
    Node* other(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->contains(other));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionAddEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl->addEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionRemoveEventListener(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    Node* impl = static_cast<Node*>(castedThis->impl());
    JSValue listener = exec->argument(1);
    if (!listener.isObject())
        return JSValue::encode(jsUndefined());
    impl->removeEventListener(exec->argument(0).toString(exec)->value(exec), JSEventListener::create(asObject(listener), castedThis, false, currentWorld(exec)).get(), exec->argument(2).toBoolean(exec));
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsNodePrototypeFunctionDispatchEvent(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSNode::s_info))
        return throwVMTypeError(exec);
    JSNode* castedThis = jsCast<JSNode*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSNode::s_info);
    Node* impl = static_cast<Node*>(castedThis->impl());
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    Event* event(toEvent(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl->dispatchEvent(event, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

// Constant getters

JSValue jsNodeELEMENT_NODE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsNodeATTRIBUTE_NODE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsNodeTEXT_NODE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsNodeCDATA_SECTION_NODE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}

JSValue jsNodeENTITY_REFERENCE_NODE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(5));
}

JSValue jsNodeENTITY_NODE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(6));
}

JSValue jsNodePROCESSING_INSTRUCTION_NODE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(7));
}

JSValue jsNodeCOMMENT_NODE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(8));
}

JSValue jsNodeDOCUMENT_NODE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(9));
}

JSValue jsNodeDOCUMENT_TYPE_NODE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(10));
}

JSValue jsNodeDOCUMENT_FRAGMENT_NODE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(11));
}

JSValue jsNodeNOTATION_NODE(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(12));
}

JSValue jsNodeDOCUMENT_POSITION_DISCONNECTED(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0x01));
}

JSValue jsNodeDOCUMENT_POSITION_PRECEDING(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0x02));
}

JSValue jsNodeDOCUMENT_POSITION_FOLLOWING(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0x04));
}

JSValue jsNodeDOCUMENT_POSITION_CONTAINS(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0x08));
}

JSValue jsNodeDOCUMENT_POSITION_CONTAINED_BY(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0x10));
}

JSValue jsNodeDOCUMENT_POSITION_IMPLEMENTATION_SPECIFIC(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0x20));
}

Node* toNode(JSC::JSValue value)
{
    return value.inherits(&JSNode::s_info) ? jsCast<JSNode*>(asObject(value))->impl() : 0;
}

}
