#include <iostream>
using namespace std;

int mycompare(const void *elem1, const void *elem2)
{
	return *((int *)elem2) - *((int *)elem1);
}

int m;
int a[20] = {0};
bool used[20];
int edge_length;

bool func(int edge_num, int stick_num, int left_length)
{
	if (left_length == 0)
		return (edge_num == 3) ? true : func(edge_num+1, 0, edge_length);
	for (int j = stick_num; j < m; j++)
		if (left_length >= a[j] && !used[j])
		{
			used[j] = true;
			if (func(edge_num, j+1, left_length - a[j])) return true;
			used[j] = false;
			while (j < m && a[j] == a[j+1]) j++;
		}
	return false;
}

int main()
{
	int c;
	cin >> c;
	while (c--)
	{
		cin >> m;
		memset(used, false, sizeof(used));
		memset(a, 0, sizeof(a));
		int sum = 0;
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
			sum += a[i];
		}

		if (sum % 4 != 0)
			cout << "no" << endl;
		else
		{
			edge_length = sum/4;
			qsort(a, m, sizeof(int), mycompare);
			if (func(0, 0, edge_length)) cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}
	return 0;
}