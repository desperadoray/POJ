#include<iostream>
using namespace std;
void f(int a)
{
	cout<<a%10;
    if (a/10!=0) f(a/10); 
}
int main()
{
	int num;
	cin>>num;
    f(num);
	system("pause");
	return 0;
}
