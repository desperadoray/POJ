#include <iostream>
using namespace std;

int count[31][31][31][31];
int n;

int a[11]={0}, b[11]={0}, c[11]={0}, d[11]={0};

int A, B, C, D;

bool judge(int left_A, int left_B, int left_C, int left_D)
{
	for (int i = 0; i < n; i++)
		if (a[i] <= left_A && b[i] <= left_B && c[i] <= left_C && d[i] <= left_D)
			return true;
	return false;
}

bool win(int a1, int a2, int a3, int a4)
{
	if (!judge(a1, a2, a3, a4)) return false;
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a1 >= a[i] && a2 >= b[i] && a3 >= c[i] && a4 >= d[i])
		{
			if (count[a1-a[i]][a2-b[i]][a3-c[i]][a4-d[i]] == -1)
				count[a1-a[i]][a2-b[i]][a3-c[i]][a4-d[i]] = win(a1-a[i], a2-b[i], a3-c[i], a4-d[i]);
			flag *= count[a1-a[i]][a2-b[i]][a3-c[i]][a4-d[i]];
		}
	if (flag == 0) 
	{
		count[a1][a2][a3][a4] = 1;
		return true;
	}
	else
	{
		count[a1][a2][a3][a4] = 0;
		return false;
	}
}

int main()
{
	cin >> A >> B >> C >> D;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	memset(count, -1, sizeof(int)*31*31*31*31);
	if (win(A, B, C, D)) cout << "win" ;
	else cout << "lose";
	return 0;
	
}