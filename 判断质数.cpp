#include<iostream>
#include<cmath>
using namespace std;
bool checkprime(int);
int main()
{
	int a;
	cout<<"������һ��������a"<<endl;
	while(cin>>a)
	{
	if (checkprime(a)) cout<<"������"<<endl;
	else cout<<"��������"<<endl;
	}
	system("pause");
	return 0;
}
bool checkprime(unsigned int n)
{
	int i;
	for (i=2;i<=sqrt(n);i++)
	{
		if (n%i==0) 
		{
		    return 0;
			break;
		}
	}
   return 1;
}
