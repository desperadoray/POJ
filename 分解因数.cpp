#include<iostream>
using namespace std;
int num=0;
void func(int p,int q)
{
	for (int i=q;i<=p;i++)
	{
         if (i==p) num++;
		 else if (p%i==0) func(p/i,i);
	}
}
int main()
{
	int n;
	cin>>n;
	int t=1;
	while (t<=n)
	{
		num=0;
		int m;
		cin>>m;
		func(m,2);
		cout<<num<<endl;
		t++;
	}
	system("pause");
	return 0;
}