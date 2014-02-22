#include<iostream>
#include<cmath>
using namespace std;
double number[4]={0};
bool search(int n)
{
	if (n==1)
	{
		if (fabs(number[0]-24)<1e-6) return true;
		else return false;
	}
	else
	{
		for (int i=0;i<n;i++)
			for (int j=i+1;j<n;j++)
			{
                double a,b;
				a=number[i];
				b=number[j];
				number[j]=number[n-1];

				number[i]=a+b;
				if (search(n-1)) return true;
				number[i]=a-b;
				if (search(n-1)) return true;
				number[i]=b-a;
				if (search(n-1)) return true;
				number[i]=a*b;
				if (search(n-1)) return true;
				if (b!=0)
				{
				number[i]=a/b;
				if (search(n-1)) return true;
				}
				if (a!=0)
				{
				number[i]=b/a;
				if (search(n-1)) return true;
				}

				number[i]=a;
				number[j]=b;
			}
	}
	return false;
}
int main()
{
    while (cin>>number[0]>>number[1]>>number[2]>>number[3])
	{
		if (number[0]==0&&number[1]==0&&number[2]==0&&number[3]==0)
			break;
	if (search(4)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}
	return 0;
}