#include<iostream>
using namespace std;
int main()
{
	char a[100];
	int i;
	cin.getline(a,30);
	for (i=0;a[i]!='\0';i++)
	{
		if (a[i]=='z') a[i]='a';
		else if (a[i]=='Z') a[i]='A';
		else if (a[i]==' ') continue;
		else a[i]++;
	}
	cout<<a<<endl;
	system("pause");
	return 0;
}
//int main()
//{ char str[20];
//cin.getline(str,20);
//for(int i=0;str[i]!='\0';i++)
//{if (str[i]=='Z')
//{ str[i]='A'; continue;}
//if (str[i]=='z')
//{ str[i]='a'; continue;}
//if (str[i]==' ') continue;
//str[i]++;
//}
//cout << str << endl;
//system("pause");return 0;
//}