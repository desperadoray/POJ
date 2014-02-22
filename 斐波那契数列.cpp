#include <iostream>
using namespace std;

int matrix[2][2] = {1, 1, 1, 0};

void Matrix_Multiply(int a[2][2], int b[2][2], int c[2][2])
{
	c[0][0] = (a[0][0] * b[0][0] + a[0][1] * b[1][0])%10000;
	c[0][1] = (a[0][0] * b[0][1] + a[0][1] * b[1][1])%10000;
	c[1][0] = (a[1][0] * b[0][0] + a[1][1] * b[1][0])%10000;
	c[1][1] = (a[1][0] * b[0][1] + a[1][1] * b[1][1])%10000;
}

void fib(int k, int b[2][2])
{
	if (k == 0)
	{
		b[0][0] = b[0][1] = b[1][0] = b[1][1] = 0;
		return;
	}
	if (k == 1)
	{
		b[0][0] = matrix[0][0];
		b[0][1] = matrix[0][1];
		b[1][0] = matrix[1][0];
		b[1][1] = matrix[1][1];
		return;
	}
	int temp1[2][2] = {0};
	int temp2[2][2] = {0};
	fib(k/2, temp1);
	Matrix_Multiply(temp1, temp1, temp2);
	b[0][0] = temp2[0][0]; b[0][1] = temp2[0][1]; b[1][0] = temp2[1][0]; b[1][1] = temp2[1][1];
	if ((k & 1) == 1)
		Matrix_Multiply(matrix, temp2, b);
	return;
}

int main()
{
	int n;
	while (cin >> n, n != -1)
	{
		int a[2][2] = {0};
		fib(n, a);
		cout << a[0][1] << endl;
	}
	return 0;
}