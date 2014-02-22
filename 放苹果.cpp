#include<iostream>
using namespace std;
int sort(int m,int n)//将m个苹果分到n个盘子里
{
    if (m==0||n==1) return 1;
	else
	{
		if (m<n) return sort(m,m);
		else return sort(m,n-1)+sort(m-n,n);
	}
}
int main()
{
	int n;
	cin>>n;
	int t=1;
	while (t<=n)
	{
		int m,n;
		cin>>m>>n;
		cout<<sort(m,n)<<endl;
		t++;
	}
	return 0;
}