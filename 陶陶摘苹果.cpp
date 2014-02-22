#include<iostream>
using namespace std;
int main()
{
	int a[10];
    int i,h,t=0;
	for (i=0;i<=9;i++)
		cin>>a[i];
	cin>>h;
	for (i=0;i<=9;i++)
			if (a[i]<=h+30) t++;
	cout<<t;
	system("pause");
	return 0;
}