#include<iostream>
using namespace std;
int n;
int a[100]={0};
int maxwei[100][100]={0};
int count(int k,int sum)
{
	if (sum==0) return 1;
	if (k>n||sum<0) return 0;
	if (maxwei[k+1][sum]==-1) maxwei[k+1][sum]=count(k+1,sum);
	if (maxwei[k+1][sum-a[k]]==-1) maxwei[k+1][sum-a[k]]=count(k+1,sum-a[k]);
	return maxwei[k+1][sum]+maxwei[k+1][sum-a[k]];
}
int main()
{
	memset(maxwei,-1,sizeof(maxwei));
	cin>>n;
	for (int i=1;i<=n;i++)
		cin>>a[i];
	cout<<count(1,40);
	return 0;
}