#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n;
	int i;
	cin>>n;
	for (i=1;i<=n;i++)
		cin>>a[i];
	for (i=n;i>=2;i--)
		cout<<a[i]<<" ";
	cout<<a[1];
	return 0;
}