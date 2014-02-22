#include<iostream>
#include<string>
using namespace std;
int build(int);
void print(int);
int nodecount=0;
int subdir[100]={0};
int subfile[100]={0};
char filename[100][100][100]={};
char dirname[100][100]={};
int dirdepth[100]={0};
int subsub[100][100]={0};
int compare(const void*elem1 , const void *elem2)
{
	return strcmp((char *)elem1,(char *)elem2);
}
int main()
{
	int num=1;
	while (1)
	{
		if (build(0)==0) break;;
		cout<<"DATA SET "<<num<<":"<<endl;
		strcpy(dirname[0],"ROOT");
		for (int i=0;i<=nodecount;i++)
			qsort(filename[i],subfile[i]+1,sizeof(char)*100,compare);
		print(0); 
		num++;		
		cout<<endl;
		memset(subdir,0,sizeof(subdir));
		memset(subfile,0,sizeof(subfile));
		memset(subsub,0,sizeof(subsub));
		memset(dirname,0,sizeof(dirname));
		memset(filename,0,sizeof(filename));
		memset(dirdepth,0,sizeof(dirdepth));
		nodecount=0;
	}
	system("pause");
	return 0;
}
int build(int root)
{
	char str[100]={};
	while (cin>>str,str[0]!=']'&&str[0]!='*')
	{
		if (str[0]=='#') return 0;
		if (str[0]=='d')
		{
			nodecount++;
			subdir[root]++;
			subsub[root][subdir[root]]=nodecount;
			dirdepth[nodecount]=dirdepth[root]+1;
			strcpy(dirname[nodecount],str);
			build(nodecount);
		}
		if (str[0]=='f')
		{
			subfile[root]++;
			strcpy(filename[root][subfile[root]],str);
		}
		memset(str,0,sizeof(str));
	}
}
void print(int node)
{
	int i,j;
	for (i=0;i<dirdepth[node];i++)
		cout<<"|     ";
	cout<<dirname[node]<<endl;
	for (i=1;i<=subdir[node];i++)
		print(subsub[node][i]);
	for (i=1;i<=subfile[node];i++)
	{
		for (j=0;j<dirdepth[node];j++)
			cout<<"|     ";
		cout<<filename[node][i]<<endl;
	}
}
