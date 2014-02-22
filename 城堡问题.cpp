#include<iostream>
using namespace std;
int room[60][60]={0};
bool east[60][60]={0};
bool west[60][60]={0};
bool south[60][60]={0};
bool north[60][60]={0};
bool judge[60][60]={0};
int Try(int x,int y)
{
	if (judge[x][y]==1) return 0;
	judge[x][y]=1;
	int sum=1;
	if (west[x][y]==0) sum+=Try(x,y-1);
	if (east[x][y]==0) sum+=Try(x,y+1);
	if (north[x][y]==0) sum+=Try(x-1,y);
	if (south[x][y]==0) sum+=Try(x+1,y);
	return sum;

}
int main()
{
	int n,m;
	cin>>n>>m;
	int i,j;
	int num=0,max=0;
	for (i=1;i<=n;i++)
		for (j=1;j<=m;j++)
		{
			cin>>room[i][j];
			int temp=room[i][j];
			west[i][j]=temp%2;
			temp/=2;
			north[i][j]=temp%2;
			temp/=2;
			east[i][j]=temp%2;
			temp/=2;
			south[i][j]=temp%2;
		}
	for (i=1;i<=n;i++)
		for(j=1;j<=m;j++)
		{
			if (judge[i][j]==0)
				num++;
			int size=Try(i,j);
			if (size>max) max=size;
		}
	cout<<num<<endl;
	cout<<max<<endl;
	system("pause");
	return 0;
}