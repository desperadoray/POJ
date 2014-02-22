#include<iostream>
using namespace std;
class Array
{
	int size1,size2;
	int **p;
public:
	Array(int m=10,int n=10):size1(m),size2(n)
	{
		p = new int * [m];
		for (int i=1;i<m;i++)
			p[i]=new int [n];
	}
	int * &operator [] (int m)
	{
		return p[m];
	}
	friend ostream & operator << (ostream & , Array &);
};
ostream & operator <<(ostream & output , Array & a)
{
	for (int i=1;i<=a.size1-1;i++)
	{
		for (int j=1;j<=a.size2-1;j++)
     		output<<a[i][j]<<" ";
		output<<'\n';
	}
	return output;
}
int main()
{
	Array a(16,16);
	for (int i=1;i<=15;i++)
		for (int j=1;j<=15;j++)
			a[i][j]=j;
	cout<<a;
}