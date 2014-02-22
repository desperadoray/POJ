#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int as,bs,cs;
	int ansa,ansb,ansc;
	for (a=1;a<=3;a++)
	{
		for (b=1;b<=3;b++)
		{
			for (c=1;c<=3;c++)
			{
				as=(b>a)+(c==a);
				bs=(a>b)+(a>c);
				cs=(c>b)+(b>a);
				if (!(a<=b&&as<=bs||a<=c&&as<=cs||b<=a&&bs<=as||b<=c&&bs<=cs||c<=a&&cs<=as||c<=b&&cs<=bs))
				{
					ansa=a;
					ansb=b;
					ansc=c;
				}

			}
		}
	}
	if (ansa>=ansb&&ansb>=ansc) cout<<"A B C"<<endl;
	if (ansa>=ansc&&ansc>=ansb) cout<<"A C B"<<endl;
	if (ansb>=ansa&&ansa>=ansc) cout<<"B A C"<<endl;
	if (ansb>=ansc&&ansc>=ansa) cout<<"B C A"<<endl;
	if (ansc>=ansb&&ansb>=ansa) cout<<"C B A"<<endl;
	if (ansc>=ansa&&ansa>=ansb) cout<<"C A B"<<endl;
	system("pause");
	return 0;

}