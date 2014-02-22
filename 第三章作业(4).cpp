#include<iostream>
#include<stack>
using namespace std;
double fun1(int n)
{
	stack<double> s;
	double temp;
	double m=1.0;
	while (n!=1)
	{
		if (n%2==0) s.push(1.0/n);
		if (n%2==1) s.push((-1)*(1.0/n));
		n--;
	}
	while (!s.empty())
	{
		temp=s.top();
		s.pop();
		m+=temp;
	}
	return m;
}
double fun(int m)
{
	if (m==1) return 1;
	else
	{
		if (m%2==1) return fun(m-1)-(double)(1.0/m);
		else return fun(m-1)+(double)(1.0/m);
	}
}


int main()
{
	int n;
	while (cin>>n)
	{
	cout<<fun1(n)<<endl;
	cout<<fun(n)<<endl;
	}
	system("pause");
}