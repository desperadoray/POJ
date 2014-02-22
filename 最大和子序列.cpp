#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	double a;
	cin >> n;
	int start_index = 0, end_index = 0;
	int tempstart = 0;
	double tempmax = 0.0;
	double max = 0.0;
	cin >> a;
	max = a;
	if (a > 0) 
	{
		tempmax = a;
		end_index = 0;
	}
	for (int i = 1; i < n; i++)
	{
		cin >> a;
		tempmax = tempmax + a;
		if (tempmax > max)
		{
			max = tempmax;
			start_index = tempstart;
			end_index = i;
		}
		if (tempmax < 0)
		{
			tempmax = 0;
			tempstart = i+1;
		}
	}
	printf("%g\n", max);
	printf("%d\n%d\n", start_index, end_index);
	return 0;
}