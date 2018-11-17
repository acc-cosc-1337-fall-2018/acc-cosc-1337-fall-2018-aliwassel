#include"app.h"
#include"frame.h"

bool APP :: OnInit()
{
	auto frame = new Frame(); // new  means pointer 
	frame->Show(true);


	return true;

}