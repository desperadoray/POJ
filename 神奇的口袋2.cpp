#include<iostream>
using namespace std;
int n;
int a[210]={0};
long long maxlen[410][410];
long long count(int m,int sum)
{
	if (sum==0) return 1;
	if (sum<0||m>n) return 0;
	if (maxlen[m+1][sum]==-1) maxlen[m+1][sum]=count(m+1,sum)%100000;
	if (maxlen[m+1][sum-a[m]]==-1) maxlen[m+1][sum-a[m]]=count(m+1,sum-a[m])%100000;
	return maxlen[m+1][sum]+maxlen[m+1][sum-a[m]];
}
int main()
{
	memset(maxlen,-1,sizeof(maxlen));
	cin>>n;
	for (int i=1;i<=n;i++)
		cin>>a[i];
	cout<<count(1,400)%10000;
	return 0;
}