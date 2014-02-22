#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	while(cin>>a)
	{
	int l;
	l=a.length();
	int i;
	for (i=0;i<l;i++)
	{
		a[i]=(char)(a[i]-32);
		cout<<a[i];
	}
	cout<<endl;
	}
	system("pause");
	return 0;

}