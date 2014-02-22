#include<iostream>
using namespace std;
int main()
{
	int i,k;
	cin>>k;
	double f[1000];
    memset(f,0,sizeof(f));
	f[0]=3;
	for (i=1;i<=k-1;i++)
	{
		f[i]=f[i-1]*f[i-1]-2*f[i-1]+2;
	}
	for (i=0;i<=k-1;i++)
		cout<<f[i]<<endl;
	system("pause");
	return 0;
}