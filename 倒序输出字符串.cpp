#include<iostream>
using namespace std;
void f()
{
       char c;
	   c=cin.get();
	   if (c!='/n') f();
	   cout<<c;
}
int main()
{
	f();
	system("pause");
	return 0;
}