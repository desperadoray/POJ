#include<iostream>
using namespace std;
int main()
{
	int n,t=1;
	cin>>n;
	while (t<=n)
	{
		t++;
	    char str1[100],str2[100];
	    memset(str1,0,sizeof(str1));
	    memset(str2,0,sizeof(str2));
		cin>>str1>>str2;
		int i,j;
		int len1=strlen(str1),len2=strlen(str2);
		int max=0,count=0;
		for (i=0;i<len1;i++)
		{
			int ii=i;
			j=0;
            while (str2[j]!='\0'&&str2[j]!=str1[ii]) j++;
			while (str1[ii]==str2[j]&&str1[ii]!='\0'&&str2[j]!='\0')
			{
				ii++;
				j++;
				count++;
			}
			if (count>max) max=count;
			count=0;
		}
		cout<<max<<endl;
	}
	system("pause");
	return 0;
	
}