#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void convert(int m,int n)
{
	if ((m/n)==0)
	{
		if (m<10) cout<<m;
		else cout<<(char)(m-10+'A');
	}
	else
	{
		convert(m/n,n);
		if (m%n>=10) cout<<(char)(m%n-10+'A');
		else cout<<m%n;
	}
}
int main()
{
	string str1,str2;
	int a,b;
	cin>>a>>str1>>b;	
	int len1=str1.length();
	int i;double num=0;
	for (i=0;i<len1;i++)
	{
	     if (str1[i]<='0'+9) num+=(str1[i]-'0')*pow((double)(a),len1-i-1);
		 if (str1[i]>=65) 
		 {
			 if (str1[i]<97)
				 num+=(str1[i]-'A'+10)*pow((double)(a),len1-i-1);
			 if (str1[i]>=97)
                 num+=(str1[i]-'a'+10)*pow((double)(a),len1-i-1);
		 }
	}
	convert((int)num,b);
	return 0;
}