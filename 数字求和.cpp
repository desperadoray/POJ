#include<iostream>
using namespace std;
int compare(const void*elem1 , const void *elem2)
{
	return *(int *)elem1-*(int *)elem2;
}
int main()
{
	int a;
	cin>>a;
	int num[6]={0};
	for (int i=1;i<=5;i++)
		cin>>num[i];
	qsort(num,6,sizeof(int),compare);
	int sum=0;
	int i=1;
	while (num[i]<a)
	{
		sum+=num[i];
		i++;
	}
	cout<<sum;
	return 0;
}