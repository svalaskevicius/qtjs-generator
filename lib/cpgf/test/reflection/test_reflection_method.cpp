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


#include "test_reflection_common.h"

#define CLASS TestClass_Method
#define NAME_CLASS GPP_STRINGIZE(CLASS)


using namespace std;
using namespace cpgf;

namespace Test_Method { namespace {

class CLASS {
public:
	int fieldMethodInt;
	string fieldMethodString;

public:
	CLASS() : fieldMethodInt(0) {} // class CLASS
	virtual ~CLASS() {}

	int methodGetInt() const {
		return fieldMethodInt;
	}

	virtual void methodAddInt(int n) {
		fieldMethodInt += n;
	}

	string & methodRefString() {
		return fieldMethodString;
	}

	string methodConcatString(const string & append) {
		fieldMethodString = fieldMethodString + append;
		return fieldMethodString;
	}

	CLASS_DATA methodAddData(CLASS_DATA data) const {
		data.s = data.s + fieldMethodString;
		data.i += fieldMethodInt;

		return data;
	}

	void methodMakeData(CLASS_DATA & data) const {
		data.s = fieldMethodString;
		data.i = fieldMethodInt;
	}

	void methodMakeDataByPointer(CLASS_DATA * data) const {
		data->s = fieldMethodString;
		data->i = fieldMethodInt;
	}
	
	static const NC_DATA & methodGetNCData(int n) {
		static NC_DATA nc;
		
		nc.i = n;
		
		return nc;
	}

	void methodManyParams(
		char c,	int i, long long ll,
		double d, string s, const char * pc,
		CLASS_DATA data
	) {
		GEQUAL(c, 'A');
		GEQUAL(i, 38);
		GEQUAL(ll, 9876532198765321LL);
		GNEAR(d, 1.99, 0.0001);
		GEQUAL(s, "Many");
		GEQUAL(string(pc), string("Too Many"));
		GEQUAL(data.s, "Data");
		GEQUAL(data.i, 8);
	}

	int methodSum(const GMetaVariadicParam * params) const {
		int total = 0;
		for(size_t i = 0; i < params->paramCount; ++i) {
			total += cpgf::fromVariant<int>(*(params->params[i]));
		}

		return total;
	}

}; // class CLASS

int methodExplicitThis(CLASS * self, int n)
{
	(void)self;

	return self->fieldMethodInt + n;
}

void methodExplicitThisSum(CLASS * self, int * result, int n, const GMetaVariadicParam * params)
{
	int total = self->fieldMethodInt + n;
	for(size_t i = 0; i < params->paramCount; ++i) {
		total += cpgf::fromVariant<int>(*(params->params[i]));
	}

	*result = total;
}

void methodManySum(int * result, int a, int b, const GMetaVariadicParam * params)
{
	int total = a + b;
	for(size_t i = 0; i < params->paramCount; ++i) {
		total += cpgf::fromVariant<int>(*(params->params[i]));
	}

	*result = total;
}

struct methodFunctor
{
	int operator() (CLASS * self, int n, const string & s)
	{
		(void)self;

		return (int)(self->fieldMethodInt + self->fieldMethodString.length() + n + s.length());
	}
};

G_AUTO_RUN_BEFORE_MAIN()
{
	using namespace cpgf;
	
	// test dangling meta class
	GDefineMetaDangle<CLASS> dangle = GDefineMetaDangle<CLASS>::dangle();
	dangle
		._method("methodGetInt", &CLASS::methodGetInt)
		._method("methodAddInt", &CLASS::methodAddInt)
		._method("methodRefString", &CLASS::methodRefString)
		._method("methodConcatString", &CLASS::methodConcatString, GMetaPolicyCopyAllConstReference())
		._method("methodAddData", &CLASS::methodAddData)
	;

	GDefineMetaClass<CLASS>
		::define(NAME_CLASS)
		
		._class(dangle)

		._method("methodMakeData", &CLASS::methodMakeData)
		._method("methodMakeDataByPointer", &CLASS::methodMakeDataByPointer)
		._method("methodManyParams", &CLASS::methodManyParams)
		._method("methodSum", &CLASS::methodSum)
		._method("methodManySum", &methodManySum)
		._method("methodGetNCData", &CLASS::methodGetNCData, GMetaPolicyAllParamNoncopyable())
		._method("methodExplicitThis", &methodExplicitThis, GMetaPolicyExplicitThis())
		._method("methodExplicitThisSum", &methodExplicitThisSum, GMetaPolicyExplicitThis())
		._method("methodFunctor", GCallback<int(CLASS *, int, const string &)>(methodFunctor()), MakePolicy<GMetaRuleCopyConstReference<2>, GMetaRuleExplicitThis>())
	;
}


#ifndef G_COMPILER_CPPBUILDER
GTEST(Lib_Exists)
{
	const GMetaClass * metaClass = findMetaClass(NAME_CLASS);
	GCHECK(metaClass);
	
	const GMetaMethod * method;

	METHOD(methodGetInt);
	GCHECK(method);

	METHOD(methodAddInt);
	GCHECK(method);

	METHOD(methodRefString);
	GCHECK(method);

	METHOD(methodConcatString);
	GCHECK(method);

	METHOD(methodAddData);
	GCHECK(method);

	METHOD(methodMakeData);
	GCHECK(method);

	METHOD(methodMakeDataByPointer);
	GCHECK(method);

	METHOD(methodManyParams);
	GCHECK(method);

	METHOD(methodSum);
	GCHECK(method);

	METHOD(methodManySum);
	GCHECK(method);

	METHOD(methodExplicitThis);
	GCHECK(method);

	METHOD(methodExplicitThisSum);
	GCHECK(method);
	
	METHOD(methodFunctor);
	GCHECK(method);
}
#endif


#ifndef G_COMPILER_CPPBUILDER
GTEST(API_Exists)
{
	GScopedInterface<IMetaService> service(createDefaultMetaService());
	GCHECK(service);

	GScopedInterface<IMetaClass> metaClass(service->findClassByName(NAME_CLASS));
	GCHECK(metaClass);

	GScopedInterface<IMetaMethod> method;

	METHOD(methodGetInt);
	GCHECK(method);

	METHOD(methodAddInt);
	GCHECK(method);

	METHOD(methodRefString);
	GCHECK(method);

	METHOD(methodConcatString);
	GCHECK(method);

	METHOD(methodAddData);
	GCHECK(method);

	METHOD(methodMakeData);
	GCHECK(method);

	METHOD(methodMakeDataByPointer);
	GCHECK(method);

	METHOD(methodManyParams);
	GCHECK(method);

	METHOD(methodSum);
	GCHECK(method);

	METHOD(methodManySum);
	GCHECK(method);

	METHOD(methodExplicitThis);
	GCHECK(method);

	METHOD(methodExplicitThisSum);
	GCHECK(method);
	
	METHOD(methodFunctor);
	GCHECK(method);
}
#endif


#ifndef G_COMPILER_CPPBUILDER
GTEST(Lib_ResultType)
{
	const GMetaClass * metaClass = findMetaClass(NAME_CLASS);
	GCHECK(metaClass);

	const GMetaMethod * method;

	METHOD(methodGetInt);
	GEQUAL(method->getResultType(), createMetaType<int>());
	GCHECK(method->hasResult());

	METHOD(methodAddInt);
	GEQUAL(method->getResultType(), createMetaType<void>());
	GCHECK(! method->hasResult());

	METHOD(methodRefString);
	GEQUAL(method->getResultType(), createMetaType<string &>());
	GCHECK(method->hasResult());
	GCHECK(! method->getItemType().isConstFunction());

	METHOD(methodConcatString);
	GEQUAL(method->getResultType(), createMetaType<string>());
	GCHECK(method->hasResult());

	METHOD(methodAddData);
	GEQUAL(method->getResultType(), createMetaType<CLASS_DATA>());
	GCHECK(method->hasResult());

	METHOD(methodMakeData);
	GEQUAL(method->getResultType(), createMetaType<void>());
	GCHECK(! method->hasResult());
	GCHECK(method->getItemType().isConstFunction()); // class CLASS

	METHOD(methodMakeDataByPointer);
	GEQUAL(method->getResultType(), createMetaType<void>());
	GCHECK(! method->hasResult());

	METHOD(methodManyParams);
	GEQUAL(method->getResultType(), createMetaType<void>());
	GCHECK(! method->hasResult());

	METHOD(methodSum);
	GEQUAL(method->getResultType(), createMetaType<int>());
	GCHECK(method->hasResult());

	METHOD(methodManySum);
	GCHECK(! method->hasResult());

	METHOD(methodExplicitThis);
	GEQUAL(method->getResultType(), createMetaType<int>());
	GCHECK(method->hasResult());

	METHOD(methodExplicitThisSum);
	GCHECK(! method->hasResult());

	METHOD(methodFunctor);
	GEQUAL(method->getResultType(), createMetaType<int>());
	GCHECK(method->hasResult());
}
#endif


#ifndef G_COMPILER_CPPBUILDER
GTEST(Lib_ParamType)
{
	const GMetaClass * metaClass = findMetaClass(NAME_CLASS);
	GCHECK(metaClass);

	const GMetaMethod * method;

	METHOD(methodGetInt);
	GCHECK(! method->isVariadic());
	GEQUAL(method->getParamCount(), 0);

	METHOD(methodAddInt);
	GCHECK(! method->isVariadic());
	GEQUAL(method->getParamCount(), 1);
	GEQUAL(method->getParamType(0), createMetaType<int>());

	METHOD(methodRefString);
	GCHECK(! method->isVariadic());
	GEQUAL(method->getParamCount(), 0);

	METHOD(methodConcatString);
	GCHECK(! method->isVariadic());
	GEQUAL(method->getParamCount(), 1);
	GEQUAL(method->getParamType(0), createMetaType<string>());

	METHOD(methodAddData);
	GCHECK(! method->isVariadic());
	GEQUAL(method->getParamCount(), 1);
	GEQUAL(method->getParamType(0), createMetaType<CLASS_DATA>());

	METHOD(methodMakeData);
	GCHECK(! method->isVariadic());
	GEQUAL(method->getParamCount(), 1);
	GEQUAL(method->getParamType(0), createMetaType<CLASS_DATA>());

	METHOD(methodMakeDataByPointer);
	GCHECK(! method->isVariadic());
	GEQUAL(method->getParamCount(), 1);
	GEQUAL(method->getParamType(0), createMetaType<CLASS_DATA *>());

	METHOD(methodManyParams);
	GCHECK(! method->isVariadic());
	GEQUAL(method->getParamCount(), 7);
	GEQUAL(method->getParamType(0), createMetaType<char>());
	GEQUAL(method->getParamType(1), createMetaType<int>());
	GEQUAL(method->getParamType(2), createMetaType<long long>());
	GEQUAL(method->getParamType(3), createMetaType<double>());
	GEQUAL(method->getParamType(4), createMetaType<string>());
	GEQUAL(method->getParamType(5), createMetaType<const char *>());
	GEQUAL(method->getParamType(6), createMetaType<CLASS_DATA>());

	METHOD(methodSum);
	GCHECK(method->isVariadic());
	GEQUAL(method->getParamCount(), 0);
	GEQUAL(method->getParamType(0), createMetaType<const GMetaVariadicParam *>());

	METHOD(methodManySum);
	GCHECK(method->isVariadic());
	GEQUAL(method->getParamCount(), 3);
	GEQUAL(method->getParamType(0), createMetaType<int *>());
	GEQUAL(method->getParamType(1), createMetaType<int>());
	GEQUAL(method->getParamType(2), createMetaType<int>());

	METHOD(methodExplicitThis);
	GCHECK(! method->isVariadic());
	GEQUAL(method->getParamCount(), 1);
	GEQUAL(method->getParamType(0), createMetaType<int>());

	METHOD(methodExplicitThisSum);
	GCHECK(method->isVariadic());
	GEQUAL(method->getParamCount(), 2);
	GEQUAL(method->getParamType(0), createMetaType<int *>());
	GEQUAL(method->getParamType(1), createMetaType<int>());

	METHOD(methodFunctor);
	GCHECK(! method->isVariadic());
	GEQUAL(method->getParamCount(), 2);
	GEQUAL(method->getParamType(0), createMetaType<int>());
}
#endif


#ifndef G_COMPILER_CPPBUILDER
GTEST(Lib_CheckParam)
{
	const GMetaClass * metaClass = findMetaClass(NAME_CLASS);
	GCHECK(metaClass);

	const GMetaMethod * method;

	METHOD(methodGetInt);
	GCHECK(! method->checkParam(38, 0));
	GCHECK(! method->checkParam(38, 50));

	METHOD(methodAddInt);
	GCHECK(method->checkParam(38, 0));
	GCHECK(! method->checkParam("d", 0));
	GCHECK(! method->checkParam(38, 1));
	GCHECK(! method->checkParam(38, 130));

	METHOD(methodRefString);
	GCHECK(! method->checkParam(38, 0));
	GCHECK(! method->checkParam(38, 68));

	METHOD(methodConcatString);
	GCHECK(method->checkParam("abc", 0));
	GCHECK(method->checkParam(string("abc"), 0));
	GCHECK(! method->checkParam(3, 0));
	GCHECK(! method->checkParam(38, 1));
	GCHECK(! method->checkParam(38, 130));

	METHOD(methodAddData);
	GCHECK(method->checkParam(string("abc"), 0)); // even it passes, it will cause crash if we real do the invoke.
	GCHECK(method->checkParam((void *)0, 0)); // again, dangerous
	GCHECK(method->checkParam(CLASS_DATA(3), 0));
	GCHECK(! method->checkParam("abc", 0));
	GCHECK(! method->checkParam(38, 1));
	GCHECK(! method->checkParam(38, 130));

	METHOD(methodMakeData);
	GCHECK(method->checkParam(CLASS_DATA(3), 0));
	GCHECK(! method->checkParam("abc", 0));
	GCHECK(! method->checkParam(38, 1));

	METHOD(methodMakeDataByPointer);
	GCHECK(method->checkParam((CLASS_DATA *)0, 0));
	GCHECK(method->checkParam("abc", 0)); // dangerous
	GCHECK(method->checkParam(CLASS_DATA(3), 0));
	GCHECK(! method->checkParam(38, 1));

	METHOD(methodManyParams);
	GCHECK(method->checkParam(98765321L, 0));
	GCHECK(method->checkParam(98765321L, 1));
	GCHECK(method->checkParam(98765321L, 2));
	GCHECK(method->checkParam(98765321L, 3));
	GCHECK(method->checkParam(98765321.5, 3));

	METHOD(methodSum);
	GCHECK(method->checkParam(38, 0));
	GCHECK(method->checkParam("abc", 1));
	GCHECK(method->checkParam(38, 10));
	GCHECK(method->checkParam(38, 100));
	GCHECK(method->checkParam(38, 1000));

	METHOD(methodManySum);
	GCHECK(! method->checkParam(38, 0));
	GCHECK(method->checkParam(38, 1));
	GCHECK(! method->checkParam("abc", 2));
	GCHECK(method->checkParam(38, 10));
	GCHECK(method->checkParam(38, 100));
	GCHECK(method->checkParam(38, 1000));

	METHOD(methodExplicitThis);
	GCHECK(method->checkParam(38, 0));

	METHOD(methodExplicitThisSum);
	GCHECK(! method->checkParam(38, 0));
	GCHECK(method->checkParam(38, 1));
	GCHECK(method->checkParam(38, 20));

	METHOD(methodFunctor);
	GCHECK(method->checkParam(38, 0));
	GCHECK(method->checkParam("abc", 1));
}
#endif


#ifndef G_COMPILER_CPPBUILDER
GTEST(API_CheckParam)
{
	GScopedInterface<IMetaService> service(createDefaultMetaService());
	GCHECK(service);

	GScopedInterface<IMetaClass> metaClass(service->findClassByName(NAME_CLASS));
	GCHECK(metaClass);

	GScopedInterface<IMetaMethod> method;

	METHOD(methodGetInt);
	GCHECK(! metaCheckParam(method.get(), 38, 0));
	GCHECK(! metaCheckParam(method.get(), 38, 50));

	METHOD(methodAddInt);
	GCHECK(metaCheckParam(method.get(), 38, 0));
	GCHECK(! metaCheckParam(method.get(), "d", 0));
	GCHECK(! metaCheckParam(method.get(), 38, 1));
	GCHECK(! metaCheckParam(method.get(), 38, 130));

	METHOD(methodRefString);
	GCHECK(! metaCheckParam(method.get(), 38, 0));
	GCHECK(! metaCheckParam(method.get(), 38, 68));

	METHOD(methodConcatString);
	GCHECK(metaCheckParam(method.get(), "abc", 0));
	GCHECK(metaCheckParam(method.get(), string("abc"), 0));
	GCHECK(! metaCheckParam(method.get(), 3, 0));
	GCHECK(! metaCheckParam(method.get(), 38, 1));
	GCHECK(! metaCheckParam(method.get(), 38, 130));

	METHOD(methodAddData);
	GCHECK(metaCheckParam(method.get(), string("abc"), 0)); // even it passes, it will cause crash if we real do the invoke.
	GCHECK(metaCheckParam(method.get(), (void *)0, 0)); // again, dangerous
	GCHECK(metaCheckParam(method.get(), CLASS_DATA(3), 0));
	GCHECK(! metaCheckParam(method.get(), "abc", 0));
	GCHECK(! metaCheckParam(method.get(), 38, 1));
	GCHECK(! metaCheckParam(method.get(), 38, 130));

	METHOD(methodMakeData);
	GCHECK(metaCheckParam(method.get(), CLASS_DATA(3), 0));
	GCHECK(! metaCheckParam(method.get(), "abc", 0));
	GCHECK(! metaCheckParam(method.get(), 38, 1));

	METHOD(methodMakeDataByPointer);
	GCHECK(metaCheckParam(method.get(), (CLASS_DATA *)0, 0));
	GCHECK(metaCheckParam(method.get(), "abc", 0)); // dangerous
	GCHECK(metaCheckParam(method.get(), CLASS_DATA(3), 0));
	GCHECK(! metaCheckParam(method.get(), 38, 1));

	METHOD(methodManyParams);
	GCHECK(metaCheckParam(method.get(), 98765321L, 0));
	GCHECK(metaCheckParam(method.get(), 98765321L, 1));
	GCHECK(metaCheckParam(method.get(), 98765321L, 2));
	GCHECK(metaCheckParam(method.get(), 98765321L, 3));
	GCHECK(metaCheckParam(method.get(), 98765321.5, 3));

	METHOD(methodSum);
	GCHECK(metaCheckParam(method.get(), 38, 0));
	GCHECK(metaCheckParam(method.get(), "abc", 1));
	GCHECK(metaCheckParam(method.get(), 38, 10));
	GCHECK(metaCheckParam(method.get(), 38, 100));
	GCHECK(metaCheckParam(method.get(), 38, 1000));

	METHOD(methodManySum);
	GCHECK(! metaCheckParam(method.get(), 38, 0));
	GCHECK(metaCheckParam(method.get(), 38, 1));
	GCHECK(! metaCheckParam(method.get(), "abc", 2));
	GCHECK(metaCheckParam(method.get(), 38, 10));
	GCHECK(metaCheckParam(method.get(), 38, 100));
	GCHECK(metaCheckParam(method.get(), 38, 1000));

	METHOD(methodExplicitThis);
	GCHECK(metaCheckParam(method.get(), 38, 0));

	METHOD(methodExplicitThisSum);
	GCHECK(! metaCheckParam(method.get(), 38, 0));
	GCHECK(metaCheckParam(method.get(), 38, 1));
	GCHECK(metaCheckParam(method.get(), 38, 20));

	METHOD(methodFunctor);
	GCHECK(metaCheckParam(method.get(), 38, 0));
	GCHECK(metaCheckParam(method.get(), "abc", 1));
}
#endif


#ifndef G_COMPILER_CPPBUILDER
GTEST(Lib_Invoke)
{
	const GMetaClass * metaClass = findMetaClass(NAME_CLASS);
	GCHECK(metaClass);

	const GMetaMethod * method;

	CLASS instance;
	CLASS * pobj = &instance;

	pobj->fieldMethodInt = 910;
	METHOD(methodGetInt);
	GEQUAL(fromVariant<int>(method->invoke(pobj)), 910);
	EXCEPT_META(method->invoke(pobj, 1));

	METHOD(methodAddInt);
	method->invoke(pobj, 2);
	GEQUAL(pobj->fieldMethodInt, 912);
	EXCEPT_META(method->invoke(pobj, 1, 5));

	pobj->fieldMethodString = "";
	METHOD(methodRefString);
	string & refString = fromVariant<string &>(method->invoke(pobj));
	GEQUAL(&pobj->fieldMethodString, &refString);
	refString = "reffff";
	GEQUAL(pobj->fieldMethodString, "reffff");
	EXCEPT_META(method->invoke(pobj, 1));

	pobj->fieldMethodString = "a";
	METHOD(methodConcatString);
	string s = fromVariant<string>(method->invoke(pobj, "bc"));
	GEQUAL(s, "abc");
	GEQUAL(pobj->fieldMethodString, "abc");
	EXCEPT_META(method->invoke(pobj, 1, 2));

	pobj->fieldMethodString = "bc";
	pobj->fieldMethodInt = 6;
	CLASS_DATA data("a", 5);
	METHOD(methodAddData);
	CLASS_DATA newData = fromVariant<CLASS_DATA>(method->invoke(pobj, data));
	GEQUAL(data.s, "a");
	GEQUAL(data.i, 5);
	GEQUAL(newData.s, "abc");
	GEQUAL(newData.i, 11);
	EXCEPT_META(method->invoke(pobj));

	pobj->fieldMethodString = "abc";
	pobj->fieldMethodInt = 6;
	data = CLASS_DATA("", 0);
	GDIFF(data.s, "abc");
	GDIFF(data.i, 6);
	METHOD(methodMakeData);
	method->invoke(pobj, data);
	GEQUAL(data.s, "abc");
	GEQUAL(data.i, 6);
	EXCEPT_META(method->invoke(pobj, 1, 2));

	pobj->fieldMethodString = "abc";
	pobj->fieldMethodInt = 6;
	data = CLASS_DATA("", 0);
	GDIFF(data.s, "abc");
	GDIFF(data.i, 6);
	METHOD(methodMakeDataByPointer);
	method->invoke(pobj, &data);
	GEQUAL(data.s, "abc");
	GEQUAL(data.i, 6);
	EXCEPT_META(method->invoke(pobj, 1, 2));

	METHOD(methodGetNCData);
	{
		const NC_DATA & nc = fromVariant<const NC_DATA &>(method->invoke(NULL, 1));
		GEQUAL(nc.i, 1);
	}
	{
		const NC_DATA & nc = fromVariant<const NC_DATA &>(method->invoke(NULL, 5));
		GEQUAL(nc.i, 5);
	}
	
	METHOD(methodManyParams);
	method->invoke(pobj, 'A', 38, 9876532198765321LL, 1.99, "Many", "Too Many", CLASS_DATA("Data", 8));
	EXCEPT_META(method->invoke(pobj, 1));

	METHOD(methodSum);
	GEQUAL(fromVariant<int>(method->invoke(pobj)), (0));
	GEQUAL(fromVariant<int>(method->invoke(pobj, 1, 2, 3)), (1 + 2 + 3));
	GEQUAL(fromVariant<int>(method->invoke(pobj,
		18, 56, 102, 192, 3103, 39, 52, 691, 819, 130, 397, 19385
		)), (
		18 + 56 + 102 + 192 + 3103 + 39 + 52 + 691 + 819 + 130 + 397 + 19385
		));

	METHOD(methodManySum);
	EXCEPT_META(fromVariant<int>(method->invoke(pobj)));
	int result = 0;
	method->invoke(pobj, &result, 1, 2, 3);
	GEQUAL(result, (1 + 2 + 3));
	method->invoke(pobj, &result,
		18, 56, 102, 192, 3103, 39, 52, 691, 819, 130, 397, 19385
		);
	GEQUAL(result, (
		18 + 56 + 102 + 192 + 3103 + 39 + 52 + 691 + 819 + 130 + 397 + 19385
		));

	pobj->fieldMethodInt = 17;
	METHOD(methodExplicitThis);
	GEQUAL(fromVariant<int>(method->invoke(pobj, 38)), 17 + 38);

	pobj->fieldMethodInt = 17;
	METHOD(methodExplicitThisSum);
	result = 0;
	method->invoke(pobj, &result, 38, 69, 58);
	GEQUAL(result, 17 + 38 + 69 + 58);

	pobj->fieldMethodInt = 17;
	pobj->fieldMethodString = "abc";
	METHOD(methodFunctor);
	GEQUAL(fromVariant<int>(method->invoke(pobj, 38, "hello")), 17 + 38 + 3 + 5);
}
#endif


#ifndef G_COMPILER_CPPBUILDER
GTEST(API_Invoke)
{
	GScopedInterface<IMetaService> service(createDefaultMetaService());
	GCHECK(service);

	GScopedInterface<IMetaClass> metaClass(service->findClassByName(NAME_CLASS));
	GCHECK(metaClass);

	GScopedInterface<IMetaMethod> method;

	CLASS instance;
	CLASS * pobj = &instance;

	pobj->fieldMethodInt = 910;
	METHOD(methodGetInt);
	GEQUAL(fromVariant<int>(metaInvokeMethod(method.get(), pobj)), 910);
	EXCEPT_META(metaInvokeMethod(method.get(), pobj, 1));

	METHOD(methodAddInt);
	metaInvokeMethod(method.get(), pobj, 2);
	GEQUAL(pobj->fieldMethodInt, 912);
	EXCEPT_META(metaInvokeMethod(method.get(), pobj));

	pobj->fieldMethodString = "";
	METHOD(methodRefString);
	string & refString = fromVariant<string &>(metaInvokeMethod(method.get(), pobj));
	GEQUAL(&pobj->fieldMethodString, &refString);
	refString = "reffff";
	GEQUAL(pobj->fieldMethodString, "reffff");
	EXCEPT_META(metaInvokeMethod(method.get(), pobj, 1));

	pobj->fieldMethodString = "a";
	METHOD(methodConcatString);
	string s = fromVariant<string>(metaInvokeMethod(method.get(), pobj, "bc"));
	GEQUAL(s, "abc");
	GEQUAL(pobj->fieldMethodString, "abc");
	EXCEPT_META(metaInvokeMethod(method.get(), pobj, 1, 2));

	pobj->fieldMethodString = "bc";
	pobj->fieldMethodInt = 6;
	CLASS_DATA data("a", 5);
	METHOD(methodAddData);
	CLASS_DATA newData = fromVariant<CLASS_DATA>(metaInvokeMethod(method.get(), pobj, data));
	GEQUAL(data.s, "a");
	GEQUAL(data.i, 5);
	GEQUAL(newData.s, "abc");
	GEQUAL(newData.i, 11);
	EXCEPT_META(metaInvokeMethod(method.get(), pobj, 1, 3));

	pobj->fieldMethodString = "abc";
	pobj->fieldMethodInt = 6;
	data = CLASS_DATA("", 0);
	GDIFF(data.s, "abc");
	GDIFF(data.i, 6);
	METHOD(methodMakeData);
	metaInvokeMethod(method.get(), pobj, data);
	GEQUAL(data.s, "abc");
	GEQUAL(data.i, 6);
	EXCEPT_META(metaInvokeMethod(method.get(), pobj));

	pobj->fieldMethodString = "abc";
	pobj->fieldMethodInt = 6;
	data = CLASS_DATA("", 0);
	GDIFF(data.s, "abc");
	GDIFF(data.i, 6);
	METHOD(methodMakeDataByPointer);
	metaInvokeMethod(method.get(), pobj, &data);
	GEQUAL(data.s, "abc");
	GEQUAL(data.i, 6);
	EXCEPT_META(metaInvokeMethod(method.get(), pobj, 1, 5));

	METHOD(methodGetNCData);
	{
		const NC_DATA & nc = fromVariant<const NC_DATA &>(metaInvokeMethod(method.get(), NULL, 1));
		GEQUAL(nc.i, 1);
	}
	{
		const NC_DATA & nc = fromVariant<const NC_DATA &>(metaInvokeMethod(method.get(), NULL, 5));
		GEQUAL(nc.i, 5);
	}
	
	METHOD(methodManyParams);
	metaInvokeMethod(method.get(), pobj, 'A', 38, 9876532198765321LL, 1.99, "Many", "Too Many", CLASS_DATA("Data", 8));
	EXCEPT_META(metaInvokeMethod(method.get(), pobj, 1));

	METHOD(methodSum);
	GEQUAL(fromVariant<int>(metaInvokeMethod(method.get(), pobj)), (0));
	GEQUAL(fromVariant<int>(metaInvokeMethod(method.get(), pobj, 1, 2, 3)), (1 + 2 + 3));
	GEQUAL(fromVariant<int>(metaInvokeMethod(method.get(), pobj,
		18, 56, 102, 192, 3103, 39, 52, 691, 819, 130, 397, 19385
		)), (
		18 + 56 + 102 + 192 + 3103 + 39 + 52 + 691 + 819 + 130 + 397 + 19385
		));

	METHOD(methodManySum);
	EXCEPT_META(fromVariant<int>(metaInvokeMethod(method.get(), pobj)));
	int result = 0;
	metaInvokeMethod(method.get(), pobj, &result, 1, 2, 3);
	GEQUAL(result, (1 + 2 + 3));
	metaInvokeMethod(method.get(), pobj, &result,
		18, 56, 102, 192, 3103, 39, 52, 691, 819, 130, 397, 19385
		);
	GEQUAL(result, (
		18 + 56 + 102 + 192 + 3103 + 39 + 52 + 691 + 819 + 130 + 397 + 19385
		));

	pobj->fieldMethodInt = 17;
	METHOD(methodExplicitThis);
	GEQUAL(fromVariant<int>(metaInvokeMethod(method.get(), pobj, 38)), 17 + 38);

	pobj->fieldMethodInt = 17;
	METHOD(methodExplicitThisSum);
	result = 0;
	metaInvokeMethod(method.get(), pobj, &result, 38, 69, 58);
	GEQUAL(result, 17 + 38 + 69 + 58);

	pobj->fieldMethodInt = 17;
	pobj->fieldMethodString = "abc";
	METHOD(methodFunctor);
	GEQUAL(fromVariant<int>(metaInvokeMethod(method.get(), pobj, 38, "hello")), 17 + 38 + 3 + 5);
}
#endif


#ifndef G_COMPILER_CPPBUILDER
GTEST(Lib_Execute)
{
	const GMetaClass * metaClass = findMetaClass(NAME_CLASS);
	GCHECK(metaClass);

	const GMetaMethod * method;

	CLASS instance;
	CLASS * pobj = &instance;

	GVariant params[20];

	pobj->fieldMethodInt = 910;
	METHOD(methodGetInt);
	GEQUAL(fromVariant<int>(method->execute(pobj, params, 0)), 910);

	METHOD(methodAddInt);
	method->invoke(pobj, 2);
	GEQUAL(pobj->fieldMethodInt, 912);

	pobj->fieldMethodString = "";
	METHOD(methodRefString);
	string & refString = fromVariant<string &>(method->execute(pobj, params, 0));
	GEQUAL(&pobj->fieldMethodString, &refString);
	refString = "reffff";
	GEQUAL(pobj->fieldMethodString, "reffff");

	pobj->fieldMethodString = "a";
	METHOD(methodConcatString);
	params[0] = "bc";
	string s = fromVariant<string>(method->execute(pobj, params, 1));
	GEQUAL(s, "abc");
	GEQUAL(pobj->fieldMethodString, "abc");

	pobj->fieldMethodString = "bc";
	pobj->fieldMethodInt = 6;
	CLASS_DATA data("a", 5);
	METHOD(methodAddData);
	params[0] = data;
	CLASS_DATA newData = fromVariant<CLASS_DATA>(method->execute(pobj, params, 1));
	GEQUAL(data.s, "a");
	GEQUAL(data.i, 5);
	GEQUAL(newData.s, "abc");
	GEQUAL(newData.i, 11);

	pobj->fieldMethodString = "abc";
	pobj->fieldMethodInt = 6;
	data = CLASS_DATA("", 0);
	GDIFF(data.s, "abc");
	GDIFF(data.i, 6);
	METHOD(methodMakeData);
	params[0] = data;
	method->execute(pobj, params, 1);
	GEQUAL(data.s, "abc");
	GEQUAL(data.i, 6);

	pobj->fieldMethodString = "abc";
	pobj->fieldMethodInt = 6;
	data = CLASS_DATA("", 0);
	GDIFF(data.s, "abc");
	GDIFF(data.i, 6);
	METHOD(methodMakeDataByPointer);
	params[0] = &data;
	method->execute(pobj, params, 1);
	GEQUAL(data.s, "abc");
	GEQUAL(data.i, 6);

	METHOD(methodGetNCData);
	{
		params[0] = 1;
		const NC_DATA & nc = fromVariant<const NC_DATA &>(method->execute(NULL, params, 1));
		GEQUAL(nc.i, 1);
	}
	{
		params[0] = 5;
		const NC_DATA & nc = fromVariant<const NC_DATA &>(method->execute(NULL, params, 1));
		GEQUAL(nc.i, 5);
	}
	
	METHOD(methodManyParams);
	params[0] = 'A'; params[1] = 38; params[2] = 9876532198765321LL;
	params[3] = 1.99; params[4] = "Many"; params[5] = "Too Many";
	data = CLASS_DATA("Data", 8);
	params[6] = data;
	method->execute(pobj, params, 7);

	METHOD(methodSum);
	GEQUAL(fromVariant<int>(method->execute(pobj, params, 0)), (0));
	params[0] = 1; params[1] = 2; params[2] = 3;
	GEQUAL(fromVariant<int>(method->execute(pobj, params, 3)), (1 + 2 + 3));
	params[0] = 18; params[1] = 56; params[2] = 102; params[3] = 192; params[4] = 3103;
	params[5] = 39; params[6] = 52; params[7] = 691, params[8] = 819; params[9] = 130;
	params[10] = 397; params[11] = 19385;
	GEQUAL(fromVariant<int>(method->execute(pobj, params, 12)), (
		18 + 56 + 102 + 192 + 3103 + 39 + 52 + 691 + 819 + 130 + 397 + 19385
		));

	METHOD(methodManySum);
	EXCEPT_META(fromVariant<int>(method->execute(pobj, params, 0)));
	int result = 0;
	params[0] = &result, params[1] = 1; params[2] = 2; params[3] = 3;
	method->execute(pobj, params, 4);
	GEQUAL(result, (1 + 2 + 3));
	params[0] = &result, params[1] = 18; params[2] = 56; params[3] = 102; params[4] = 192; params[5] = 3103;
	params[6] = 39; params[7] = 52; params[8] = 691, params[9] = 819; params[10] = 130;
	params[11] = 397; params[12] = 19385;
	method->execute(pobj, params, 13);
	GEQUAL(result, (
		18 + 56 + 102 + 192 + 3103 + 39 + 52 + 691 + 819 + 130 + 397 + 19385
		));
}
#endif


GTEST(Lib_PassParamByValueAndRef)
{
	const GMetaClass * metaClass = findMetaClass(NAME_CLASS);
	GCHECK(metaClass);

	const GMetaMethod * method;

	CLASS instance;
	CLASS * pobj = &instance;

	CLASS_DATA data("abc", 5);
	CLASS_DATA newData;

	pobj->fieldMethodInt = 2;
	pobj->fieldMethodString = "def";

	METHOD(methodAddData);
	newData = fromVariant<CLASS_DATA>(method->invoke(pobj, data));
	GEQUAL(data.i, 5); // data should not be changed because it was passed by value
	GDIFF(newData, data);
	GEQUAL(newData, pobj->methodAddData(data));

	pobj->fieldMethodInt = 2;
	pobj->fieldMethodString = "def";
	data.reset();

	GDIFF(data.i, pobj->fieldMethodInt);
	GDIFF(data.s, pobj->fieldMethodString);
	METHOD(methodMakeData);
	method->invoke(pobj, data);
	GEQUAL(data.i, pobj->fieldMethodInt);
	GEQUAL(data.s, pobj->fieldMethodString);
	EXCEPT_VARIANT(method->invoke(pobj, 1))

	pobj->fieldMethodInt = 2;
	pobj->fieldMethodString = "def";
	data.reset();

	GDIFF(data.i, pobj->fieldMethodInt);
	GDIFF(data.s, pobj->fieldMethodString);
	METHOD(methodMakeDataByPointer);
	method->invoke(pobj, &data);
	GEQUAL(data.i, pobj->fieldMethodInt);
	GEQUAL(data.s, pobj->fieldMethodString);

	pobj->fieldMethodInt = 2;
	pobj->fieldMethodString = "def";
	data.reset();

	GDIFF(data.i, pobj->fieldMethodInt);
	GDIFF(data.s, pobj->fieldMethodString);
	METHOD(methodMakeDataByPointer);
	method->invoke(pobj, data);
	GEQUAL(data.i, pobj->fieldMethodInt);
	GEQUAL(data.s, pobj->fieldMethodString);
}



} }

