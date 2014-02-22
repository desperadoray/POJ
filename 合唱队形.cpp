#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[1200]={0};
	int max1[1200]={0};
	int max2[1200]={0};
	for (int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	max1[1]=1;
	for (int i=2;i<=n;i++)
	{
		int temp=0;
		for (int j=1;j<i;j++)
			if (a[j]<a[i]&&max1[j]>temp) temp=max1[j];
		max1[i]=temp+1;
	}
	max2[n]=1;
	for (int i=n-1;i>=1;i--)
	{
		int temp=0;
		for (int j=n;j>i;j--)
			if (a[j]<a[i]&&max2[j]>temp) temp=max2[j];
		max2[i]=temp+1;
	}
	int max[1200]={0};
	int temp=0;
	for (int i=1;i<=n;i++)
	{
		max[i]=max1[i]+max2[i]-1;
		if (max[i]>temp) temp=max[i];
	}
	cout<<n-temp;
	return 0;
}