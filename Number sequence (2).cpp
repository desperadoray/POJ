#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		int temp=pow((double(2*n)),0.5);
		int temp2=temp*(temp-1)/2;
		while (temp2+temp<n)
		{
			temp++;
			temp2=temp*(temp-1)/2;
		}
		cout<<n-temp2<<endl;
	}
	return 0;
}