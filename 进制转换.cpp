#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str[31];
	memset(str,0,sizeof(0));
	while (cin>>str)
	{
		int result[500]={0},t=0;
		while (str[0]!='\0')
		{	
		int len_str=strlen(str);	
		int a[31]={0},num[31]={0};
		int i=0,j=0;
		for (i=0;str[i]!='\0';i++)
		    num[i]=str[i]-'0';
		for (i=0;str[i]!='\0';i++)
		{
			a[i]=num[i]/2;
			num[i+1]+=num[i]%2*10;
		}
		result[t++]=(str[len_str-1]-'0')%2;
        if (a[0]==0) 
		{
			if (len_str>=2)
			for (j=0;j<=len_str-2;j++)
			{str[j]=char(a[j+1]+'0');str[j+1]='\0';}
			else
				str[0]='\0';
		}
		else
			for (j=0;j<=len_str-1;j++)
			{str[j]=char(a[j]+'0');str[j+1]='\0';}
		}
		t--;
		for (int i=t;i>=0;i--)
			cout<<result[i];
		cout<<endl;
	}
	return 0;
}