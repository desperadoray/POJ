#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str1[101],str2[101];
	memset(str1,0,sizeof(str1));
	memset(str2,0,sizeof(str2));
	while (cin.getline(str1,101,'\n'))
	{
	int flag[101]={0},j,i;
	int len1=strlen(str1);
	int len2=len1;
	for (i=0;i<len1;i++)
	{
		if (isalnum(str1[i])) {flag[i]=0;str2[i]=' ';}
		if (str1[i]=='(') flag[i]=1;
		if (str1[i]==')') flag[i]=2;
	}
	int t=0;
	while (t<=50)
	{
		t++;
    for (i=0;i<len1;i++)
	   {
		   if (flag[i]==1)
		   {
			   int sum=0;j=i+1;
			   while (flag[j]!=2&&str1[j]!='\0')
			   {
				   sum+=flag[j];
				   j++;
			   }
			   if (sum==0&&j<len1)
			   {
				   flag[i]=0;
				   flag[j]=0;
				   str2[i]=' ';
				   str2[j]=' ';
			   }			   
		   }
	   }
	}
	for (i=0;i<len1;i++)
	{
		if (flag[i]==1) str2[i]='$';
		if (flag[i]==2) str2[i]='?';
	}
	str2[len2]='\0';
	cout<<str1<<endl;
	cout<<str2<<endl;
	}
	return 0;
}