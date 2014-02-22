#include<iostream>
using namespace std;
struct mouse
{
	int weight;
	char color[10];
}m[100];
int mycompare(const void *elem1,const void *elem2)
{
	mouse *p1=(mouse *)elem1;
	mouse *p2=(mouse *)elem2;
	return (-1)*((*p1).weight-(*p2).weight);
}
int main()
{
	int n;
	cin>>n;
	int count=0;
	while (n--)
	{
		cin>>m[count].weight>>m[count].color;
		count++;
	}
	int i;
	qsort(m,count,sizeof(mouse),mycompare);
	for (i=0;i<count;i++)
		cout<<m[i].color<<endl;
	system("pause");
	return 0;

}