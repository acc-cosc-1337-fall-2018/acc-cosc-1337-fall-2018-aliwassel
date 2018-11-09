#ifndef PANEL_H
#define PANEL_H
#include<wx/wx.h>
#include <vector>
#include <string >

class Panel: public wxPanel
{
public:
	Panel(wxWindow* parent);


private:

	void OnList(wxCommandEvent& event);
	void OnDisplay(wxCommandEvent& event);
	wxTextCtrl* m_nameEntry;
	wxRadioBox* radio_box;
	wxListBox* list_box; // instance of list box dynamically 
	std::vector<std::string> list_options{ "joe", "larry" ,"curly " };

};
#endif // !PANEL_H
