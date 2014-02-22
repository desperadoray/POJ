#include<iostream>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int cube[101]={0};
	for (i=1;i<=100;i++)
		cube[i]=i*i*i;
	int a,b,c,d;
	for (a=6;a<=n;a++)
		for (b=2;b<a;b++)
			for (c=b;c<a;c++)
				for (d=c;d<a;d++)
				{
					if (cube[a]==cube[b]+cube[c]+cube[d])
						printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
				}
				return 0;
}