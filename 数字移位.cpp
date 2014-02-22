#include<iostream>
using namespace std;
int main()
{
	int a,i,p,k;
	int b[10];
    cin>>a;
	int j;
    i=0;
	do
	{
		i++;
		b[i]=a%10;
		a=(a-a%10)/10;
	}
	while (a>0);
	for (j=1;j<=int(i/2);j++)
	{
		p=b[j];
		b[j]=b[i+1-j];
		b[i+1-j]=p;
	}
	int t=0;
	do
	{
		t++;
		k=b[i];
		for (j=i;j>=2;j--)
			b[j]=b[j-1];
		b[1]=k;
		cout<<"Ñ­»·ÓÒÒÆÒ»Î»";
		for (j=1;j<=i;j++)
			cout<<b[j];
		cout<<endl;
	}
	while (t<i);
	system("pause");
	return 0;

}