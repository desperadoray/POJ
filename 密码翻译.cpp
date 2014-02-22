#include<iostream>
using namespace std;
void code(char str[])
{
	for (int i=0;str[i]!='\0';i++)
		if (isalpha(str[i]))
		{
			if (str[i]=='z'||str[i]=='Z') str[i]-=25;
			else str[i]++;
		}
	cout<<str<<endl;
}
int main()
{
	int n,t=1;cin>>n;cin.get();
	while (t<=n)
	{
		char str[100];
		memset(str,0,sizeof(str));
		cin.getline(str,81,'\n');
		code(str);
		t++;
	}
	system("pause");
	return 0;
}