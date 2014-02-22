#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j,k,l,sum;
	int a[500];
	memset(a,0,sizeof(a));
	for (i=1;i<=1000;i++)
	{
		k=0;
		sum=0;
		for (j=1;j<i;j++)
		{
			if (i%j==0) 
			{
				k++;
				a[k]=j;
			}
		}
		for (l=1;l<=k;l++) sum=sum+a[l];
		if (sum==i)
		{
			cout<<i<<" ";
			cout<<"its factors are ";
			if (k==1) cout<<a[1]<<endl;
			else
			{
			cout<<a[1];
			for (l=2;l<=k;l++)
				cout<<","<<a[l];
			cout<<endl;
			}
		}

	}
	system("pause");
	return 0;

}