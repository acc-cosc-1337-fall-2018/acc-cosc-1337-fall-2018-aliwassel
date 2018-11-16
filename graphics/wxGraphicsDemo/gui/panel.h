#ifndef PANEL_H
#define PANEL_H
#include<wx/wx.h>
#include<vector>
#include<string>
#include<memory>
#include "text.h"
#include "circle.h"

#include"rectangle.h"

class Panel : public wxPanel 
{
public:
	Panel(wxWindow* parent);
private:
	void OnDraw(wxMouseEvent& event);
	void OnMouseUp(wxMouseEvent & event);
	void OnMouseDown(wxMouseEvent & event);
	void draw_shape(Point p, int width=10, int  height=5, radius=25 );

	wxTextCtrl* draw_text;
	wxRadioBox* radio_box;
	Point coord{0,0};
};

#endif // !PANEL_H
