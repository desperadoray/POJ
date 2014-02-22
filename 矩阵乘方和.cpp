#include <iostream>
using namespace std;

int n, k, m;
int matrix[31][31] = {0};

void Matrix_Add(int a[31][31], int b[31][31], int c[31][31])
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			c[i][j] = (a[i][j] + b[i][j]) % m;
}

void Matrix_Multiply(int a[31][31], int b[31][31], int c[31][31])
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < n; k++)
				c[i][j] = (c[i][j] + a[i][k] * b[k][j]) % m;
		}
}

void Matrix_Power(int a[31][31], int k, int b[31][31])
{
	memset(b, 0, sizeof(b));	
	if (k == 1)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				b[i][j] = a[i][j];
		return;
	}
	int temp1[31][31] = {0};
	int temp2[31][31] = {0};

	Matrix_Power(a, k/2, temp1);

	Matrix_Multiply(temp1, temp1, temp2);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			b[i][j] = temp2[i][j];
	if ((k & 1) == 1)	
		Matrix_Multiply(a, temp2, b);
	return;
}

void f(int a[31][31], int k, int result[31][31])
{
	if (k == 1)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				result[i][j] = a[i][j];
		return;
	}
	int temp1[31][31] = {0};
	int temp2[31][31] = {0};
	int temp3[31][31] = {0};
	f(a, k/2, temp1);//A + A^2 + ... + A^(k/2)

	Matrix_Power(a, k/2, temp3);//A^(k/2)


	Matrix_Multiply(temp1, temp3, temp2);

	Matrix_Add(temp1, temp2, result);//temp1ÊÇA+A^2+...A^(k/2*2)
	
	if ((k & 1) == 1)
	{
		Matrix_Power(temp3, 2, temp2);//A^(k/2*2)
		memset(temp3, 0, sizeof(temp3));
		Matrix_Multiply(temp2, a, temp3);
		Matrix_Add(temp3, result, result);
	}
}


int main()
{
	cin >> n >> k >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> matrix[i][j];
	int result[31][31] = {0};
	f(matrix, k, result);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
			cout << result[i][j] << " ";
		cout << result[i][n-1] << endl;
	}
	system("pause");
	return 0;	
}