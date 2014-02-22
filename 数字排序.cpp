#include<iostream>
using namespace std;
int main()
{
	int a,i,k,p;
	int b[10];
    cin>>a;
    i=0;
	do
	{
		i++;
		b[i]=a%10;
		a=(a-a%10)/10;
	}
	while (a>0);
	int j;
	for (j=1;j<=i-1;j++)
	{
         for (k=1;k<=i-j;k++)
		 {
			 if (b[k]>b[k+1])
			 {
				 p=b[k];
				 b[k]=b[k+1];
				 b[k+1]=p;
			 }
		 }
	}
	for (j=1;j<=i;j++)
		cout<<b[j];
	system("pause");
	return 0;
}