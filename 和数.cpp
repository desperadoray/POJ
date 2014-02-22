#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		int a[110]={0};
		for (int i=1;i<=n;i++)
			cin>>a[i];
		int count[110]={0};
		for (int p=1;p<=n;p++)
			for (int q=1;q<=n;q++)
			{
				if (q==p) continue;
				else
					for (int r=1;r<=n;r++)
					{
						if (r==q||r==p) continue;
						else
							if (a[q]==a[p]+a[r]) count[q]=1;
					}
			}
		int num=0;
		for (int i=1;i<=n;i++)
			if (count[i]==1) num++;
		cout<<num<<endl;
	}
	return 0;
}