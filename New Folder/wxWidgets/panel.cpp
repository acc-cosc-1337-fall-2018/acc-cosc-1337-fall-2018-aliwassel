#include"panel.h"

Panel::Panel(wxWindow* parent) : wxPanel(parent, -1)
{
	auto vbox = new wxBoxSizer(wxVERTICAL);
	wxString choices[]{ wxT("One"), wxT("two") };

	auto hbox0 = new wxBoxSizer(wxHORIZONTAL);
	radio_box = new wxRadioBox(this, -1, wxT("Choices"), wxDefaultPosition, wxDefaultSize,
		WXSIZEOF(choices), choices, 1, wxRA_SPECIFY_COLS);


	list_box = new wxListBox(this, -1, wxPoint (-1, -1 ), wxSize(-1, -1));

	for (auto option : list_options) 
	{
		list_box->Append(option);
	}

	list_box->Append("item 1");
	list_box->Append("item 2");
	list_box->Bind(wxEVT_LISTBOX, &Panel::OnList, this); // bind it to on list function

	hbox0->Add(list_box);

	hbox0->Add(radio_box);

	auto m_buttonAction = new wxButton(this, -1, wxT("Do something"));

	auto hbox1 = new wxBoxSizer(wxHORIZONTAL);
	auto m_usernameLabe1 = new wxStaticText(this, wxID_ANY, wxT("Name: "),
		wxDefaultPosition, wxSize(70, -1));
	hbox1->Add(m_usernameLabe1, 0);
	
	auto hbox2 = new wxBoxSizer(wxHORIZONTAL);
	/*auto m_buttonAction = new wxButton(this, -1, wxT("Do something"));*/
	m_buttonAction->Bind(wxEVT_BUTTON, &Panel::OnDisplay, this);

	hbox2->Add(m_buttonAction);

	m_nameEntry = new wxTextCtrl(this, wxID_ANY);
	hbox1->Add(m_nameEntry, 1);


	vbox->Add(hbox1, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
	vbox->Add(hbox2, 0, wxALIGN_RIGHT | wxTOP | wxRIGHT | wxTOP, 10);
	vbox->Add(hbox2, 0, wxALIGN_RIGHT | wxTOP | wxRIGHT | wxBOTTOM, 10);
	SetSizer(vbox);




}

void Panel:: OnDisplay(wxCommandEvent & event)
{
	wxMessageBox("Hello " + m_nameEntry->GetValue(),
		"Hello Textbox", wxOK | wxICON_INFORMATION);
	if (radio_box->GetSelection() == 0) 
	{
		wxMessageBox("Radio option: 1",
			"Hello TextBox", wxOK | wxICON_INFORMATION);
	}
	else if (radio_box -> GetSelection()==1)
	{
		wxMessageBox("Radio option: 2",
			"Hello TextBox", wxOK | wxICON_INFORMATION);

	}
}

void Panel::OnList(wxCommandEvent& event)
{

	wxMessageBox(list_options[list_box->GetSelection()],
		"Listbox", wxOK | wxICON_INFORMATION);

	/*if (list_box->GetSelection() == 0)
	{
		wxMessageBox("Item List: 0",
		
	}*/
}