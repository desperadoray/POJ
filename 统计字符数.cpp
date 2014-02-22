#include<iostream>
using namespace std;
int main()
{
	int n,t=1;
	cin>>n;
	cin.get();
	while (t<=n)
	{
	char str[1001];
	int num[27]={0};
	memset(str,0,sizeof(str));
	cin.getline(str,1001);
	int i,max=0,j;
	for (i=0;str[i]!='\0';i++)
		num[(int)str[i]-96]++;
    for (i=1;i<=26;i++)
         if (num[i]>max) 
		 {
			 max=num[i];
			 j=i;
		 }
	 cout<<(char)(96+j)<<" "<<max<<endl;
	 if (t<=n-1) cin.get();
	 t++;
	}
	 system("pause");
	 return 0;
}