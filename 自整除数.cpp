#include<iostream>
using namespace std;
int sum(int n)
{
	int s=0;
	while (n>0)
	{
		s+=n%10;
		n/=10;
	}
	return s;
}
bool check(int n)
{
	if (n%sum(n)==0) return true;
	else return false;
}
int main()
{
	int n;
	cin>>n;
	for (int i=10;i<=n;i++)
		if (check(i)) cout<<i<<endl;
	system("pause");
	return 0;
}