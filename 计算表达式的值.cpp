#include<iostream>
using namespace std;
int fun(int a,int b,char str[])
{
	if (strcmp(str,"add")==0) return a+b;
	if (strcmp(str,"sub")==0) return a-b;
	if (strcmp(str,"mul")==0) return a*b;
	if (strcmp(str,"div")==0) return a/b;
	if (strcmp(str,"mod")==0) return a%b;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a,b;char str[4];
		cin>>a>>str>>b;
		cout<<fun(a,b,str)<<endl;
	}
	system("pause");
	return 0;
}