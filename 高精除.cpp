#include<iostream>
using namespace std;
int comp(char str1[],char str2[])
{
	int len1=strlen(str1),len2=strlen(str2);
	if (len1>len2) return 1;
	else if (len1<len2) return -1;
	else if (len1==len2)
	{
		int i=0;
	    while (str1[i]!='\0')
		{
			if (str1[i]>str2[i]) return 1;
			if (str1[i]<str2[i]) return -1;
			i++;
		}
	}
	return 0;
}
 int main()
 {
	 int n,t=1;
	 cin>>n;
	 while (t<=n)
	 {
		 cin.get();
		 t++;
		 char str1[101],str2[101],result[101],str22[101];
		 memset(str1,0,sizeof(str1));
		 memset(str2,0,sizeof(str2));
		 memset(str22,0,sizeof(str22));
		 memset(result,0,sizeof(result));
		 cin.getline(str1,101,'\n');
		 cin.getline(str2,101,'\n');
		 strcpy(str22,str2);
		 if (comp(str1,str2)<0) cout<<0<<endl;
		 else 
		     while (comp(str1,str2)>=0)
			 {
				  strcpy(str22,str2);
				  int len1=strlen(str1),len2=strlen(str22);
                  int i,j;
				  for (i=len2;i<len1;i++)
				  {str22[i]='0';str22[i+1]='\0';}
				  if (comp(str1,str22)<0) str22[len1-1]='\0';
				  len2=strlen(str22);
				  int l=len2-strlen(str2);
				           j=0;
						   int a1[101]={0},a2[101]={0};
						   for (i=len1-1;i>=0;i--)
							   a1[j++]=str1[i]-'0';
						   j=0;
						   for (i=len2-1;i>=0;i--)
							   a2[j++]=str22[i]-'0';
						   for (i=0;i<=100;i++)
						   {
							   a1[i]-=a2[i];
							   if (a1[i]<0)
							   {
								   a1[i]+=10;
								   a1[i+1]--;
							   }
						   }
						   j=100;int p=0;
						   memset(str1,0,sizeof(str1));
						   while (a1[j]==0) j--;
						   for (i=j;i>=0;i--)
						   str1[p++]=char(a1[i]+'0');
                    char count[101];
					memset(count,0,sizeof(count));
					count[0]='1';
					for (i=1;i<=l;i++)
					{count[i]='0';count[i+1]='\0';}
					memset(a1,0,sizeof(a1));
					memset(a2,0,sizeof(a2));
					int len_result=strlen(result),len_count=strlen(count);
					j=0;
					for (i=len_result-1;i>=0;i--)
						a1[j++]=result[i]-'0';
					j=0;
					for (i=len_count-1;i>=0;i--)
						a2[j++]=count[i]-'0';
					for (i=0;i<=100;i++)
					{
						a1[i]+=a2[i];
						if (a1[i]>=10)
						{
							a1[i]-=10;
							a1[i+1]++;
						}
					}					
					j=100;int q=0;
					memset(result,0,sizeof(result));
					while (a1[j]==0) j--;
					for (i=j;i>=0;i--)
					 result[q++]=char(a1[i]+'0');
					 result[q]='\0';
			 }
		cout<<result<<endl;
	 }
	 return 0;
 }