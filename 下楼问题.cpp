#include<iostream>
using namespace std;
int take[99]={0};
int num=0;
void try1(int i,int s)//i是剩下的台阶数目；s是第s步；
{
	for (int j=3;j>=1;j--) //枚举第s步的走法
	{
		if (i<j) continue;
		take[s]=j;
		if (i==j)
		{
			num++;
            cout<<"solution["<<num<<"]   ";
			for (int k=1;k<=s;k++)
				cout<<take[k]<<"　";
			cout<<endl;
		}
		else try1(i-j,s+1);
	}
}
int main()
{
	int h;
	cin>>h;
	try1(h,1);
	system("pause");
	return 0;
}