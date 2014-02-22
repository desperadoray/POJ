#include <iostream>
using namespace std;
int main()
{
	void fun();

	int n;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
		fun();
	return 0;
}
void fun()
{
	char a[101],b[101];
	char temp[101];
	char re[101];
	cin>>a;
	cin>>b;
	int la=strlen(a);
	int lb=strlen(b);
	if(la<lb)
	{
		cout<<0<<endl;
		return ;
	}
	if(la==lb&&strcmp(a,b)<0)
	{
		cout<<0<<endl;
		return ;
	}
	if(strcmp(a,b)==0)
	{
		cout<<1<<endl;
		return ;
	}

	int k,j,t,d;
	for(k=0;k<la-lb+1;k++)
		re[k]='0';
	temp[lb]=0;
	re[la-lb+1]=0;
	for(k=0;k<la-lb+1;k++)
	{
		j=0;
		while(j==0)
		{
			for(d=0;d<lb;d++)
			{
				temp[d]=a[k+d];
			}
			if(k==0&&strcmp(temp,b)<0)
			{
				j=1;
			}
			if(strcmp(temp,b)<0)
				{
					if(a[k-1]>'0')
					{
						a[k]=a[k]+10;
						a[k-1]=a[k-1]-1;
					}
					else
					if(a[k-1]=='0')
					{
						j=1;
					}
				}
			if(strcmp(temp,b)>=0)
			{
				re[k]=re[k]+1;
				for(t=0;t<lb;t++)
				{
					a[k+t]=a[k+t]+'0'-b[t];
				}
				for(t=0;t<lb;t++)
				{
					if(a[k+t]<'0')
					{
						a[k+t]=a[k+t]+10;
						a[k+t-1]=a[k+t-1]-1;
					}
				}
			}
		}
	}
	for(k=0;k<strlen(re);k++)
	{
		if(re[k]=='0')
			continue;
		else
			break;
	}
	cout<<re+k<<endl;
	return ;
}