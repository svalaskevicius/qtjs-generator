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


#ifndef __CHAINEDOBJECTACCESS_H
#define __CHAINEDOBJECTACCESS_H

class ChainedObjectA
{
public:
	ChainedObjectA() : a(1) {}
	virtual ~ChainedObjectA() {}

	int getA() const { return this->doGetA(); }
	
protected:
	virtual int doGetA() const { return this->a; }
private:
	int a;
};

class ChainedObjectB
{
public:
	ChainedObjectB() {}
	virtual ~ChainedObjectB() {}
	
	ChainedObjectA & getA() { return this->a; }
	const ChainedObjectA & getConstA() const { return this->a; }

private:
	ChainedObjectA a;
};


class ChainedObjectC
{
public:
	ChainedObjectC() {}
	virtual ~ChainedObjectC() {}
	
	ChainedObjectB & getB() { return this->b; }
	const ChainedObjectB & getConstB() const { return this->b; }

private:
	ChainedObjectB b;
};


#endif
