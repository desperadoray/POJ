#include<iostream>
#include<string>
using namespace std;
void change (char a[])
{
	int len;
	for (len=0;a[len]!='\0';len++);
	int i;
	for (i=0;i<=len-1;i++)
		if (a[i]<97) a[i]=a[i]+32;
}
int main()
{
	char str1[100],str2[100];
	gets(str1);
	gets(str2);
	change(str1);
	change(str2);
	int r;
	r=strcmp(str1,str2);
	if (r>0) cout<<">";
	else if (r==0) cout<<"=";
	else if (r<0) cout<<"<";
	system("pause");
	return 0;
}
