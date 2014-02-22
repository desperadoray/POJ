#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n;
	int d[110][110]={0},amax[110][110]={0};
	cin>>n;
	for (i=1;i<=n;i++)
		for (j=1;j<=i;j++)
			cin>>d[i][j];
	for (i=1;i<=n;i++)
		amax[n][i]=d[n][i];
	for (i=n;i>1;i--)
		for (j=1;j<i;j++)
		{
			if (amax[i][j]>amax[i][j+1]) amax[i-1][j]=amax[i][j]+d[i-1][j];
			else amax[i-1][j]=amax[i][j+1]+d[i-1][j];
		}
		cout<<amax[1][1]<<endl;
		system("pause");
		return 0;
}