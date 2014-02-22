#include<iostream>
using namespace std;
int n;
int a[1100]={0};
int maxlen[1100]={0};
int main()
{
	cin>>n;
	for (int i=1;i<=n;i++)
		cin>>a[i];
	maxlen[1]=1;
	for (int i=2;i<=n;i++)
	{
		int temp=0;
		for (int j=1;j<i;j++)
		{
			if (a[j]<a[i]) 
			{
				if (maxlen[j]>temp) temp=maxlen[j];
			}
		}
		maxlen[i]=temp+1;
	}
	int max=0;
	for (int i=1;i<=n;i++)
		if (maxlen[i]>max) max=maxlen[i];
	cout<<max<<endl;
	return 0;
}