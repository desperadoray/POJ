#include<iostream>
using namespace std;
int a[1002]={0};
int amax[1002]={0};
int sort(int m)//以第m个点为终点的最长子序列长度；
{
	if (m==0) return 0;
	if (m==1) {amax[m]=1;return amax[m];}
	else 
	{
		int i;
		int maxi=0,max=0;
		for (i=1;i<m;i++)
		{
			if (a[i]<a[m]&&amax[i]>max)
			{
				max=amax[i]; 
				maxi=i;
			}
		}
        amax[m]=sort(maxi)+1;
		return amax[m];
	}
}
int main()
{
	int n,i;
    cin>>n;
	for (i=1;i<=n;i++)
		cin>>a[i];
	int max=0;
	for (i=1;i<=n;i++)
		if (sort(i)>max) max=sort(i);
	cout<<max;
	system("pause");
	return 0;
}