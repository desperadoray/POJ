#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double x1,x2;
	x1=0;x2=0;
	double a,b,c;
	cout<<"请分别输入一元二次方程系数a, b, c的值"<<endl;
	cin>>a>>b>>c;
	if (b*b<4*a*c) cout<<"无解"<<endl;
	else
	{
		 x1=(-b+sqrt((double)(b*b-4*a*c)))/(2*a);
		 x2=(-b-sqrt((double)(b*b-4*a*c)))/(2*a);
		 cout<<fixed<<setprecision(2)<<"一元二次方程的解为:"<<"x1="<<x1<<";"<<"x2="<<x2<<";"<<endl;
	}
	system("pause");
	return 0;
}