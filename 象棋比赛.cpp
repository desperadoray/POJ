#include <iostream>
using namespace std;

struct Player
{
	int red;
	int black;
};

int main()
{
	Player player[1001];
	int n = 0;
	int red, black;
	while (cin >> red >> black)
	{
		n++;
		player[n].red = red;
		player[n].black = black;
	}
	int result[1001][16][16] = {0};
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= 15; j++)
		{
			for (int k = 0; k <= 15; k++)
			{
				int temp1 = 0, temp2 = 0, temp3 = 0;
				if (i >= j + k)
				{
					if (j > 0)
						temp1 = result[i-1][j-1][k] + player[i].red;
					if (k > 0)
						temp2 = result[i-1][j][k-1] + player[i].black;
				}
				if (i > j + k)
					temp3 = result[i-1][j][k];
				if (temp1 > temp2)
					result[i][j][k] = temp1 > temp3 ? temp1 : temp3;
				else
					result[i][j][k] = temp2 > temp3 ? temp2 : temp3;
			}
		}
	}
	cout << result[n][15][15];
	return 0;

}