#include<iostream>
using namespace std;
int main()
{
	char str[100];
	memset(str,0,sizeof(str));
	cin.getline(str,81,'\n');
	int len=strlen(str);
	for (int i=0;i<len;i++)
	{
		if (i==0&&isalpha(str[i])&&str[i]>=97) str[i]-=32;
		if (isalpha(str[i])&&str[i-1]==' '&&str[i]>=97) str[i]-=32;
	}
	cout<<str;
	system("pause");
	return 0;
}