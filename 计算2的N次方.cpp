#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[50]={0};
	a[0]=1;
	int i;
	while (n--)
	{
	for (i=0;i<50;i++)
		a[i]<<=1;
	for (i=0;i<50;i++)
		if (a[i]>=10)
			{
				a[i]-=10;
				a[i+1]++;
			}
	}
	i=49;
	while (a[i]==0) i--;
	for (int j=i;j>=0;j--)
		cout<<a[j];
	system("pause");
	return 0;

}