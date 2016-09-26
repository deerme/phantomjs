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

#ifndef JSSVGElementInstance_h
#define JSSVGElementInstance_h

#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include "JSEventTarget.h"
#include "SVGElement.h"
#include "SVGElementInstance.h"
#include <runtime/JSObject.h>

namespace WebCore {

class JSSVGElementInstance : public JSEventTarget {
public:
    typedef JSEventTarget Base;
    static JSSVGElementInstance* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGElementInstance> impl)
    {
        JSSVGElementInstance* ptr = new (NotNull, JSC::allocateCell<JSSVGElementInstance>(globalObject->vm().heap)) JSSVGElementInstance(structure, globalObject, impl);
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
    static void visitChildren(JSCell*, JSC::SlotVisitor&);

    SVGElementInstance* impl() const
    {
        return static_cast<SVGElementInstance*>(Base::impl());
    }
protected:
    JSSVGElementInstance(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<SVGElementInstance>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesVisitChildren | JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | Base::StructureFlags;
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, SVGElementInstance*);
SVGElementInstance* toSVGElementInstance(JSC::JSValue);

class JSSVGElementInstancePrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::ExecState*, JSC::JSGlobalObject*);
    static JSSVGElementInstancePrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSSVGElementInstancePrototype* ptr = new (NotNull, JSC::allocateCell<JSSVGElementInstancePrototype>(vm.heap)) JSSVGElementInstancePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), &s_info);
    }

private:
    JSSVGElementInstancePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSSVGElementInstanceConstructor : public DOMConstructorObject {
private:
    JSSVGElementInstanceConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::ExecState*, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSSVGElementInstanceConstructor* create(JSC::ExecState* exec, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSSVGElementInstanceConstructor* ptr = new (NotNull, JSC::allocateCell<JSSVGElementInstanceConstructor>(*exec->heap())) JSSVGElementInstanceConstructor(structure, globalObject);
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

JSC::JSValue jsSVGElementInstanceCorrespondingElement(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGElementInstanceCorrespondingUseElement(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGElementInstanceParentNode(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGElementInstanceChildNodes(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGElementInstanceFirstChild(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGElementInstanceLastChild(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGElementInstancePreviousSibling(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGElementInstanceNextSibling(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsSVGElementInstanceOnabort(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnabort(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnblur(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnblur(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnchange(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnchange(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnclick(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnclick(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOncontextmenu(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOncontextmenu(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOndblclick(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOndblclick(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnerror(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnerror(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnfocus(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnfocus(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOninput(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOninput(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnkeydown(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnkeydown(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnkeypress(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnkeypress(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnkeyup(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnkeyup(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnload(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnmousedown(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnmousedown(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnmouseenter(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnmouseenter(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnmouseleave(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnmouseleave(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnmousemove(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnmousemove(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnmouseout(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnmouseout(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnmouseover(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnmouseover(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnmouseup(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnmouseup(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnmousewheel(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnmousewheel(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnbeforecut(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnbeforecut(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOncut(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOncut(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnbeforecopy(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnbeforecopy(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOncopy(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOncopy(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnbeforepaste(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnbeforepaste(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnpaste(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnpaste(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOndragenter(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOndragenter(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOndragover(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOndragover(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOndragleave(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOndragleave(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOndrop(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOndrop(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOndragstart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOndragstart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOndrag(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOndrag(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOndragend(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOndragend(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnreset(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnreset(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnresize(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnresize(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnscroll(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnscroll(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnsearch(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnsearch(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnselect(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnselect(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnselectstart(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnselectstart(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnsubmit(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnsubmit(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceOnunload(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSSVGElementInstanceOnunload(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsSVGElementInstanceConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
