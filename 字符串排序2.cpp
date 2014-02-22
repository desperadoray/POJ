#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin>>n)
	{
		cin.get();
		char str[101][101],t[101];
		char *p[100],*temp;
		memset(t,0,sizeof(t));
		memset(str,0,sizeof(str));
	    int i,j,k;
		for (i=1;i<=n;i++)
		{
		    cin.getline(str[i],101,'\n');
            if (str[i][0]=='s'&&str[i][1]=='t'&&str[i][2]=='o'&&str[i][3]=='p') break;
	    }
		i--;
		int len[101]={0};
		for (j=1;j<=i;j++)
		{
			len[j]=strlen(str[j]);
			p[j]=new char[len[j]+1];
			p[j]=str[j];
		}
		for (j=1;j<i;j++)
			for (k=1;k<=i-j;k++)
			{
				if (len[k]>len[k+1])
				{
					len[k]^=len[k+1];
					len[k+1]^=len[k];
					len[k]^=len[k+1];
					temp=p[k];
					p[k]=p[k+1];
					p[k+1]=temp;
				}
			}
		for (j=1;j<=i;j++)
			cout<<p[j]<<endl;
	}
		system("pause");
		return 0;
}