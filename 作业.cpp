#include <iostream>
using namespace std;
class Array2
{
	int **p;
public:
	Array2(int m=0,int n=0)
	{
		p=new int *[m];
		for (int k=0;k<m;k++)
			p[k]=new int [n];
	}
	int * operator[](int a)
	{
		return p[a];
	}
	int operator()(int i,int j)
	{
		return p[i][j];
	}
};
int main()
{
Array2 a(3,4);
int i,j;
for( i = 0;i < 3; i ++ )
for( j = 0; j < 4; j ++ )
a[i][j] = i * 4 + j;
for( i = 0;i < 3; i ++ ) {
for( j = 0; j < 4; j ++ ) {
cout << a(i,j) << ",";
}
cout << endl;
}
cout << "next" << endl;
Array2 b;
b = a;
for( i = 0;i < 3; i ++ ) {
for( j = 0; j < 4; j ++ ) {
cout << b[i][j] << ",";
}
cout << endl;
}
return 0;
}