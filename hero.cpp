#include<iostream>
using namespace std;
class test
{
public:
	test(int n){cout<<"1 called"<<endl;}
	test(int n,int m){cout<<"2 called"<<endl;}
	test(){cout<<"3 called"<<endl;}
};
test array1[3]={1,test(1,2)};
test array2[3]={test(2,3),test(1,2),1};
test *parray[3]={new test(4),new test(1,2)};
int main()
{
}