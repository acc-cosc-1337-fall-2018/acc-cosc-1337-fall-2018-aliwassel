#include "panel.h"
#include "frame.h"
#include"menu_bar.h"

Frame::Frame()
	:wxFrame(NULL, wxID_ANY, "Hello world", wxDefaultPosition, wxSize(1280,760)) // calling parent constructor and pass param
{
	auto panel = new Panel(this);

	auto bar = new MenuBar;
	SetMenuBar(bar);
	CreateStatusBar();
	SetStatusText("Welcome to wx Widgets!");
	Bind(wxEVT_MENU, &Frame::OnAbout, this, wxID_ABOUT);
	Bind(wxEVT_MENU, &Frame::OnHello, this, ID_Hello);
	Bind(wxEVT_MENU, &Frame::OnExit, this, wxID_EXIT);
}


void Frame::OnHello(wxCommandEvent & event)
{
	wxMessageBox("Hello world!",
		"About Hello world", wxOK | wxICON_INFORMATION);
}

void Frame::OnExit(wxCommandEvent & event)
{
	Close(true);
}

void Frame::OnAbout(wxCommandEvent & event)
{
	wxLogMessage("Hello wxWidgets!");
	
}
