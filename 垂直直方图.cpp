#include<iostream>
using namespace std;
int main()
{
	char s[100]={};
	int a[27]={0};
	for (int i=1;i<=4;i++)
	{
		gets(s);
		for (int j=0;s[j]!='\0';j++)
			if (isalpha(s[j])) a[s[j]-64]++;
	}
	int max=0;
	for (int i=1;i<=26;i++)
		if (a[i]>max) max=a[i];
	int qipan[100][30]={0};
	for (int j=1;j<=26;j++)
			for (int i=1;i<=a[j];i++)
				qipan[i][j]=1; 
	for (int i=max;i>=1;i--)
	{
		for (int j=1;j<=26;j++)
		{
			if (qipan[i][j]==1) cout<<"* ";
			else cout<<"  ";
		}
		cout<<endl;
	}
	for (int i=1;i<=26;i++)
		cout<<(char)(64+i)<<" ";
	system("pause");
	return 0;
}