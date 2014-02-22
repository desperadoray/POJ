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
			cout<<best<<"号赛车最佳"<<endl;
			if (a==1) cout<<"1号专家说对了"<<endl;
				if (b==1) cout<<"2号专家说对了"<<endl;
					if (c==1) cout<<"3号专家说对了"<<endl;
						if (d==1) cout<<"4号专家说对了"<<endl;
		}
	}
	system("pause");
	return 0;
}