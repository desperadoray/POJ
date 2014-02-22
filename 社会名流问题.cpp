#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a, b;
	int *v = new int[n];
	for (int i = 0; i < n; i++)
		v[i] = 1;
	int *w = new int[n];
	for (int i = 0; i < n; i++)
		w[i] = 0;

	while (true)
	{
		scanf("%d%d", &a, &b);
		if (a == 0 && b == 0) break;
		if (a != b) 
		{
			v[a] = 0;
			if (v[b] != 0) w[b]++;
		}
	}

	int judge = 0;
	for (int i = 0; i < n; i++)
		if (v[i] == 1 && w[i] == n-1)
		{
			judge = 1;
			cout << i << endl;
			break;
		}
	if (judge == 0) cout << "NOT FOUND" << endl;
	delete []v;
	delete []w;
	return 0;
}