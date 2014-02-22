#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while (n--)
	{
		int m,num=60;
		cin>>m;
		if (m==0) num=60;
		else
		{
		int a[100]={0};
		for (int i=1;i<=m;i++)
			cin>>a[i];
		if (a[1]>=60) num=60;
		else
			{
				for (int j=1;j<=m;j++)
				{
					if (a[j]+3*(j)<=60) num-=3;
					else
					{
						if (a[j]>num) num=num;
						if (a[j]+3*(j-1)<=60) num=a[j];
					}
				}
		    }
		}
		cout<<num<<endl;
	}
	system("pause");
	return 0;
}