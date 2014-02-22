#include<iostream>
using namespace std;
struct clock
{
	int hour;
	int minute;
	int second;
}aClock;
void updata()
{
   aClock.second++;
   if (aClock.second==60)
   {
	   aClock.second=0;
	   aClock.minute++;
   }
   if (aClock.minute==60)
   {
	   aClock.minute=0;
	   aClock.hour++;
   }
   if (aClock.hour==24)
	   aClock.hour=0;
}
void display()
{
	cout<<aClock.hour<<":"<<aClock.minute<<":"<<aClock.second<<endl;
}
void main()
{
	aClock.hour=aClock.minute=aClock.second=0;
	for (int i=0;i<10000;i++)
	{
		updata();
		display();
		for (int p=0;p<=3500;p++)
			for (int j=0;j<=99999;j++);
				for (int k=0;k<=99999;k++);
	}
	system("pause");
}