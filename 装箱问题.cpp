#include<iostream>
using namespace std;
int main()
{
	int a1,a2,a3,a4,a5,a6;
	int total=0;
	int c1,c2;
	int b2[4]={0,5,3,1};
	while (cin>>a1>>a2>>a3>>a4>>a5>>a6)
	{
		total=0;
		if (a1==0&&a2==0&&a3==0&&a4==0&&a5==0&&a6==0) break;
		total=a4+a5+a6+(a3+3)/4;
		c2=5*a4+b2[a3%4];
		if (a2>c2) total+=(a2-c2+8)/9;
		c1=36*total-36*a6-25*a5-16*a4-9*a3-4*a2;
		if (a1>c1) total+=(a1-c1+35)/36;
		cout<<total<<endl;
	}
	return 0;
}