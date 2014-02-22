#include<iostream>
using namespace std;
int main()
{
	char str1[200],str2[200];
	memset(str1,0,sizeof(str1));
	memset(str2,0,sizeof(str2));
	int a1[200]={0},a2[200]={0};
	cin.getline(str1,200);
	cin.getline(str2,200);
	int len1,len2;
	for (len1=0;str1[len1]!='\0';len1++);
    for (len2=0;str2[len2]!='\0';len2++);
	int i,j=0;
	for (i=len1-1;i>=0;i--)
	{
		a1[j]=str1[i]-'0';
		j++;
	}
	j=0;
	for (i=len2-1;i>=0;i--)
	{
		a2[j]=str2[i]-'0';
		j++;
	}
	int a[400]={0};
	for (i=0;i<len2;i++)
		for (j=0;j<len1;j++)
		     a[i+j]+=a2[i]*a1[j];
	for (i=0;i<400;i++)
		if (a[i]>=10)
		{
			a[i+1]+=a[i]/10;
			a[i]=a[i]%10;
		}
	j=399;
	while (a[j]==0) j--;
	for (i=j;i>=0;i--)
		cout<<a[i];
	system("pause");
	return 0;
}