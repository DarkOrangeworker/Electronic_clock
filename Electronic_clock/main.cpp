#include "DateTime.h"

int main(void)
{
	DateTime t;
	int sethour,setminute,setsecond,setyear,setmonth,setday;
	cout << "������(hour minute second year month day):" << endl;
	cin >> sethour >> setminute >> setsecond >> setyear >> setmonth >> setday;
	t.Settime(sethour,setminute,setsecond,setyear,setmonth,setday);				//�û�����ֵ 
	t.autoaddOnesec();															//�Զ���һ�� 
	return 0;
}
