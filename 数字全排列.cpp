#include<iostream>
using namespace std;
int a[1000]={0};
int road[1000]={0};
int judge[1000]={0};
int n,num=0;
void Try(int m)
{
	int i;
	if (m>n)
	{
		num++;
		cout<<"Solution["<<num<<"]";
        for (int i=1;i<=n;i++)
			cout<<road[i];
		cout<<endl;
	}
	else
	{
	    for (i=1;i<=n;i++)
		{
			if (judge[i]==0)
			{
				road[m]=a[i];
				judge[i]=1;
				Try(m+1);
				judge[i]=0;
			}
		}
	}
}
int main()
{
    char str[1000];
	memset(str,0,sizeof(str));
	cin.getline(str,11,'\n');
	n=strlen(str);
	for (int i=1;i<=n;i++)
		a[i]=str[i-1]-'0';
	for (int i=1;i<n;i++)
		for (int j=1;j<=n-i;j++)
		{
			if (a[j]>a[j+1])
			{
				a[j]^=a[j+1];
				a[j+1]^=a[j];
				a[j]^=a[j+1];
			}
		}
	Try(1);
	system("pause");
	return 0;
}