#include <iostream>
#include <cmath>
using namespace std;

int ksum(double *a, int s, int e, double k) 
{ 
  int i; 
  double x; 
  for (x = 1.0; x <= k; x += x) { 
    for (i = s; i < e; i++) { 
      if (x == a[i]) { 
        k -= x; 
      } 
    } 
  } 
  for (i = s; i < e; i++) { 
    if (abs((int)((k - a[i]) * 10000)) == 0) { 
      k -= a[i]; 
    } 
  } 
  if (abs((int)(k * 10000)) == 0) { 
    return 1; 
  } 
  else if (k > 0) { 
    return 0; 
  } 
  else if (k < 0 && s < e) { 
    return ksum(a, s, e-1, k-a[e-1]) || 
      ksum(a, s, e-1, k); 
  } else { 
    return 0; 
  } 
} 

int mycompare(const void * elem1, const void *elem2)
{
	double *p1 = (double *)elem1;
	double *p2 = (double *)elem2;
	if (*p1 < *p2) return -1;
	if (*p1 > *p2) return 1;
	else if (abs((int)((*p1-*p2) * 10000)) == 0) return 0;
}

int main()
{
	int n;
	double k;
	cin >> n >> k;
	double* a = new double[n];
	double* b = new double[n];
	for (int i = 0; i < n; i++)
		b[i] = 0;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int start = 1;
	int b_index = 0;
	while (start < n)
	{
		if (abs((int)(k * 10000)) == 0) break;
		if (ksum(a, start, n, k) == 0)
		{
			k -= a[start-1];
			b[b_index++] = a[start-1];			
		}
		start++;
	}
	if (abs((int)(k * 10000)) != 0) b[b_index++] = a[n-1];

	qsort(b, b_index, sizeof(double), mycompare);

	for (int i = 0; i < b_index; i++)
		printf("%g\n", b[i]);
	delete []a;
	delete []b;
	return 0;

}