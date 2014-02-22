#include<iostream>
using namespace std;
int n,m;
bool judge(int x)
{
	if (n%x==0&&n%(m-x)==0) return true;
	else return false;
}
int search(int x,int y)
{
	while (x<=y&&(judge(x)==false))
		x++;
	if (x<=y) return x;
	else return -1;
}
int main()
{
	int k;
	cin>>k;
	while (k--)
	{
		scanf("%d %d",&n,&m);
		if (n==m)
		{
			if (n%2==0) cout<<n/2<<endl;
			else cout<<-1<<endl;
		}
		else 
			cout<<search(1,(m+1)/2)<<endl;
	}
	return 0;
}