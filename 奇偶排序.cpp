#include<iostream>
using namespace std;
int main()
{
	int a[11];
	memset(a,0,sizeof(a));
	int i;
	for (i=1;i<=10;i++)
		cin>>a[i];
	 int j,p;
	 for (i=1;i<=9;i++)
		 for (j=1;j<=10-i;j++)
		 {
			 if (a[j]>a[j+1])
			 {
				 p=a[j];
				 a[j]=a[j+1];
				 a[j+1]=p;
			 }
		 }
	 for (i=1;i<=10;i++)
		 if (a[i]%2==1) cout<<a[i]<<" ";
	 for (i=1;i<=10;i++)
		 if (a[i]%2==0) cout<<a[i]<<" ";
	 system("pause");
	 return 0;
}