#include <iostream>
#include <stdio.h>
using namespace std;

int n;
int num[50000] = {0};
int rmaxq[50000][20];
int rminq[50000][20];

#define Min(a, b) (num[a] < num[b] ? a : b);
#define Max(a, b) (num[a] > num[b] ? a : b);

void InitRMQ(int x)
{
	for (int i = 0; i < n; i++)
		x == 0 ? rminq[i][0] = i : rmaxq[i][0] = i;
	for (int i = 1; (1 << i) <= n; i++) // 1 << i = power(2,i)
		for (int j = 0; j < n; j++)
		{
			x == 0 ? rminq[j][i] = rminq[j][i-1] : rmaxq[j][i] = rmaxq[j][i-1];
			if (j + (1 << (i-1)) < n)
			{
				if (x == 0)
					rminq[j][i] = Min(rminq[j][i], rminq[j+(1 << (i-1))][i-1]); 
					//将num分成两部分，max(j~j+2^i-1) = Max(max(j~j+2^(i-1)-1),max(j+2^(j-1), j+(2^j)-1));
				if (x == 1)
					rmaxq[j][i] = Max(rmaxq[j][i], rmaxq[j+(1<<(i-1))][i-1]);
					//求最大值同理
			}
		}
}

int QueryM(int f, int t, int x)
{
	int i;
	int l = t - f + 1;
	for (i = 0; (1 << (i+1)) <= l; i++);
	if (x == 0) 
		return Min(rminq[f][i], rminq[t - (1<<i) + 1][i]);
		//求最小值可以直接根据原来求过的结果，min(f,t) = Min(min(f, f+2^i-1), min(f+2^i, t));
		//即rminq[f][i], rminq[t-2^i+1][i]中的较小者
	if (x == 1)
		return Max(rmaxq[f][i], rmaxq[t - (1<<i) + 1][i]);
}

int func(int from, int to)
{
	int maxlength = -1;
	if (from >= to) return -1;
	int min_pos, max_pos;
	min_pos = QueryM(from, to, 0);
	max_pos = QueryM(from, to, 1);
	if (min_pos == max_pos) return -1;
	if (min_pos < max_pos)
	{
		maxlength = max_pos - min_pos;
		int temp;
		temp = func(from, min_pos-1);
		if (temp > maxlength) maxlength = temp;
		temp = func(max_pos+1, to);
		if (temp > maxlength) maxlength = temp;
	}
	if (min_pos > max_pos)
	{
		int temp;
		temp = func(from, max_pos);
		if (temp > maxlength) maxlength = temp;
		temp = func(max_pos+1, min_pos-1);
		if (temp > maxlength) maxlength = temp;
		temp = func(min_pos, to);
		if (temp > maxlength) maxlength = temp;
	}
	return maxlength;
}

int main()
{
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
		InitRMQ(0);
		InitRMQ(1);
		printf("%d\n", func(0, n-1));
	}
	return 0;
}