#include<iostream>
using namespace std;
int main()
{
	int a,b=0;
	while (cin>>a>>b)
	{
		if (b==0) cout <<"error"<<endl;
	else
	{
		if (a%b==0)
			cout<<a/b<<endl;
		else
			cout<<(a-a%b)/b<<" "<<a%b<<endl;
	}
	}
	return 0;
}