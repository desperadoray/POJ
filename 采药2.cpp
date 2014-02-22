#include<iostream>
using namespace std;
int time[11]={0},value[11]={0},judge[11]={0};
int step[100]={0};
int t,m,num=1;
int v[100000]={0};
void pick(int p,int money)
{
		int j,lt;
	for (int i=1;i<=m;i++)
	{
		for (j=1;j<=m;j++)
			if (judge[j]==0)
			{
				lt=time[j];
				break;
			}
		if (j==m+1)
		{
			v[num]=money;
			return;
		}
		for (j=1;j<=m;j++)
			if (lt>time[j]&&judge[j]==0) lt=time[j];
		if (p<time[i]) continue;
		if (p-time[i]<lt&&judge[i]==0)
		{
			judge[i]=1;
			v[num]=money+value[i];
			num++;
			judge[i]=0;
		}
		if (p-time[i]>=lt&&judge[i]==0)
		{
			judge[i]=1;
			pick(p-time[i],money+value[i]);
			judge[i]=0;
		}
	}
}
int main()
{
	cin>>t>>m;
	for (int i=1;i<=m;i++)
		cin>>time[i]>>value[i];
	pick(t,0);
	int max=0;
	for (int i=1;i<num;i++)
		if (v[i]>max) max=v[i];
	cout<<max;
	system("pause");
	return 0;
}