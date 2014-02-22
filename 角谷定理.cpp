#include<iostream>
using namespace std;
int step=0;
void f(int a)
{
	cout<<a<<" ";
	if (a!=1)
	{
		step++;
	if (a%2==0)
		f(a/2);
	else
	   f(3*a+1);
	}
}
int main()
{
	int n;
	cin>>n;
    f(n);
	cout<<endl;
	cout<<"STEP="<<step+1;;
	system("pause");
	return 0;
}