#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[150][150];
	memset(a,0,sizeof(a));
	int i,j,t=0;
	cin>>n;
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
			cin>>a[i][j];
	for (i=2;i<=n-1;i++)
		for (j=2;j<=n-1;j++)
		{
              if (a[i][j]<=a[i-1][j]-50&&a[i][j]<=a[i][j-1]-50&&a[i][j]<=a[i][j+1]-50&&a[i][j]<=a[i+1][j]-50)
			  t++;
		}
		cout<<t;
		system("pause");
		return 0;

}