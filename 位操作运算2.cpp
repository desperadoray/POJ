#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while (n--)
	{
		unsigned short a,b;
		scanf("%u%u",&a,&b);
		int count=0;
		int judge=0;
		while (count++<=15)
		{
			int k;
			if ((a&0x8000)==0x8000) k=1;else k=0;
			a<<=1;
			a+=k;
			if (a==b) 
			{
				judge=1;
				break;
			}
		}
		if (judge==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}