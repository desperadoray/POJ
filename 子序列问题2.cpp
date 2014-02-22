#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str1[100001];
	char str2[100001];
	memset(str1,0,sizeof(str1));
	memset(str2,0,sizeof(str2));
	while (cin>>str1)
	{
		cin>>str2;
		int len1=strlen(str1);
		int len2=strlen(str2);
		int i,t;
		if (len1>len2) cout<<"No"<<endl;
		else 
		{
			t=0;
			for (i=0;i<len2;i++)
			{
				if (str2[i]==str1[t]) t++;
			}
            if (t==len1) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
		}
	system("pause");
	return 0;
}