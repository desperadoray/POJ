#include<iostream>
#include<string>
using namespace std;
int main()
{
	char str[250];
	while(cin.getline(str,201,'\n'))
	{
	char *p=str;
	int maxi,max=0,i,t=0,len,point;
	int l=strlen(str);
	for (i=0;i<l;i++)
	{
		if (t==0&&isalpha(*(p+i))) point=i;
		if (isalpha(*(p+i))) t++;
		len=t;
		if ((!isalpha(*(p+i)))||(*(p+i+1)=='\0'))
		{
			t=0;
			if (len>=max) {max=len;maxi=point;}
		}     
	}
	for (i=maxi;i<maxi+max;i++)
		cout<<p[i];
	cout<<endl;
	}
}