/*
  cpgf Library
  Copyright (C) 2011 - 2013 Wang Qi http://www.cpgf.org/
  All rights reserved.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/


// Auto generated file, don't modify.

#ifndef __REGISTER_META_TEST_H
#define __REGISTER_META_TEST_H


#include "cpgf/gmetadefine.h"


using namespace cpgf;

namespace meta_test { 


GDefineMetaInfo createMetaClass_ChainedObjectA();
GDefineMetaInfo createMetaClass_ChainedObjectB();
GDefineMetaInfo createMetaClass_ChainedObjectC();
GDefineMetaInfo createMetaClass_Global_global();
GDefineMetaInfo createMetaClass_Global_metagen_multiple_inheritance_cast();
GDefineMetaInfo createMetaClass_Global_simpleobject();
GDefineMetaInfo createMetaClass_Global_testobjectarray();
GDefineMetaInfo createMetaClass_MetagenMethodOverload();
GDefineMetaInfo createMetaClass_MetagenMethodOverloadByFundamental();
GDefineMetaInfo createMetaClass_MetagenNonconstructable();
GDefineMetaInfo createMetaClass_MetagenOperatorArithmetic();
GDefineMetaInfo createMetaClass_MetagenOperatorArithmeticAssign();
GDefineMetaInfo createMetaClass_MetagenOperatorBitwise();
GDefineMetaInfo createMetaClass_MetagenOperatorBitwiseAssign();
GDefineMetaInfo createMetaClass_MetagenOperatorConstness();
GDefineMetaInfo createMetaClass_MetagenOperatorInnerClass();
GDefineMetaInfo createMetaClass_MetagenOperatorLogic();
GDefineMetaInfo createMetaClass_MetagenOperatorOther();
GDefineMetaInfo createMetaClass_MetagenOperatorUnary();
GDefineMetaInfo createMetaClass_MetagenReturnThis();
GDefineMetaInfo createMetaClass_MultipleInheritanceCastA();
GDefineMetaInfo createMetaClass_MultipleInheritanceCastB();
GDefineMetaInfo createMetaClass_MultipleInheritanceCastC();
GDefineMetaInfo createMetaClass_MultipleInheritanceCastD();
GDefineMetaInfo createMetaClass_MultipleInheritanceCastFieldData();
GDefineMetaInfo createMetaClass_MultipleInheritanceCastR();
GDefineMetaInfo createMetaClass_MyInterfaceHolder();
GDefineMetaInfo createMetaClass_MyInterfaceObject();
GDefineMetaInfo createMetaClass_OAData();
GDefineMetaInfo createMetaClass_OAObject();
GDefineMetaInfo createMetaClass_ObjectNoDestructor();
GDefineMetaInfo createMetaClass_SimpleAtom();
GDefineMetaInfo createMetaClass_SimpleData();
GDefineMetaInfo createMetaClass_SimpleObject();
GDefineMetaInfo createMetaClass_SimpleOverride();
GDefineMetaInfo createMetaClass_SimpleOverrideBase();
GDefineMetaInfo createMetaClass_TemplateBase();
GDefineMetaInfo createMetaClass_TemplateClassA_TemplateInstance_TemplateClassA_int_char_5();
GDefineMetaInfo createMetaClass_TemplateClassB_TemplateInstance_TemplateClassB_TemplateBase();
GDefineMetaInfo createMetaClass_TestMethodMethodClass();
GDefineMetaInfo createMetaClass_TestMethodMethodData();


template <typename Meta>
void registerMain_metatest(Meta _d)
{
    _d._class(createMetaClass_ChainedObjectA());
    _d._class(createMetaClass_ChainedObjectB());
    _d._class(createMetaClass_ChainedObjectC());
    _d._class(createMetaClass_Global_global());
    _d._class(createMetaClass_Global_metagen_multiple_inheritance_cast());
    _d._class(createMetaClass_Global_simpleobject());
    _d._class(createMetaClass_Global_testobjectarray());
    _d._class(createMetaClass_MetagenMethodOverload());
    _d._class(createMetaClass_MetagenMethodOverloadByFundamental());
    _d._class(createMetaClass_MetagenNonconstructable());
    _d._class(createMetaClass_MetagenOperatorArithmetic());
    _d._class(createMetaClass_MetagenOperatorArithmeticAssign());
    _d._class(createMetaClass_MetagenOperatorBitwise());
    _d._class(createMetaClass_MetagenOperatorBitwiseAssign());
    _d._class(createMetaClass_MetagenOperatorConstness());
    _d._class(createMetaClass_MetagenOperatorInnerClass());
    _d._class(createMetaClass_MetagenOperatorLogic());
    _d._class(createMetaClass_MetagenOperatorOther());
    _d._class(createMetaClass_MetagenOperatorUnary());
    _d._class(createMetaClass_MetagenReturnThis());
    _d._class(createMetaClass_MultipleInheritanceCastA());
    _d._class(createMetaClass_MultipleInheritanceCastB());
    _d._class(createMetaClass_MultipleInheritanceCastC());
    _d._class(createMetaClass_MultipleInheritanceCastD());
    _d._class(createMetaClass_MultipleInheritanceCastFieldData());
    _d._class(createMetaClass_MultipleInheritanceCastR());
    _d._class(createMetaClass_MyInterfaceHolder());
    _d._class(createMetaClass_MyInterfaceObject());
    _d._class(createMetaClass_OAData());
    _d._class(createMetaClass_OAObject());
    _d._class(createMetaClass_ObjectNoDestructor());
    _d._class(createMetaClass_SimpleAtom());
    _d._class(createMetaClass_SimpleData());
    _d._class(createMetaClass_SimpleObject());
    _d._class(createMetaClass_SimpleOverride());
    _d._class(createMetaClass_SimpleOverrideBase());
    _d._class(createMetaClass_TemplateBase());
    _d._class(createMetaClass_TemplateClassA_TemplateInstance_TemplateClassA_int_char_5());
    _d._class(createMetaClass_TemplateClassB_TemplateInstance_TemplateClassB_TemplateBase());
    _d._class(createMetaClass_TestMethodMethodClass());
    _d._class(createMetaClass_TestMethodMethodData());
}

} // namespace meta_test




#endif
