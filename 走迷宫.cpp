#include<iostream>
using namespace std;
char maze[50][50];
int judge[50][50]={0};
int q[50][50]={0};
int step[2000]={0};
int n,c;
int dx[5]={0,1,-1,0,0};
int dy[5]={0,0,0,1,-1};
int num=1;
int way[2000]={0};
void Try(int x,int y,int p)
{
	if (x==n&&y==c)
	{
		way[num]=p-1;
		num++;
	}
	for (int i=1;i<=4;i++)
	{
		if (x+dx[i]<=n&&y+dy[i]<=c&&x+dx[i]>=1&&y+dy[i]>=1)
		{
			if (judge[x+dx[i]][y+dy[i]]==1&&q[x+dx[i]][y+dy[i]]==0)
			{
				step[p]=i;
				q[x+dx[i]][y+dy[i]]=1;
				Try(x+dx[i],y+dy[i],p+1);
				q[x+dx[i]][y+dy[i]]=0;
			}
		}
	}
}
int main()
{
	cin>>n>>c;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=c;j++)
		{
			cin>>maze[i][j];
			if (maze[i][j]=='.') judge[i][j]=1;
			if (maze[i][j]=='#') judge[i][j]=0;
		}
		q[1][1]=1;
	Try(1,1,2);
	num--;
	int min=100000;
	for (int i=1;i<=num;i++)
		if (way[i]<min) min=way[i];
	cout<<min;
	system("pause");
	return 0;
}