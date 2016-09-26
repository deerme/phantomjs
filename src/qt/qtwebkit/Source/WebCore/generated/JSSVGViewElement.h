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

#ifndef JSSVGViewElement_h
#define JSSVGViewElement_h

#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include "JSSVGElement.h"
#include "SVGElement.h"
#include "SVGViewElement.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSVGViewElement : public JSSVGElement {
public:
    typedef JSSVGElement Base;
    static JSSVGViewElement* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGViewElement> impl)
    {
        JSSVGViewElement* ptr = new (NotNull, JSC::allocateCell<JSSVGViewElement>(globalObject->vm().heap)) JSSVGViewElement(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::ExecState*, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static const JSC::ClassInfo s_info;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

    static JSC::JSValue getConstructor(JSC::ExecState*, JSC::JSGlobalObject*);
protected:
    JSSVGViewElement(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGViewElement>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};


class JSSVGViewElementPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGViewElementPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGViewElementPrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGViewElementPrototype>(vm.heap)) JSSVGViewElementPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSSVGViewElementPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

class JSSVGViewElementConstructor : public DOMConstructorObject {
private:
    JSSVGViewElementConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGViewElementConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGViewElementConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGViewElementConstructor>(*exec->heap())) JSSVGViewElementConstructor(structure, globalObject);
        ptr->finishCreation(exec, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertyDescriptor(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Attributes

JSC::JSValue jsSVGViewElementViewTarget(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#if ENABLE(SVG)
JSC::JSValue jsSVGViewElementExternalResourcesRequired(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(SVG)
JSC::JSValue jsSVGViewElementViewBox(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(SVG)
JSC::JSValue jsSVGViewElementPreserveAspectRatio(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(SVG)
JSC::JSValue jsSVGViewElementZoomAndPan(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGViewElementZoomAndPan(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
#endif
JSC::JSValue jsSVGViewElementConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
// Constants

#if ENABLE(SVG)
JSC::JSValue jsSVGViewElementSVG_ZOOMANDPAN_UNKNOWN(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(SVG)
JSC::JSValue jsSVGViewElementSVG_ZOOMANDPAN_DISABLE(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif
#if ENABLE(SVG)
JSC::JSValue jsSVGViewElementSVG_ZOOMANDPAN_MAGNIFY(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
#endif

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
