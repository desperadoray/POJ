#include<iostream>
using namespace std;
int main()
{
	char a[15],b[5];
	char *p;
	while (cin>>a>>b)
	{
		p=a;
		char *i;
		for (i=a+1;i<a+strlen(a);i++)
			if (*i>*p) p=i;
		for (i=a;i<=p;i++) cout<<*i;
		cout<<b;
		for (i=p+1;i<a+strlen(a);i++)
			cout<<*i;
		cout<<endl;
	}
	return 0;
}