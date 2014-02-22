#include<iostream>
using namespace std;
int n,k;
char qipan[10][10]={};
bool row[10]={0};
int num=0;
void Try(int m , int p)
{
	if (p==0)
	{
		num++;
		return ;
	}
	for (int i=m;i<=n;i++)
		for (int j=1;j<=n;j++)
		{
			if (row[j]==0&&qipan[i][j]=='#')
			{
				row[j]=1;
				Try(i+1,p-1);
				row[j]=0;
			}
		}
}
int main()
{
	while (cin>>n>>k,!(n==-1&&k==-1))
	{
		num=0;
		memset(qipan,'.',sizeof(qipan));
		memset(row,0,sizeof(row));
		for (int i=1;i<=n;i++)
			for (int j=1;j<=n;j++)
				cin>>qipan[i][j];
		Try(1,k);
		cout<<num<<endl;
	}
	return 0;
}