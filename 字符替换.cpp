#include<iostream>
using namespace std;
char str[40];
char a,b;
void func(char str[40],char a,char b)
{
	for (int i=0;str[i]!='\0';i++)
		if (str[i]==a) str[i]=b;
}
int main()
{
	int n;
	cin>>n;
	cin.get();
	while(n--)
	{
		memset(str,0,sizeof(str));
		cin>>str;
		cin>>a>>b;
		func(str,a,b);
		cout<<str<<endl;
	}
	system("pause");
	return 0;
}