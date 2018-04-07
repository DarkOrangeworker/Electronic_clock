#include "DateTime.h"

void DateTime::Settime(int sethour,int setminute,int setsecond,int setyear,int setmonth,int setday)
{
	int settoday;
	hour = sethour;
	minute = setminute;
	second = setsecond;
	year = setyear;
	month = setmonth;
	day = setday;
	int tmpmonth,tmpyear;
	tmpmonth = month;
	tmpyear = year;
    //日期转星期 
    if (tmpmonth == 1)
    {
    	tmpmonth = 13;
    	tmpyear--;
	}
	if (tmpmonth == 2)
	{
		tmpmonth = 14;
		tmpyear--;
	}
	today = (day + 2 * tmpmonth + 3 * (tmpmonth + 1) / 5 + tmpyear + tmpyear / 4 - tmpyear /100 + tmpyear / 400) % 7 + 1;
}

void DateTime::Showtime()
{
	cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
	cout << setfill('0') << setw(4) << year << "年";
	cout << setfill('0') << setw(2) << month << "月" << day << "日" << " " << "星期" << today << endl;
}

void DateTime::addOnesec()
{
	second++;
	if (second == 60)
	{
	minute++;
	second = 0;
	} 
	if (minute == 60)
	{
	hour++;
	minute = 0;
	}
	if (hour == 24)
	{
	hour = 0;
	minute = 0;
	second = 0;
	}
	if (hour == 0 && minute == 0 && second == 0)
	{
		day++;
		today++;
	}
	if (today == 8)
	{
		today = 1;
	} 
	if (month == 1 && day == 32)
	{
		month = 2;
		day = 1;
	}
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		if (month == 2 && day == 30)
		{
			month = 3;
			day = 1;
		}
	}
	else
	{
		if (month == 2 && day == 29)
		{
			month = 3;
			day = 1;
		}
	}
	if (month == 3 && day == 32)
	{
		month = 4;
		day = 1;
	}
	if (month == 4 && day == 31)
	{
		month = 5;
		day = 1;
	}
	if (month == 5 && day == 32)
	{
		month = 6;
		day = 1;
	}
	if (month == 6 && day == 31)
	{
		month = 7;
		day = 1;
	}
	if (month == 7 && day == 32)
	{
		month = 8;
		day = 1;
	}
	if (month == 8 && day == 32)
	{
		month = 9;
		day = 1;
	}
	if (month == 9 && day == 31)
	{
		month = 10;
		day = 1;
	}
	if (month == 10 && day == 32)
	{
		month = 11;
		day = 1;
	}
	if (month == 11 && day == 31)
	{
		month = 12;
		day = 1;
	}
	if (month == 12 && day == 32)
	{
		month = 1;
		day = 1;
		year++; 
	}
}

void DateTime::autoaddOnesec()
{
	while(1)
	{
		system("cls");
		Showtime();
		Sleep(1000);
		addOnesec();
	}
}
