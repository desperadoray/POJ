#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int (*p)[4],i,j;
	p=a;
	cin>>i>>j;
	cout<<*(*(p+i)+j);
 	system("pause");
	return 0;
}