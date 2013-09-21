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


#ifndef __PANELEASE_H
#define __PANELEASE_H

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4996)
#endif

#include "cpgf/gcallbacklist.h"

#include "wx/panel.h"
#include "wx/sizer.h"
#include "wx/button.h"

class PanelEase : public wxPanel
{
private:
	typedef wxPanel super;
	typedef cpgf::GCallback<void (int)> CallbackType;
	typedef cpgf::GCallbackList<void (int)> CallbackListType;
	
public:
	explicit PanelEase(wxWindow * parent);
	~PanelEase();

	void addCallback(const CallbackType & callback);

	int getEaseIndex() const { return this->easeIndex; }
	
private:
	void initEaseButtons(wxSizer * sizer);
	void onEaseButtonClicked(wxCommandEvent& event);
	
private:
	CallbackListType callbackList;
	int easeIndex;
};


#if defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif
