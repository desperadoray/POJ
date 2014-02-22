#include<iostream>
#include<string>
using namespace std;
int trans(int n,int b)
{
	char tmp[100];
	char *p=_itoa(n,tmp,10);
	int re=0;
	int len=strlen(p);
	for (int i=0;i<len;i++)
	{
		if (p[i]-'0'>=b) return -1;
		re*=b;
		re+=p[i]-'0';
	}
	return re;
}
int main()
{
	int n;
	cin>>n;
	while (n--)
	{
		int p,q,r;
		cin>>p>>q>>r;
		int i;
		for (i=2;i<=16;i++)
		{
			int p2=trans(p,i);
			int q2=trans(q,i);
			int r2=trans(r,i);
			if (p2==-1||q2==-1||r2==-1) continue;
			if (p2*q2==r2) 
			{cout<<i<<endl;break;}
		}
		if (i==17) cout<<0<<endl;
	}
	return 0;
}