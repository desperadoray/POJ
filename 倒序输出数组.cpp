#include<iostream>
using namespace std;
void main()
{
    int a[5],*p,*q,temp;
    for (p=a;p<a+5;p++)
		cin>>*p;
	for (p=a,q=a+4;p<q;p++,q--)
	{
		temp=*p;
		*p=*q;
		*q=temp;
	}
	for (p=a;p<a+5;p++)
		cout<<*p<<"    ";
	system("pause");
}