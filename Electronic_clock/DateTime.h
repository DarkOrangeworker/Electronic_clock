#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

class DateTime
{
	private:
	int hour,minute,second,year,month,day,today;
	public:
		void Settime(int sethour,int setminute,int setsecond,int setyear,int setmonth,int setday);
		void Showtime();	
		void addOnesec();
		void autoaddOnesec();
};
