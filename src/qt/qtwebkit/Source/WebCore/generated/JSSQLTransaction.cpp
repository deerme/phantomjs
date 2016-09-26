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

#if ENABLE(SQL_DATABASE)

#include "JSSQLTransaction.h"

#include "SQLTransaction.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSSQLTransactionPrototypeTableValues[] =
{
    { "executeSql", DontDelete | JSC::Function, (intptr_t)static_cast<NativeFunction>(jsSQLTransactionPrototypeFunctionExecuteSql), (intptr_t)2, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSSQLTransactionPrototypeTable = { 2, 1, JSSQLTransactionPrototypeTableValues, 0 };
static const HashTable* getJSSQLTransactionPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSSQLTransactionPrototypeTable);
}

const ClassInfo JSSQLTransactionPrototype::s_info = { "SQLTransactionPrototype", &Base::s_info, 0, getJSSQLTransactionPrototypeTable, CREATE_METHOD_TABLE(JSSQLTransactionPrototype) };

JSObject* JSSQLTransactionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSQLTransaction>(exec, globalObject);
}

bool JSSQLTransactionPrototype::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSQLTransactionPrototype* thisObject = jsCast<JSSQLTransactionPrototype*>(cell);
    return getStaticFunctionSlot<JSObject>(exec, getJSSQLTransactionPrototypeTable(exec), thisObject, propertyName, slot);
}

bool JSSQLTransactionPrototype::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSSQLTransactionPrototype* thisObject = jsCast<JSSQLTransactionPrototype*>(object);
    return getStaticFunctionDescriptor<JSObject>(exec, getJSSQLTransactionPrototypeTable(exec), thisObject, propertyName, descriptor);
}

const ClassInfo JSSQLTransaction::s_info = { "SQLTransaction", &Base::s_info, 0, 0 , CREATE_METHOD_TABLE(JSSQLTransaction) };

JSSQLTransaction::JSSQLTransaction(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SQLTransaction> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSSQLTransaction::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSSQLTransaction::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSSQLTransactionPrototype::create(exec->vm(), globalObject, JSSQLTransactionPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSSQLTransaction::destroy(JSC::JSCell* cell)
{
    JSSQLTransaction* thisObject = static_cast<JSSQLTransaction*>(cell);
    thisObject->JSSQLTransaction::~JSSQLTransaction();
}

JSSQLTransaction::~JSSQLTransaction()
{
    releaseImplIfNotNull();
}

EncodedJSValue JSC_HOST_CALL jsSQLTransactionPrototypeFunctionExecuteSql(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSQLTransaction::s_info))
        return throwVMTypeError(exec);
    JSSQLTransaction* castedThis = jsCast<JSSQLTransaction*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, &JSSQLTransaction::s_info);
    return JSValue::encode(castedThis->executeSql(exec));
}

static inline bool isObservable(JSSQLTransaction* jsSQLTransaction)
{
    if (jsSQLTransaction->hasCustomProperties())
        return true;
    return false;
}

bool JSSQLTransactionOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSSQLTransaction* jsSQLTransaction = jsCast<JSSQLTransaction*>(handle.get().asCell());
    if (!isObservable(jsSQLTransaction))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSSQLTransactionOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSSQLTransaction* jsSQLTransaction = jsCast<JSSQLTransaction*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsSQLTransaction->impl(), jsSQLTransaction);
    jsSQLTransaction->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SQLTransaction* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSSQLTransaction>(exec, impl))
        return result;
    ReportMemoryCost<SQLTransaction>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSSQLTransaction>(exec, globalObject, impl);
}

SQLTransaction* toSQLTransaction(JSC::JSValue value)
{
    return value.inherits(&JSSQLTransaction::s_info) ? jsCast<JSSQLTransaction*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(SQL_DATABASE)
