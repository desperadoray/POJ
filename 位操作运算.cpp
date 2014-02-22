#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while (n--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		char m1[40],m2[40];
		memset(m1,0,sizeof(m1));
		memset(m2,0,sizeof(m2));
		int i=0;
		while (i<=15)
		{
			m1[i++]=(char)(a%2+'0');
			a/=2;
		}
		i=0;
		while (i<=15)
		{
			m2[i++]=(char)(b%2+'0');
			b/=2;
		}
		int count=0,judge=0;
		while (count<=16)
		{
			cout<<m1<<endl<<m2<<endl;
			count++;
			if (strcmp(m1,m2)==0) 
			{
				judge=1;
				break;
			}
			char temp=m1[15];
			for (int j=0;j<15;j++)
				m1[15-j]=m1[15-1-j];
			m1[0]=temp;
		}
		if (judge==1) cout<<"YES"<<endl;
		if (judge==0) cout<<"NO"<<endl;
	}
	return 0;
}