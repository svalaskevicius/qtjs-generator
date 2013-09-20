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


#include "panelease.h"
#include "../easeinfo.h"

#include "wx/radiobut.h"

using namespace cpgf;

PanelEase::PanelEase(wxWindow * parent)
	: super(parent)
{
	wxBoxSizer * mainSizer;
	mainSizer = new wxBoxSizer(wxHORIZONTAL);

	wxGridSizer * easeSizer;
	easeSizer = new wxGridSizer(3, 5, 3);

	mainSizer->Add(easeSizer, 0, wxEXPAND, 5);
	
	this->initEaseButtons(easeSizer);

	this->SetSizer(mainSizer);
	this->Layout();
}

PanelEase::~PanelEase()
{
}

const int EaseButtonStartID = 1000;

void PanelEase::initEaseButtons(wxSizer * sizer)
{
	for(int i = 0; i < getEaseCount(); ++i) {
		wxRadioButton * button = new wxRadioButton(this, EaseButtonStartID + i, getEase(i)->name, wxDefaultPosition, wxSize(150, 30), 0);
		sizer->Add(button, 0, 0, 5);
		button->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler(PanelEase::onEaseButtonClicked), NULL, this );
		if(i == 18) { // quad-in
			button->SetValue(true);
			this->easeIndex = i;
		}
	}
}

void PanelEase::onEaseButtonClicked(wxCommandEvent& e)
{
	this->easeIndex = e.GetId() - EaseButtonStartID;
	this->callbackList.dispatch(this->easeIndex);
}

void PanelEase::addCallback(const CallbackType & callback)
{
	this->callbackList.add(callback);
}

