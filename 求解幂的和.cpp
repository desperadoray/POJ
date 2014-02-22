#include<iostream>
using namespace std;
int power(int,int);
int sop(int,int);
int main()
{
     int n,k;
	 while(cin>>n>>k)
		 cout<<sop(n,k);
	 system("pause");
	 return 0;
}
int power(int a,int b)
{
	 int mi=1;
	 int i;
	 for (i=1;i<=b;i++)
		 mi=mi*a;
	 return mi;
}
int sop(int c,int d)
{
	int j;
	int sum;
	sum=0;
	for (j=1;j<=c;j++)
		sum=sum+power(j,d);
	return sum;
}