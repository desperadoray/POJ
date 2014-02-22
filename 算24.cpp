#include<iostream>
#include<cmath>
#include<string>
using namespace std;
double num[5]={0};
string expr[5]={};

bool Try(int n)
{
	double a,b;
	string expa,expb;
	if (n==1)
	{ 
		if (fabs(num[1]-24)<1e-6) return 1;
		return 0;
	}
	else
	{
		for (int i=1;i<=n;i++)
			for (int j=i+1;j<=n;j++)
			{
				expa=expr[i];
				expb=expr[j];
				a=num[i];
				b=num[j];
				num[j]=num[n];
				expr[j]=expr[n];
				expr[i]='('+expa+'+'+expb+')';
				num[i]=a+b;
				if (Try(n-1)) return 1;
				expr[i]='('+expa+'-'+expb+')';
				num[i]=a-b;
				if (Try(n-1)) return 1;
				expr[i]='('+expb+'-'+expa+')';
				num[i]=b-a;
				if (Try(n-1)) return 1;
				expr[i]='('+expa+'*'+expb+')';
				num[i]=a*b;
				if (Try(n-1)) return 1;
				if (a!=0) 
				{
				    expr[i]='('+expb+'/'+expa+')';
					num[i]=b/a;
					if (Try(n-1)) return 1;
				}
				if (b!=0)
				{
				    expr[i]='('+expa+'/'+expb+')';
					num[i]=a/b;
					if (Try(n-1)) return 1;
				}
				num[i]=a;
				num[j]=b;
				expr[i]=expa;
				expr[j]=expb;
			}
	}
	return 0;
}
int main()
{
	while(cin>>num[1]>>num[2]>>num[3]>>num[4])
	{
		if (num[1]==0&&num[2]==0&&num[3]==0&&num[4]==0)
			break;
		for (int i=1;i<=4;i++)
			expr[i]=(char)(num[i]+'0');
		if (Try(4)) 
		{
			cout<<"YES\n";
			cout<<expr[1]<<"=24"<<endl;
		}
		else cout<<"NO\n";
	}
	return 0;
}