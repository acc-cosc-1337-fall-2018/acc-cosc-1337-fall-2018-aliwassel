#include "clock.h"

/*
Write code to return hours given seconds since 1970

*/
int Clock::get_hours() const
{
	return seconds / 3600 % 24;
}

/*
Write code to return minutes given seconds since 1970

*/

int Clock::get_minutes() const
{
	return seconds / 60 % 60;
}

/*
Write code to return seconds given seconds since 1970

*/
int Clock::get_seconds() const
{
	return seconds % 60;
}

/*
Write code to return 12hour formatted time 
*/
std::string Clock::get_time() const
{
	auto hours = get_hours();
	auto minutes = get_minutes();
	auto seconds = get_seconds();

	
	string show_digital_time = (to_string(hours) + " : " + to_string(minutes) + ":" + to_string(seconds));
	
	return show_digital_time;
}

void Clock::update_time()
{
	seconds += 1;
}
