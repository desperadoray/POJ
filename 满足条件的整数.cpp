#include<iostream>
using namespace std;
int main()
{
	for (int i=3;i<=98;i++)
		for (int j=i+1;j<=99;j++)
			for (int k=j+1;k<=100;k++)
				if (i*i+j*j==k*k)
				cout<<i<<"*"<<i<<" + "<<j<<"*"<<j<<" = "<<k<<"*"<<k<<endl;
	return 0;
}