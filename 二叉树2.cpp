#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	while (1)
	{
		int m,n;
		cin>>m>>n;
		if (m==0&&n==0) break;
		int left=m,right=m,sum;
		int count=1;
		while (1)
		{
			left*=2;
			right=right*2+1;
			if (left>=n||right>=n) break;
			count++;
		}
		sum=pow(2.0,(double)count)-1;
		if (left<=n&&right>=n) sum+=n-left+1;
		cout<<sum<<endl;
	}
	return 0;
}