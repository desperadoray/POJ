#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{ 
	int i,a[22]={0},j,p,n;
	for (i=1;i<=20;i++)
		cin>>a[i];
	for (i=1;i<=19;i++)
		for (j=1;j<=20-i;j++)
		{
			if (a[j]>a[i+1]) 
			{
				p=a[j];
				a[j]=a[j+1];
				a[j+1]=p;
			}
		}
		for (i=1;i<=20;i++)
			cout<<a[i]<<" ";
		cout<<"请输入要被插入的数字"<<endl;
		cin>>n;
			int t=1;
		while(t<=20)
		{
			if (a[t]<n) t++;
			else break;
		}
		for (i=20;i>=t;i--)
			a[i+1]=a[i];
		a[t]=n;
		for (i=1;i<=21;i++)
			cout<<a[i]<<" ";

system("pause");
return 0;
}
