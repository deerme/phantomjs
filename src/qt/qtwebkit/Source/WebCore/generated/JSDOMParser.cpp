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
#include "JSDOMParser.h"

#include "DOMParser.h"
#include "Document.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDocument.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSDOMParserTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMParserConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMParserTable = { 2, 1, JSDOMParserTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSDOMParserConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMParserConstructorTable = { 1, 0, JSDOMParserConstructorTableValues, 0 };
EncodedJSValue JSC_HOST_CALL JSDOMParserConstructor::constructJSDOMParser(ExecState* exec)
{
    JSDOMParserConstructor* castedThis = jsCast<JSDOMParserConstructor*>(exec->callee());
    RefPtr<DOMParser> object = DOMParser::create();
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

const ClassInfo JSDOMParserConstructor::s_info = { "DOMParserConstructor", &Base::s_info, &JSDOMParserConstructorTable, 0, CREATE_METHOD_TABLE(JSDOMParserConstructor) };

JSDOMParserConstructor::JSDOMParserConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSDOMParserConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSDOMParserPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSDOMParserConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMParserConstructor, JSDOMWrapper>(exec, &JSDOMParserConstructorTable, jsCast<JSDOMParserConstructor*>(cell), propertyName, slot);
}

bool JSDOMParserConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDOMParserConstructor, JSDOMWrapper>(exec, &JSDOMParserConstructorTable, jsCast<JSDOMParserConstructor*>(object), propertyName, descriptor);
}

ConstructType JSDOMParserConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSDOMParser;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSDOMParserPrototypeTableValues[] =
{
    { "parseFromString", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsDOMParserPrototypeFunctionParseFromString), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSDOMParserPrototypeTable = { 2, 1, JSDOMParserPrototypeTableValues, 0 };
const ClassInfo JSDOMParserPrototype::s_info = { "DOMParserPrototype", &Base::s_info, &JSDOMParserPrototypeTable, 0, CREATE_METHOD_TABLE(JSDOMParserPrototype) };

JSObject* JSDOMParserPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMParser>(exec, globalObject);
}

bool JSDOMParserPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDOMParserPrototype* thisObject = jsCast<JSDOMParserPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, &JSDOMParserPrototypeTable, thisObject, propertyName, slot);
}

bool JSDOMParserPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDOMParserPrototype* thisObject = jsCast<JSDOMParserPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, &JSDOMParserPrototypeTable, thisObject, propertyName, descriptor);
}

const ClassInfo JSDOMParser::s_info = { "DOMParser", &Base::s_info, &JSDOMParserTable, 0 , CREATE_METHOD_TABLE(JSDOMParser) };

JSDOMParser::JSDOMParser(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMParser> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSDOMParser::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSDOMParser::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSDOMParserPrototype::create(exec->vm(), globalObject, JSDOMParserPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSDOMParser::destroy(JSC::JSCell* cell)
{
    JSDOMParser* thisObject = static_cast<JSDOMParser*>(cell);
    thisObject->JSDOMParser::~JSDOMParser();
}

JSDOMParser::~JSDOMParser()
{
    releaseImplIfNotNull();
}

bool JSDOMParser::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSDOMParser* thisObject = jsCast<JSDOMParser*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSDOMParser, Base>(exec, &JSDOMParserTable, thisObject, propertyName, slot);
}

bool JSDOMParser::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSDOMParser* thisObject = jsCast<JSDOMParser*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSDOMParser, Base>(exec, &JSDOMParserTable, thisObject, propertyName, descriptor);
}

JSValue jsDOMParserConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSDOMParser* domObject = jsCast<JSDOMParser*>(asObject(slotBase));
    return JSDOMParser::getConstructor(exec, domObject->globalObject());
}

JSValue JSDOMParser::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDOMParserConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsDOMParserPrototypeFunctionParseFromString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSDOMParser::s_info))
        return throwVMTypeError(exec);
    JSDOMParser* castedThis = jsCast<JSDOMParser*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSDOMParser::s_info);
    DOMParser* impl = static_cast<DOMParser*>(castedThis->impl());
    const String& str(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& contentType(exec->argument(1).isEmpty() ? String() : exec->argument(1).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl->parseFromString(str, contentType)));
    return JSValue::encode(result);
}

static inline bool isObservable(JSDOMParser* jsDOMParser)
{
    if (jsDOMParser->hasCustomProperties())
        return true;
    return false;
}

bool JSDOMParserOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSDOMParser* jsDOMParser = jsCast<JSDOMParser*>(handle.get().asCell());
    if (!isObservable(jsDOMParser))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSDOMParserOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSDOMParser* jsDOMParser = jsCast<JSDOMParser*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsDOMParser->impl(), jsDOMParser);
    jsDOMParser->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DOMParser* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSDOMParser>(exec, impl))
        return result;
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to DOMParser.
    COMPILE_ASSERT(!__is_polymorphic(DOMParser), DOMParser_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<DOMParser>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSDOMParser>(exec, globalObject, impl);
}

DOMParser* toDOMParser(JSC::JSValue value)
{
    return value.inherits(&JSDOMParser::s_info) ? jsCast<JSDOMParser*>(asObject(value))->impl() : 0;
}

}
