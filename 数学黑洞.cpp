#include<iostream>
#include<cmath>
using namespace std;
int num=0;
void Try(int);
int max(int);
int min(int);
int main()
{
	int a;
	cin>>a;
	Try(a);
	cout<<num-1;
	system("pause");
	return 0;
}
int max(int b)
{
	int max1[5]={0},b1=0,t=1;
	while(b!=0)
	{
		max1[t]=b%10;
		b=b/10;
		t++;
	}
	for (int i=1;i<=3;i++)
		for (int j=i;j<=t-1-i;j++)
		{
			if (max1[j]<max1[j+1])
			{
				max1[j]=max1[j]^max1[j+1];
				max1[j+1]=max1[j+1]^max1[j];
				max1[j]=max1[j]^max1[j+1];
			}
		}
	for (int i=1;i<=4;i++)
		b1+=max1[i]*pow(10.0,(double)(4-i));	
	return b1;
}
int min(int b)
{
	int max1[5]={0},b1=0,t=1;
	while(b!=0)
	{
		max1[t]=b%10;
		b=b/10;
		t++;
	}
	for (int i=1;i<=3;i++)
		for (int j=1;j<=t-1-i;j++)
		{
			if (max1[j]<max1[j+1])
			{
				max1[j]=max1[j]^max1[j+1];
				max1[j+1]=max1[j+1]^max1[j];
				max1[j]=max1[j]^max1[j+1];
			}
		}
	for (int i=1;i<=4;i++)
		b1+=max1[i]*pow(10.0,(double)(i-1));
	return b1;
}
void Try(int m)
{
	cout<<m<<endl;
	num++;
	if (m!=6174)
      Try(max(m)-min(m));

}