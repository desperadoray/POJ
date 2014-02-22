#include<iostream>
using namespace std;
int main()
{
	char str1[101],str2[101];
	memset(str1,0,sizeof(str1));
	memset(str2,0,sizeof(str2));
	while(cin.getline(str1,101,'\n'))
	{
	cin.getline(str2,101,'\n');
	int a1[53]={0},a2[53]={0};
	for (int i=0;str1[i]!='\0';i++)
	{
		if (islower(str1[i])) a1[str1[i]-'a'+1]++;
		if (isupper(str1[i])) a1[str1[i]-'A'+27]++;
	}
	for (int i=0;str2[i]!='\0';i++)
	{
		if (islower(str2[i])) a2[str2[i]-'a'+1]++;
		if (isupper(str2[i])) a2[str2[i]-'A'+27]++;
	}
	int flag=0;
	for (int i=1;i<=52;i++)
	{
		if (a1[i]!=0)
		{
			if (a1[i]>a2[i])
			{
				flag=1;
				break;
			}
		}
	}
	if (flag==1) cout<<0<<endl;
	else cout<<1<<endl;
	memset(str1,0,sizeof(str1));
	memset(str2,0,sizeof(str2));
	}
	return 0;
}