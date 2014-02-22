#include <iostream>
using namespace std;

struct Interval
{
	int x;
	int y;
};

int mycompare(const void *elem1, const void *elem2)
{
	Interval *p1 = (Interval *)elem1;
	Interval *p2 = (Interval *)elem2;
	if (p1->x == p2->x)
		return p2->y - p1->y;
	return p1->x - p2->x;
}

int main()
{
	int n;
	cin >> n;
	Interval *interval = new Interval[n];
	for (int i = 0; i < n; i++)
		cin >> interval[i].x >> interval[i].y;
	qsort(interval, n, sizeof(Interval), mycompare);


	int begin = interval[0].x;
	int end = interval[0].y;
	for (int i = 1; i < n; i++)
	{
		if (interval[i].x > begin && interval[i].x <= end)
		{
			if (interval[i].y <= end) 
				continue;
			if (interval[i].y > end)
				end = interval[i].y;
		}
		if (interval[i].x > end)
		{
			cout << begin << " " << end << endl;
			begin = interval[i].x;
			end = interval[i].y;
		}
	}
	cout << begin << " " << end;
	delete []interval;
	return 0;
}