#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(10001, One)
	EVT_BUTTON(10002, Two)
	EVT_BUTTON(10003, Three)
	EVT_BUTTON(10004, Four)
	EVT_BUTTON(10005, Five)
	EVT_BUTTON(10006, Six)
	EVT_BUTTON(10007, Seven)
	EVT_BUTTON(10008, Eight)
	EVT_BUTTON(10009, Nine)
	EVT_BUTTON(10000, Zero)
	EVT_BUTTON(101, Plus)
	EVT_BUTTON(102, Minus)
	EVT_BUTTON(103, Div)
	EVT_BUTTON(104, Mul)
	EVT_BUTTON(105, Eq)

wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculate it!",wxPoint(30,30),wxSize(276,400), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX)) //title,point where loads,size
{
	SetBackgroundColour("AQUAMARINE"); //to change color
	plus = new wxButton(this, 101, "+", wxPoint(190, 260), wxSize(60, 60));
	plus = new wxButton(this, 102, "-", wxPoint(190, 200), wxSize(60, 60));
	plus = new wxButton(this, 103, "/", wxPoint(190, 80), wxSize(60, 60));
	plus = new wxButton(this, 104, "X", wxPoint(190, 140), wxSize(60, 60));
	eq = new wxButton(this, 105, "=", wxPoint(130, 260), wxSize(60, 60));
	btn1 = new wxButton(this, 10001, "1", wxPoint(10, 200), wxSize(60, 60));
	btn2 = new wxButton(this, 10002, "2", wxPoint(70, 200), wxSize(60, 60));
	btn3 = new wxButton(this, 10003, "3", wxPoint(130, 200), wxSize(60, 60));
	btn4 = new wxButton(this, 10004, "4", wxPoint(10, 140), wxSize(60, 60));
	btn5 = new wxButton(this, 10005, "5", wxPoint(70, 140), wxSize(60, 60));
	btn6 = new wxButton(this, 10006, "6", wxPoint(130, 140), wxSize(60, 60));
	btn7 = new wxButton(this, 10007, "7", wxPoint(10, 80), wxSize(60, 60));
	btn8 = new wxButton(this, 10008, "8", wxPoint(70, 80), wxSize(60, 60));
	btn9 = new wxButton(this, 10009, "9", wxPoint(130, 80), wxSize(60, 60));
	btn0 = new wxButton(this, 10000, "0", wxPoint(10, 260), wxSize(120, 60));
	ans = new wxListBox(this, wxID_ANY, wxPoint(10, 10), wxSize(240, 60));
	
}

cMain::~cMain()
{

}

void cMain::One(wxCommandEvent& evt)
{
	if (operation == 0) //If operation hasn't been clicked -> first number is being effected
	{
		first = first + "1"; //Adds function's number to string for first number
		ans->AppendString(first); //Sends to ans (wxListBox)
		ans->SetSelection(ans->GetCount() - 1); //Makes sure most recent number added to ans (wxListBox) is scrolled to
	}
	else //If operation has been clicked -> second number is being effected
	{
		second = second + "1"; //Adds function's number to string for second number
		ans->AppendString(second); //Sends to ans (wxListBox)
		ans->SetSelection(ans->GetCount() - 1); //Makes sure most recent number added to ans (wxListBox) is scrolled to
	}
	evt.Skip();
}
void cMain::Two(wxCommandEvent& evt) //Same funcionality at function "One"
{
	if (operation == 0)
	{
		first = first + "2";
		ans->AppendString(first);
		ans->SetSelection(ans->GetCount() - 1);
	}
	else
	{
		second = second + "2";
		ans->AppendString(second);
		ans->SetSelection(ans->GetCount() - 1);
	}
	evt.Skip();
}
void cMain::Three(wxCommandEvent& evt) //Same funcionality at function "One"
{
	if (operation == 0)
	{
		first = first + "3";
		ans->AppendString(first);
		ans->SetSelection(ans->GetCount() - 1);
	}
	else
	{
		second = second + "3";
		ans->AppendString(second);
		ans->SetSelection(ans->GetCount() - 1);
	}
	evt.Skip();
}
void cMain::Four(wxCommandEvent& evt) //Same funcionality at function "One"
{
	if (operation == 0)
	{
		first = first + "4";
		ans->AppendString(first);
		ans->SetSelection(ans->GetCount() - 1);
	}
	else
	{
		second = second + "4";
		ans->AppendString(second);
		ans->SetSelection(ans->GetCount() - 1);
	}
	evt.Skip();
}
void cMain::Five(wxCommandEvent& evt) //Same funcionality at function "One"
{
	if (operation == 0)
	{
		first = first + "5";
		ans->AppendString(first);
		ans->SetSelection(ans->GetCount() - 1);
	}
	else
	{
		second = second + "5";
		ans->AppendString(second);
		ans->SetSelection(ans->GetCount() - 1);
	}
	evt.Skip();
}
void cMain::Six(wxCommandEvent& evt) //Same funcionality at function "One"
{
	if (operation == 0)
	{
		first = first + "6";
		ans->AppendString(first);
		ans->SetSelection(ans->GetCount() - 1);
	}
	else
	{
		second = second + "6";
		ans->AppendString(second);
		ans->SetSelection(ans->GetCount() - 1);
	}
	evt.Skip();
}
void cMain::Seven(wxCommandEvent& evt) //Same funcionality at function "One"
{
	if (operation == 0)
	{
		first = first + "7";
		ans->AppendString(first);
		ans->SetSelection(ans->GetCount() - 1);
	}
	else
	{
		second = second + "7";
		ans->AppendString(second);
		ans->SetSelection(ans->GetCount() - 1);
	}
	evt.Skip();
}
void cMain::Eight(wxCommandEvent& evt) //Same funcionality at function "One"
{
	if (operation == 0)
	{
		first = first + "8";
		ans->AppendString(first);
		ans->SetSelection(ans->GetCount() - 1);
	}
	else
	{
		second = second + "8";
		ans->AppendString(second);
		ans->SetSelection(ans->GetCount() - 1);
	}
	evt.Skip();
}
void cMain::Nine(wxCommandEvent& evt) //Same funcionality at function "One"
{
	if (operation == 0)
	{
		first = first + "9";
		ans->AppendString(first);
		ans->SetSelection(ans->GetCount() - 1);
	}
	else
	{
		second = second + "9";
		ans->AppendString(second);
		ans->SetSelection(ans->GetCount() - 1);
	}
	evt.Skip();
}
void cMain::Zero(wxCommandEvent& evt) //Same funcionality at function "One"
{
	if (operation == 0)
	{
		first = first + "0";
		ans->AppendString(first);
		ans->SetSelection(ans->GetCount() - 1);
	}
	else
	{
		second = second + "0";
		ans->AppendString(second);
		ans->SetSelection(ans->GetCount() - 1);
	}
	evt.Skip();
}
void cMain::Plus(wxCommandEvent& evt)
{
	if (first != "") //Checks to make sure operator doesn't get clicked before first number is input
	{
		operation = 1; //Sets what operator is used for future use (eq function)
		ans->AppendString("+"); //Sends to ans (wxListBox)
		ans->SetSelection(ans->GetCount() - 1); //Makes sure operation added to ans (wxListBox) is scrolled to
		evt.Skip();
	}
}
void cMain::Minus(wxCommandEvent& evt) //Same functionality as function "Plus"
{
	if (first != "")
	{
		operation = 2;
		ans->AppendString("-");
		ans->SetSelection(ans->GetCount() - 1);
		evt.Skip();
	}
}
void cMain::Div(wxCommandEvent& evt) //Same functionality as function "Plus"
{
	if (first != "")
	{
		operation = 3;
		ans->AppendString("/");
		ans->SetSelection(ans->GetCount() - 1);
		evt.Skip();
	}
}
void cMain::Mul(wxCommandEvent& evt) //Same functionality as function "Plus"
{
	if (first != "")
	{
		operation = 4;
		ans->AppendString("X");
		ans->SetSelection(ans->GetCount() - 1);
		evt.Skip();
	}
}
void cMain::Eq(wxCommandEvent& evt)
{
	int i;
	if (first == "") //Checks if first is empty and if so sets string to 0
	{
		first = "0";
	}
	if (second == "") //Checks if second is empty and if so sets string to 0
	{
		second = "0";
	}
	first1 = stoi(first); //Converts string to double
	second2 = stoi(second); //Converts string to double
	if (operation == 1) //+
	{
		ans1 = first1 + second2; //Executes operation on doubles
	}
	else if (operation == 2) //-
	{
		ans1 = first1 - second2; //Executes operation on doubles
	}
	else if (operation == 3) // /
	{
		ans1 = first1/second2; //Executes operation on doubles
	}
	else if (operation == 4) //X
	{
		ans1 = first1 * second2; //Executes operation on doubles
	}
	answer = std::to_string(ans1); //Turns double back into string
	i = answer.size() - 1;
	while(answer[i] == '0') //Runs until excess zeros from double conversion are gone
	{
		answer[i] = ' ';
		i--;
	}
	if (answer[i] == '.') //If no decimal value -> remove decimal point
	{
		answer[i] = ' ';
	}
	ans->AppendString(answer); //Sends final answer to ans (wxListBox)
	ans->SetSelection(ans->GetCount() - 1); //Makes sure operation added to ans (wxListBox) is scrolled to
	first = ""; //Resets first to an empty string
	second = ""; //Resets second to an empty string
	operation = 0; //Resets operation used
	evt.Skip();
}
