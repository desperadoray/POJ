#include<iostream>
using namespace std;
double func()
{
	char str[10]={};
	cin>>str;
	switch(str[0])
	{
	    case'+':return func()+func();
		case'-':return func()-func();
		case'*':return func()*func();
		case'/':return func()/func();
		default:return atof(str);
	}
}
int main()
{
	printf("%f\n", func());
	return 0;
}