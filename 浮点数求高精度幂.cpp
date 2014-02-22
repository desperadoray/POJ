#include<iostream>
using namespace std;
int main()
{
    char s[10];
	while (scanf("%s",s)!=EOF)
	{
		int n;
		scanf("%d",&n);
		if (n==1) 
		{
			int judge=0;
			for (int k=0;k<=5;k++)
				if (s[k]=='.')
				{
					judge=1;
					break;
				}
			if (judge==1)
			{
			int i=5;
			while (s[i]=='0')
			{
				s[i]='\0';
				i--;
			}
			if (s[i]=='.') s[i]='\0';
			i=0;
			int len=strlen(s);
			while (s[i]=='0') i++;
			for (int k=0;k<len-i;k++)
				s[k]=s[k+i];
			s[len-i]='\0';
			printf("%s\n",s);
			}
			else
			{
				int i=0;
				while (s[i]=='0') i++;
				for (int j=i;j<=5;j++)
					printf("%c",s[j]);
				printf("\n");
			}
		}
		else
		{
			int i,j,temp=5;
			for (i=0;i<6;i++)
			{
				if (s[i]=='.') 
				{
					temp=i;
					for (j=i+1;j<6;j++)
						s[j-1]=s[j];
					s[5]='\0';
					break;
				}
			}
			char str1[1000]={},str2[1000]={};
			int a1[1000]={0},a2[1000]={0};
			strcpy(str1,s);
			strcpy(str2,s);

			int len1=strlen(str1),len2=strlen(str2);
			j=0;
			for (i=len1-1;i>=0;i--)
				a1[j++]=str1[i]-'0';
			j=0;
			for (i=len2-1;i>=0;i--)
				a2[j++]=str2[i]-'0';
			int result[1000]={0};
			for (int w=1;w<n;w++)
			{
				for (i=0;i<len2;i++)
					for (j=0;j<len1;j++)
						result[i+j]+=a2[i]*a1[j];
				for (i=0;i<len1+len2;i++)
				{
					if (result[i]>=10)
					{
						result[i+1]+=result[i]/10;
						result[i]=result[i]%10;
					}
				}
				j=999;
				while (result[j]==0)j--;
				len1=j+1; 
				for (int k=j;k>=0;k--)
					a1[k]=result[k];
				memset(result,0,sizeof(result));
			}
			j=999;
			int temp1=(5-temp)*n;
			while (a1[j]==0&&j>=temp1) j--;
			for (i=j;i>=temp1;i--)
				printf("%d",a1[i]);
			int p=i;
			j=0;
			while (a1[j]==0&&j<temp1) j++;
			if (j!=p+1)
			{
				printf(".");
				for (i=p;i>=j;i--)
					printf("%d",a1[i]);
			}
			printf("\n");
		}
		memset(s,0,sizeof(s));
	}
	return 0;
}