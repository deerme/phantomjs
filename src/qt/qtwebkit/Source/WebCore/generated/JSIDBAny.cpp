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

#if ENABLE(INDEXED_DATABASE)

#include "JSIDBAny.h"

#include "IDBAny.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSIDBAnyPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSIDBAnyPrototypeTable = { 1, 0, JSIDBAnyPrototypeTableValues, 0 };
static const HashTable* getJSIDBAnyPrototypeTable(ExecState* exec)
{
    return getHashTableForGlobalData(exec->vm(), &JSIDBAnyPrototypeTable);
}

const ClassInfo JSIDBAnyPrototype::s_info = { "IDBAnyPrototype", &Base::s_info, 0, getJSIDBAnyPrototypeTable, CREATE_METHOD_TABLE(JSIDBAnyPrototype) };

JSObject* JSIDBAnyPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSIDBAny>(exec, globalObject);
}

const ClassInfo JSIDBAny::s_info = { "IDBAny", &Base::s_info, 0, 0 , CREATE_METHOD_TABLE(JSIDBAny) };

JSIDBAny::JSIDBAny(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<IDBAny> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSIDBAny::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSIDBAny::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSIDBAnyPrototype::create(exec->vm(), globalObject, JSIDBAnyPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSIDBAny::destroy(JSC::JSCell* cell)
{
    JSIDBAny* thisObject = static_cast<JSIDBAny*>(cell);
    thisObject->JSIDBAny::~JSIDBAny();
}

JSIDBAny::~JSIDBAny()
{
    releaseImplIfNotNull();
}

static inline bool isObservable(JSIDBAny* jsIDBAny)
{
    if (jsIDBAny->hasCustomProperties())
        return true;
    return false;
}

bool JSIDBAnyOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSIDBAny* jsIDBAny = jsCast<JSIDBAny*>(handle.get().asCell());
    if (!isObservable(jsIDBAny))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSIDBAnyOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSIDBAny* jsIDBAny = jsCast<JSIDBAny*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsIDBAny->impl(), jsIDBAny);
    jsIDBAny->releaseImpl();
}

IDBAny* toIDBAny(JSC::JSValue value)
{
    return value.inherits(&JSIDBAny::s_info) ? jsCast<JSIDBAny*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(INDEXED_DATABASE)
