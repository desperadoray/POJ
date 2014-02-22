#include<iostream>
using namespace std;
void visit()
{
	char temp;
	cin>>temp;
	if (temp=='#') {cout<<temp;return;}
	visit();
	visit();
	cout<<temp;
}
int main()
{
	visit();
	cout<<endl;
	return 0;
}