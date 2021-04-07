#pragma once

#include "wx/wx.h"
#include <wx/clrpicker.h>
#include <wx/frame.h>
#include <wx/bannerwindow.h>
#include <string>


class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

public:
	wxButton *btn1 = nullptr;
	wxButton* btn2 = nullptr;
	wxButton* btn3 = nullptr;
	wxButton* btn4 = nullptr;
	wxButton* btn5 = nullptr;
	wxButton* btn6 = nullptr;
	wxButton* btn7 = nullptr;
	wxButton* btn8 = nullptr;
	wxButton* btn9 = nullptr;
	wxButton* btn0 = nullptr;
	wxButton* plus = nullptr;
	wxButton* minus = nullptr;
	wxButton* div = nullptr;
	wxButton* mul = nullptr;
	wxButton* eq = nullptr;
	wxListBox *ans = nullptr;

	std::string first;
	std::string second;
	std::string answer;
	long double first1;
	long double second2;
	long double ans1;
	int operation = 0;

	void One(wxCommandEvent &evt);
	void Two(wxCommandEvent& evt);
	void Three(wxCommandEvent& evt);
	void Four(wxCommandEvent& evt);
	void Five(wxCommandEvent& evt);
	void Six(wxCommandEvent& evt);
	void Seven(wxCommandEvent& evt);
	void Eight(wxCommandEvent& evt);
	void Nine(wxCommandEvent& evt);
	void Zero(wxCommandEvent& evt);
	void Plus(wxCommandEvent& evt);
	void Minus(wxCommandEvent& evt);
	void Div(wxCommandEvent& evt);
	void Mul(wxCommandEvent& evt);
	void Eq(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

