#include<iostream>
using namespace std;
int compare (const void *elem1 ,const void *elem2)
{
	return *(int *)elem2-*(int *)elem1;
}
int main()
{
	int n;
	int a[100001]={0};
	cin>>n;
	for (int i=1;i<=n;i++)
		cin>>a[i];
	qsort(a+1,n,sizeof(int),compare);
	int time=0;
	int i=n-1;
	while (i>=1)
	{
		a[i]=a[i]+a[i+1];
		time+=a[i];
		int j=i;
		while (a[j]>a[j-1]&&j>1)
		{
			a[j]^=a[j-1];
			a[j-1]^=a[j];
			a[j]^=a[j-1];
			j--;
		}
		i--;
	}
	cout<<time<<endl;
	return 0;
}