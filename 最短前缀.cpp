#include<iostream>
using namespace std;
int main()
{
	char str1[1001][21],str2[1001][21]={};
	int count=0;
	char s[21];
	while (scanf("%s",s)!=EOF)
	{
		//if (s[0]=='\0') break;
		sscanf(s,"%s",str1[count]);
		count++;
	}
	for (int i=0;i<count;i++)
	{
		int num=0;
		for (int j=0;j<count;j++)
		{
			if (j==i) continue;
			int m=0;
			for (int k=0;k<num;k++)
				if (str1[j][k]!=str1[i][k])
				{
					m=1;
					break;
				}
			if (m==0)
			while (str1[j][num]==str1[i][num]) num++;
		}
		strncpy(str2[i],str1[i],num+1);
	}
	for (int i=0;i<count;i++)
		printf("%s %s\n",str1[i],str2[i]);
    system("pause");
	return 0;
}