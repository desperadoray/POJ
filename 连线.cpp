#include <stdio.h>
#include <iostream>
using namespace std;

struct Point
{
	int x;
	int y;
};

int main()
{
	int n;
	while (cin >> n, n != 0)
	{
		Point p[700];
		for (int i = 0; i < n; i++)
			scanf("%d%d", &p[i].x, &p[i].y);
		int maxpoint = 0;
		for (int i = 0; i < n-2; i++)
			for (int j = i+1; j < n-1; j++)
			{
				int temp = 2;
				for (int k = j+1; k < n; k++)
				{
					if (n - k + temp + 1 <= maxpoint) break;
					if ((p[k].x - p[j].x) * (p[j].y - p[i].y)
						== (p[k].y - p[j].y) * (p[j].x - p[i].x))
						temp++;
				}
				if (temp > maxpoint) maxpoint = temp;
			}
			printf("%d\n", maxpoint);
	}
	return 0;

}