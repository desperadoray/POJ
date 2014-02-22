#include<iostream>
using namespace std;
int road[10]={0};//记录走什么
bool judge[10]={0};//记录可不可走
int a[10]={0};
int len;
void rank(int m) 
{
	int i;
    if (m>len)
	{
       for (i=1;i<=len;i++)
		   cout<<(char)road[i];cout<<endl;
	}
	else
	{
         for (i=1;i<=len;i++)
		 {
			 if (judge[i]==0)
			 {
				 road[m]=a[i];
				 judge[i]=1;
				 rank(m+1);
				 judge[i]=0;
			 }
		 }
	}
}
int main()
{
	char str[10];
	memset(str,0,sizeof(str));
	cin.getline(str,7,'\n');
	len=strlen(str);
	for (int i=1;i<=len;i++)
		a[i]=(int)str[i-1];
	rank(1);
	system("pause");
	return 0;
}