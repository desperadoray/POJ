#include<iostream>
#include<cmath>
using namespace std;
int n,m;
int main()
{
	while (cin>>m>>n)
	{
		if (n==0&&m==0) break;
		int max1=m,max2=m;
		int num=0;
		while (max1<n)
		{
			max1=(max1<<1)+1;
			num++;
		}
		int num1=num;
		while (num--)
			max2<<=1;
		if (n<max2) 
		{
			n=(max1-1)/2;
		}
		int result=0;
		for (int i=0;i<num1;i++)
			result+=pow(2.0,(double)i);
		if (n>(max1-1)/2)
			result+=n-max2+1;
		cout<<result<<endl;
	}
	return 0;
}
