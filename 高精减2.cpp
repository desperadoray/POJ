#include<iostream>
using namespace std;
int main()
{
	int n,t=1,i,j;
	int p[50];
	int a[50][200];
	cin>>n;
	cin.get();
	while (t<=n)
	{
	char str1[200],str2[200];
	memset(str1,0,sizeof(str1));
	memset(str2,0,sizeof(str2));
	cin.getline(str1,101);
	cin.getline(str2,101);
	int len1,len2;
	for (len1=0;str1[len1]!='\0';len1++);
	for (len2=0;str2[len2]!='\0';len2++);
	int a1[200]={0},a2[200]={0};
	for (i=0;i<=200;i++) a[t][i]=0;
    j=0;
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
	for (i=0;i<=200;i++)
	{
		a[t][i]=a1[i]-a2[i];
        if (a[t][i]<0)
		{
             a[t][i]=a[t][i]+10;
			 a1[i+1]-=1;
		}
	}
	p[t]=200;
	while (a[t][p[t]]==0) p[t]--;
	if (t<=n-1) {cin.get();}
	t++;
	}
	for (i=1;i<=t-1;i++)
	{
		for (j=p[i];j>=0;j--)
			cout<<a[i][j];
	        cout<<endl;
	}
	system("pause");
	return 0;
}