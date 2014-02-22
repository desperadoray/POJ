#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin>>n)
	{
		cin.get();
		char str[101][101],t[101];
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
		for (j=1;j<=i-1;j++)
			for (k=1;k<=i-j;k++)
			{
                 if (strlen(str[k])>strlen(str[k+1])) 
				 {
                       strcpy(t,str[k]);
					   strcpy(str[k],str[k+1]);
					   strcpy(str[k+1],t);
				 }
			}
		for (j=1;j<=i;j++)
			cout<<str[j]<<endl;

	}
		system("pause");
		return 0;
}