#include<iostream>
using namespace std;
unsigned long long a[5100]={0};
unsigned long long fun(int m)
{
	if (m==3) return 1;
	if (m==4) return 3;
	else
	{
		if (a[m-1]==0) a[m-1]=fun(m-1);
		a[m]=2*a[m-1];
		for (int i=3;i<=m-2;i++)
		{
			if (a[i]==0) a[i]=fun(i);
			if (a[m+1-i]==0) a[m+1-i]=fun(m+1-i);
			a[m]+=a[i]*a[m+1-i];
		}
		a[m]+=3*a[m-2];
		for (int i=3;i<=m-2;i++)
		{
			a[m]+=a[i]*a[m-i];
		}
		for (int i=3;i<=m-3;i++)
		{
			a[m]+=a[i]*a[m-i]*2;
		}
		for (int i=3;i<=m-4;i++)
			for (int j=3;j<=m-1-i;j++)
			{
				a[m]+=a[i]*a[j]*a[m-i-j+2];
			}
			//就这块猥了 得记下来 直接就知道
	}
	return a[m];
}
int main()
{
	a[3]=1;
	a[4]=3;
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		cout<<fun(n)<<endl;
	}
	return 0;
	
}