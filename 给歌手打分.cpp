#include<iostream>
using namespace std;
int max(int,int);
int min(int,int);
int main()
{
	int i,grade;
	int p=0;
	int q=100;
	int sum=0;
	for (i=1;i<=10;i++)
	{
		cout<<"���"<<i<<"λ��ί���";
		cin>>grade;
		q=min(grade,q);
		p=max(grade,p);
		sum=sum+grade;
	}
	cout<<"ѡ�����յ÷�Ϊ"<<(sum-p-q)/8<<endl;
	system("pause");
	return 0;
}
int max(int a,int b)
{
	if (a>b) return a;
	else return b;
}
int min(int c,int d)
{
	if (c<d) return c;
	else return d;
}
