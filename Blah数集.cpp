#include<iostream>
using namespace std;
int num[1000001]={0};
int main()
{
	int a,n;
	while (cin>>a>>n)
	{
		int p=a,q=a;
		int count=1;
		num[1]=a;
		int countp=1,countq=1;
		while (count<=n)
		{
			count++;
			int temp1=2*p+1,temp2=3*q+1;
			if (temp1<temp2)
			{
				countp++;
				num[count]=temp1;
				p=num[countp];
			}
			if (temp1>temp2)
			{
				countq++;
				num[count]=temp2;
				q=num[countq];
			}
			if (temp1==temp2)
			{
				countp++;
				countq++;
				num[count]=temp1;
				p=num[countp];
				q=num[countq];
			}
		}
		count--;
		cout<<num[count]<<endl;
	}
	return 0;
}