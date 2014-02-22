#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str[100],substr[11],maxstr[100];
	while (cin>>str)
	{
		cin>>substr;
		memset(maxstr,0,sizeof(maxstr));
		int i,j,maxi;
		char max;
		max=NULL;
		for (i=0;i<strlen(str);i++)
		{
			if ((int)str[i]>(int)(max)) 
			{
				max=str[i];
				maxi=i;
			}
		}
		for (i=0;i<=maxi;i++)
			maxstr[i]=str[i];
		for (i=maxi+1,j=0;i<=maxi+1+strlen(substr)-1;i++,j++)
			maxstr[i]=substr[j];
		for (i=maxi+1+strlen(substr),j=maxi+1;i<=strlen(str)+strlen(substr)-1;i++,j++)
			maxstr[i]=str[j];  
		cout<<maxstr<<endl;
	}
	return 0;
}