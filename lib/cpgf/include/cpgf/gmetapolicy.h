/*
  cpgf Library
  Copyright (C) 2011, 2012 Wang Qi http://www.cpgf.org/
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


#ifndef __GMETAPOLICY_H
#define __GMETAPOLICY_H

#include "cpgf/gpp.h"
#include "cpgf/gpolicy.h"
#include "cpgf/gmetacommon.h"


#define POLICY_ALL_INDEX_HELPER(N, P) GPP_COMMA_IF(N) P<N>


namespace cpgf {

const int metaPolicyResultIndex = -1;


// used by field and property
struct GMetaRuleForbidRead {};
struct GMetaRuleForbidWrite {};

// used by class
struct GMetaRuleDefaultConstructorAbsent {};
struct GMetaRuleCopyConstructorAbsent {};

// used by meta define
struct GMetaRuleDestructorAbsent {};

// used by invokable -- method, constructor, and operator
template <int N>
struct GMetaRuleTransferOwnership {};

// used by invokable -- method, constructor, and operator
template <int N>
struct GMetaRuleCopyConstReference {};

// used by invokable -- method, constructor, and operator
template <int N>
struct GMetaRuleParamNoncopyable {};

// used by method and property getter/setter
struct GMetaRuleExplicitThis {};

// used by property getter
struct GMetaRuleGetterExplicitThis {};

// used by property Setter
struct GMetaRuleSetterExplicitThis {};


// policies

typedef MakePolicy<
	>
	GMetaPolicyDefault;


// used by field and property
typedef MakePolicy<
		GMetaRuleForbidRead,
		GMetaRuleForbidWrite
	>
	GMetaPolicyNoncopyable;


typedef MakePolicy<
		GMetaRuleForbidWrite
	>
	GMetaPolicyReadOnly;


typedef MakePolicy<
		GMetaRuleForbidRead
	>
	GMetaPolicyWriteOnly;


// used by class
typedef MakePolicy<
		GMetaRuleDefaultConstructorAbsent
	>
	GMetaPolicyNoDefaultConstructor;


typedef MakePolicy<
		GMetaRuleCopyConstructorAbsent
	>
	GMetaPolicyNoCopyConstructor;

typedef MakePolicy<
		GMetaRuleDefaultConstructorAbsent,
		GMetaRuleCopyConstructorAbsent
	>
	GMetaPolicyNoDefaultAndCopyConstructor;

typedef MakePolicy<
		GMetaRuleDestructorAbsent
	>
	GMetaPolicyDestructorAbsent;

typedef MakePolicy<
		GMetaRuleTransferOwnership <metaPolicyResultIndex>
	>
	GMetaPolicyTransferResultOwnership;


typedef MakePolicy<
		GMetaRuleCopyConstReference <metaPolicyResultIndex>,
		GPP_REPEAT(REF_MAX_ARITY, POLICY_ALL_INDEX_HELPER, GMetaRuleCopyConstReference)
	>
	GMetaPolicyCopyAllConstReference;


typedef MakePolicy<
		GMetaRuleParamNoncopyable <metaPolicyResultIndex>,
		GPP_REPEAT(REF_MAX_ARITY, POLICY_ALL_INDEX_HELPER, GMetaRuleParamNoncopyable)
	>
	GMetaPolicyAllParamNoncopyable;

typedef MakePolicy<
		GMetaRuleExplicitThis
	>
	GMetaPolicyExplicitThis;


} // namespace cpgf


#undef POLICY_ALL_INDEX_HELPER



#endif

