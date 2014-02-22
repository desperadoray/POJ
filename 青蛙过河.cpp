#include<iostream>
using namespace std;
int jump(int,int);
int main()
{
	int s,r;
	cout<<"Ê¯ÖùÊı"<<endl;
	cin>>s;
	cout<<"ºÉÒ¶Êı"<<endl;
    cin>>r;
	double sum;
	sum=jump(s,r);
	cout<<sum<<endl;
	system("pause");
	return 0;
}
int jump(int a,int b)
{
	int k=0;
	if (a==0) k=b+1;
	else 
		k=jump(a-1,b)*2;
    return k;
}