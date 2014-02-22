#include<iostream>
using namespace std;
int main()
{
	int a,i,j;
	int b[10];
    while(cin>>a)
	{
		int p=1;
    i=0;
	memset(b,0,sizeof(b));
	do
	{
		i++;
		b[i]=a%10;
		a=(a-a%10)/10;
	}
	
	while (a>0);
	cout<<i<<endl;
	for (j=1;j<=i;j++) cout<<b[j]<<endl;
	for (j=1;j<=(int)(i/2);j++)
	{
		if (b[j]!=b[i+1-j]) p=0;
	}
	if (p==1) cout<<"是对称整数"<<endl;
	else cout<<"不是对称整数"<<endl;
	}
	system("pause");
	return 0;
}