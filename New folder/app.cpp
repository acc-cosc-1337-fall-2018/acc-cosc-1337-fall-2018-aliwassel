#include"APP.h"
#include"frame.h"

bool APP :: OnInit()
{
	auto frame = new Frame();
	frame->Show(true);
	return true;

}