#include<iostream>
using namespace  std;
int main()
{
	int l,m,begin,end,i;
	int a[10005];
	memset(a,0,sizeof(a));
	cin>>l>>m;
	for (i=0;i<=l;i++) 
		a[i]=1;
	int t=0;
	do
	{
		t++;
		cin>>begin>>end;
		for (i=begin;i<=end;i++)  a[i]=0;
	}
	while(t<m);
	int k=0;
	for (i=0;i<=l;i++)
		if (a[i]==1)  k++;
	cout<<k;
	system("pause");
	return 0;

}