#include<iostream>
using namespace std;
int mycompare(const void *elem1,const void *elem2)
{
	return strcmp((char *)elem1,(char *)elem2);
}
int main()
{
	int n,m,p;
	scanf("%d %d %d",&n,&m,&p);
	int alp[26]={0};
	for (int i=0;i<n;i++)
	{
		char str[11];
		scanf("%s",str);
		for(int j=0;str[j]!='\0';j++)
			alp[str[j]-'A']++;
	}
	for (int i=0;i<p;i++)
	{
		char str[101];
		scanf("%s",str);
		for (int j=0;str[j]!='\0';j++)
			alp[str[j]-'A']--;
	}
	for (int i=0;i<26;i++)
	{
		if (alp[i]!=0)
			for (int j=0;j<alp[i];j++)
				printf("%c",i+'A');
	}
	system("pause");
	return 0;

}