#include "DateTime.h"

int main(void)
{
	DateTime t;
	int sethour,setminute,setsecond,setyear,setmonth,setday;
	cout << "请输入(hour minute second year month day):" << endl;
	cin >> sethour >> setminute >> setsecond >> setyear >> setmonth >> setday;
	t.Settime(sethour,setminute,setsecond,setyear,setmonth,setday);				//用户设置值 
	t.autoaddOnesec();															//自动加一秒 
	return 0;
}
