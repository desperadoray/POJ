#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[3][1100]={0};
	cin>>n;
    int i;
	for (i=1;i<=n;i++)
		cin>>a[1][i];
	for (i=1;i<=n;i++)
		cin>>a[2][i];
	int time[3000]={0};
	for (i=1;i<=n;i++)
	{
		for (int j=a[1][i];j<a[2][i];j++)
		     time[j]++;
	}
	int max=0;
	for (i=1;i<=3000;i++)
		if (time[i]>max) max=time[i];
	cout<<max;
	system("pause");
	return 0;		
}