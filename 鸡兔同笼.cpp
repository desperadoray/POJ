#include<iostream>
using namespace std;
int main()
{
	int n,foot,x,y;
	cin>>n;
	int i=1;
	while (i<=n)
	{
		cin>>foot;
		if (foot%2==1) cout<<"0 0"<<endl;
		else
		{
			y=foot/4;
			while ((foot-4*y)%2==1)
				y--;
			x=(foot-4*y)/2;	
			cout<<x+y<<" ";
			x=foot/2;
			while ((foot-2*x)%4!=0)
				x--;
			y=(foot-2*x)/4;
			cout<<x+y<<endl;
		}
		i++;
	}
	system("pause");
	return 0;
}