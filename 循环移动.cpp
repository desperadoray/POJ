#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int *p=new int[n+1];
	int i,temp,j;
	int a[100]={0};
	for (i=1;i<=n;i++)
		cin>>a[i];
	p=a;
	for (i=1;i<=m;i++)
	{
        temp=*(p+n);
		for (j=n;j>=2;j--)
			*(p+j)=*(p+j-1);
		*(p+1)=temp;
	}
	for (i=1;i<=n;i++)
		cout<<*(p+i)<<" ";
	system("pause");
	return 0;
}