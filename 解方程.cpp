#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double x1,x2;
	x1=0;x2=0;
	double a,b,c;
	cout<<"��ֱ�����һԪ���η���ϵ��a, b, c��ֵ"<<endl;
	cin>>a>>b>>c;
	if (b*b<4*a*c) cout<<"�޽�"<<endl;
	else
	{
		 x1=(-b+sqrt((double)(b*b-4*a*c)))/(2*a);
		 x2=(-b-sqrt((double)(b*b-4*a*c)))/(2*a);
		 cout<<fixed<<setprecision(2)<<"һԪ���η��̵Ľ�Ϊ:"<<"x1="<<x1<<";"<<"x2="<<x2<<";"<<endl;
	}
	system("pause");
	return 0;
}