#include<iostream>
using namespace std;
int light[6][8]={0};
int press[6][8]={0};
bool check(int m)
{
	int i=1,j;
	while (m>0)
	{
		press[1][i++]=m%2;
		m/=2;
	}
	for (i=1;i<=6;i++)
	{
		light[1][i]=(light[1][i]+press[1][i-1]+press[1][i]+press[1][i+1])%2;
		light[2][i]=(light[2][i]+press[1][i])%2;
	}
	for (i=2;i<=5;i++)
	{
		for (j=1;j<=6;j++)
		{
			if (light[i-1][j]==1)
			{
				press[i][j]=1;
				light[i-1][j]=0;
			}
		}
		for (j=1;j<=6;j++)
		{
			light[i][j]=(light[i][j]+press[i][j-1]+press[i][j]+press[i][j+1])%2;
			if (i<=4)
				light[i+1][j]=(light[i+1][j]+press[i][j])%2;
		}
	}
	int judge=1;
	for (i=1;i<=6;i++)
		if (light[5][i]==1)
		{
			judge=0;
			return 0;
		} 
	return 1;
}
int main()
{
	int n;
	cin>>n;
	int num=1;
	while (n--)
	{
		memset(light,0,sizeof(light));
		memset(press,0,sizeof(press));
		int i,j;
		int light1[6][8]={0};
		for (i=1;i<=5;i++)
			for (j=1;j<=6;j++)
			{
				cin>>light[i][j];
				light1[i][j]=light[i][j];
			}
		cout<<"PUZZLE #"<<num<<endl;
		for (i=0;i<64;i++)
		{
			if (check(i)) goto loop;
			for (int k=1;k<=5;k++)
				for (j=1;j<=6;j++)
					light[k][j]=light1[k][j];
			memset(press,0,sizeof(press));
		}
loop:	for (int k=1;k<=5;k++)
			{
				for (j=1;j<=6;j++)
					cout<<press[k][j]<<" ";
				cout<<endl;
			}
		num++;
	}
return  0;
}
