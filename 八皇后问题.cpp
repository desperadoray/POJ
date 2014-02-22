#include<iostream>
using namespace std;
int c[9],l[17],r[17];
int road[9]={0};
int a[93][9]={0};
int num=0;
void Try(int m)//第m行的皇后
{
	for (int j=1;j<=8;j++)
	{
		if (c[j]==1&&l[m-j+9]==1&&r[m+j]==1)
		{
			road[m]=j;
			c[j]=0;
			l[m-j+9]=0;
			r[m+j]=0;
			if (m==8)
			{
				num++;
				for (int i=1;i<=8;i++)
					a[num][i]=road[i];
			}
			else Try(m+1);
			c[j]=1;
			l[m-j+9]=1;
			r[m+j]=1;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	for (int i=0;i<9;i++)
		c[i]=1;
	for (int i=0;i<17;i++)
		l[i]=r[i]=1;
	Try(1);
	int t=1;
	while(t<=n)
	{
	int b;
	cin>>b;
	for (int j=1;j<=8;j++)
			cout<<a[b][j];
	cout<<endl;
	t++;
	}
	system("pause");
	return 0;
}