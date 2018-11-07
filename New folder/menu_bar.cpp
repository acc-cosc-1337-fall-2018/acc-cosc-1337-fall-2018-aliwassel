#include "menu_bar.h"
#include"frame.h"
MenuBar::MenuBar()
{
	auto menu_file = new wxMenu;
	menu_file->Append(ID_Hello, "&Hello...\t Ctrl-H ",
		"Help String Shown in menu item status bar");
	menu_file->AppendSeparator();
	menu_file->Append(wxID_EXIT);


	auto menu_hello = new wxMenu;

	menu_hello->Append(wxID_ABORT, "Test");
	

	

}
