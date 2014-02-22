#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x,a,e;
	int N;
	cin>>x>>a>>e;
	N=0;
	if (abs(x/(pow(a,1)))<e) cout<<N<<endl;
	else
	{
	do
	{
		N++;
	}
	while(abs(x/(pow(a,N+1)))>=e);
		cout<<N;
	}
		system("pause");
	return 0;
}
