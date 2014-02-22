#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str[31];
	cin.getline(str,31,'\n');
	char *p=str;
	int i=0,l=strlen(str),flag=0;
	for (i=0;str[i]!='\0';i++)
	{
	   if (isdigit(*(p+i))) 
	   {
		   flag=1;
		   cout<<*(p+i);
	   }
	   else 
	   {
	      if (flag==1) cout<<endl;
		  flag=0;
	   }

 	}
	system("pause");
	return 0;
}