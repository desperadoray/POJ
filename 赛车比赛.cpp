#include<iostream>
using namespace std;
int main()
{
	int best;
	int a,b,c,d;
	for (best=1;best<=4;best++)
	{
		a=(best==2);
		b=(best==4);
		c=(best!=3);
		d=(best!=4);
		if (a+b+c+d==1)
		{
			cout<<best<<"���������"<<endl;
			if (a==1) cout<<"1��ר��˵����"<<endl;
				if (b==1) cout<<"2��ר��˵����"<<endl;
					if (c==1) cout<<"3��ר��˵����"<<endl;
						if (d==1) cout<<"4��ר��˵����"<<endl;
		}
	}
	system("pause");
	return 0;
}