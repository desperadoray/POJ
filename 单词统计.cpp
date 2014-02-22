#include<iostream>
using namespace std;
int main()
{
	char str[150];
	cin.getline(str,150);
	int i,p=0,num=0;
	//for (len=0;str[len]!='\0';len++);
    for (i=0;str[i]!='\0';i++)
	{
		if (str[i]==' ') p=0;
		else if (p==0) 
		{
			num++;
			p=1;
		}
	}
	cout<<num;
	system("pause");
	return 0;
}