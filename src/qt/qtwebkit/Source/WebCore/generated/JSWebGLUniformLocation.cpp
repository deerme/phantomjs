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

#if ENABLE(WEBGL)

#include "JSWebGLUniformLocation.h"

#include "WebGLUniformLocation.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSWebGLUniformLocationTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLUniformLocationConstructor), (intptr_t)0, NoIntrinsic },
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebGLUniformLocationTable = { 2, 1, JSWebGLUniformLocationTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSWebGLUniformLocationConstructorTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebGLUniformLocationConstructorTable = { 1, 0, JSWebGLUniformLocationConstructorTableValues, 0 };
const ClassInfo JSWebGLUniformLocationConstructor::s_info = { "WebGLUniformLocationConstructor", &Base::s_info, &JSWebGLUniformLocationConstructorTable, 0, CREATE_METHOD_TABLE(JSWebGLUniformLocationConstructor) };

JSWebGLUniformLocationConstructor::JSWebGLUniformLocationConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebGLUniformLocationConstructor::finishCreation(ExecState* exec, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(exec->vm());
    ASSERT(inherits(&s_info));
    putDirect(exec->vm(), exec->propertyNames().prototype, JSWebGLUniformLocationPrototype::self(exec, globalObject), DontDelete | ReadOnly);
    putDirect(exec->vm(), exec->propertyNames().length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSWebGLUniformLocationConstructor::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebGLUniformLocationConstructor, JSDOMWrapper>(exec, &JSWebGLUniformLocationConstructorTable, jsCast<JSWebGLUniformLocationConstructor*>(cell), propertyName, slot);
}

bool JSWebGLUniformLocationConstructor::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSWebGLUniformLocationConstructor, JSDOMWrapper>(exec, &JSWebGLUniformLocationConstructorTable, jsCast<JSWebGLUniformLocationConstructor*>(object), propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSWebGLUniformLocationPrototypeTableValues[] =
{
    { 0, 0, 0, 0, NoIntrinsic }
};

static const HashTable JSWebGLUniformLocationPrototypeTable = { 1, 0, JSWebGLUniformLocationPrototypeTableValues, 0 };
const ClassInfo JSWebGLUniformLocationPrototype::s_info = { "WebGLUniformLocationPrototype", &Base::s_info, &JSWebGLUniformLocationPrototypeTable, 0, CREATE_METHOD_TABLE(JSWebGLUniformLocationPrototype) };

JSObject* JSWebGLUniformLocationPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLUniformLocation>(exec, globalObject);
}

const ClassInfo JSWebGLUniformLocation::s_info = { "WebGLUniformLocation", &Base::s_info, &JSWebGLUniformLocationTable, 0 , CREATE_METHOD_TABLE(JSWebGLUniformLocation) };

JSWebGLUniformLocation::JSWebGLUniformLocation(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLUniformLocation> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSWebGLUniformLocation::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(&s_info));
}

JSObject* JSWebGLUniformLocation::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return JSWebGLUniformLocationPrototype::create(exec->vm(), globalObject, JSWebGLUniformLocationPrototype::createStructure(globalObject->vm(), globalObject, globalObject->objectPrototype()));
}

void JSWebGLUniformLocation::destroy(JSC::JSCell* cell)
{
    JSWebGLUniformLocation* thisObject = static_cast<JSWebGLUniformLocation*>(cell);
    thisObject->JSWebGLUniformLocation::~JSWebGLUniformLocation();
}

JSWebGLUniformLocation::~JSWebGLUniformLocation()
{
    releaseImplIfNotNull();
}

bool JSWebGLUniformLocation::getOwnPropertySlot(JSCell* cell, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebGLUniformLocation* thisObject = jsCast<JSWebGLUniformLocation*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueSlot<JSWebGLUniformLocation, Base>(exec, &JSWebGLUniformLocationTable, thisObject, propertyName, slot);
}

bool JSWebGLUniformLocation::getOwnPropertyDescriptor(JSObject* object, ExecState* exec, PropertyName propertyName, PropertyDescriptor& descriptor)
{
    JSWebGLUniformLocation* thisObject = jsCast<JSWebGLUniformLocation*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, &s_info);
    return getStaticValueDescriptor<JSWebGLUniformLocation, Base>(exec, &JSWebGLUniformLocationTable, thisObject, propertyName, descriptor);
}

JSValue jsWebGLUniformLocationConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSWebGLUniformLocation* domObject = jsCast<JSWebGLUniformLocation*>(asObject(slotBase));
    return JSWebGLUniformLocation::getConstructor(exec, domObject->globalObject());
}

JSValue JSWebGLUniformLocation::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebGLUniformLocationConstructor>(exec, jsCast<JSDOMGlobalObject*>(globalObject));
}

static inline bool isObservable(JSWebGLUniformLocation* jsWebGLUniformLocation)
{
    if (jsWebGLUniformLocation->hasCustomProperties())
        return true;
    return false;
}

bool JSWebGLUniformLocationOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSWebGLUniformLocation* jsWebGLUniformLocation = jsCast<JSWebGLUniformLocation*>(handle.get().asCell());
    if (!isObservable(jsWebGLUniformLocation))
        return false;
    UNUSED_PARAM(visitor);
    return false;
}

void JSWebGLUniformLocationOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSWebGLUniformLocation* jsWebGLUniformLocation = jsCast<JSWebGLUniformLocation*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsWebGLUniformLocation->impl(), jsWebGLUniformLocation);
    jsWebGLUniformLocation->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7WebGLUniformLocation@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore20WebGLUniformLocationE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebGLUniformLocation* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebGLUniformLocation>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7WebGLUniformLocation@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore20WebGLUniformLocationE[2];
#if COMPILER(CLANG) && COMPILER_SUPPORTS(CXX_STATIC_ASSERT)
    // If this fails WebGLUniformLocation does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(WebGLUniformLocation), WebGLUniformLocation_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // WebGLUniformLocation has subclasses. If WebGLUniformLocation has subclasses that get passed
    // to toJS() we currently require WebGLUniformLocation you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<WebGLUniformLocation>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSWebGLUniformLocation>(exec, globalObject, impl);
}

WebGLUniformLocation* toWebGLUniformLocation(JSC::JSValue value)
{
    return value.inherits(&JSWebGLUniformLocation::s_info) ? jsCast<JSWebGLUniformLocation*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(WEBGL)