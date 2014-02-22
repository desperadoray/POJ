#include<iostream>
#include<iomanip>
using namespace std;
double fun(int n)
{
	double m=1;
	for (int i=1;i<=n;i++)
		m*=i;
	return m;
}
int main()
{
	int n;
	cin>>n;
	double e=1;
	for (int i=1;i<=n;i++)
		e+=1/fun(i);
	cout<<fixed<<setprecision(10)<<e;
	system("pause");
	return 0;
}