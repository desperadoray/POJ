#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int m[40]={0};
	int i=0;
	while (a>0)
	{
		m[i++]=a%8;
		a/=8;
	}
	i--;
	for (int j=i;j>=0;j--)
		cout<<m[j];
	system("pause");
	return 0;
}