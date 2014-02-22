#include<iostream>
#include<cmath>
using namespace std;
int m,n,k;
struct PLANT
{
	int num;
	int x;
	int y;
}plant[3000];
int compare(const void * elem1 , const void *elem2)
{
	PLANT *p1,*p2;
	p1=(PLANT *)elem1;
	p2=(PLANT *)elem2;
	return p2->num-p1->num;
}
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		memset(plant,0,sizeof(plant));
	cin>>m>>n>>k;
	int total=m*n;
	int a=0,b=0;
	for (int i=0;i<total;i++)
	{
		cin>>plant[i].num;
		plant[i].x=a;
		plant[i].y=b;
		b++;
		if (b==n)
		{
			a++;
			b=0;
		}
	}
	qsort(plant,total,sizeof(PLANT),compare);
	int time=0;
	time=plant[0].x+1+1;
	int count=0;
	total=0;
	while (time+plant[count].x+1<=k)
	{
		total+=plant[count].num;
		time+=abs(plant[count].x-plant[count+1].x)+abs(plant[count].y-plant[count+1].y);
		time++;
		count++;
	}
	cout<<total<<endl;
	}
	return 0;
}