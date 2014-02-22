#include<iostream>
using namespace std;
int compare(const void *elem1,const void *elem2)
{
	int *p1,*p2;
	p1=(int *)elem1;
	p2=(int *)elem2;
	return (*p1-*p2);
}
int main()
{
	int a[10]={0};
	for (int i=0;i<=9;i++)
		cin>>a[i];
	qsort(a,10,sizeof(int),compare);
	for (int i=0;i<=9;i++)
		cout<<a[i]<<" ";
	system("pause");
	return 0;
}
