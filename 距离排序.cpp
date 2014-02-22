#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct point
{
	int x;
	int y;
	int z;
};
double dis(point m,point n)
{
   return pow((double)((m.x-n.x)*(m.x-n.x)+(m.y-n.y)*(m.y-n.y)+(m.z-n.z)*(m.z-n.z)),0.5);
}
int main()
{
	int n;
	struct point a[11];
	double d[100]={0},k;
	point *p[100][3],*temp=NULL;
	int i,j,t=1;
	cin>>n;
	for (i=1;i<=n;i++)
		cin>>a[i].x>>a[i].y>>a[i].z;
	for (i=1;i<=n-1;i++)
		for (j=i+1;j<=n;j++)
		{
			d[t]=dis(a[i],a[j]);
			p[t][1]=&a[i];
			p[t][2]=&a[j];
			t++;
		}
	t--;
	for (i=1;i<t;i++)
	{
       for (j=1;j<=t-i;j++)
	   {
		   if (d[j]<d[j+1])
		   {
			   k=d[j];
			   d[j]=d[j+1];
			   d[j+1]=k;
			   temp=p[j][1];
			   p[j][1]=p[j+1][1];
			   p[j+1][1]=temp;
			   temp=p[j][2];
			   p[j][2]=p[j+1][2];
			   p[j+1][2]=temp;
		   }
	   }
	}
	for (i=1;i<=t;i++)
	{
		cout<<fixed<<setprecision(2);
		cout<<"("<<p[i][1]->x<<","<<p[i][1]->y<<","<<p[i][1]->z<<")-("<<p[i][2]->x<<","<<p[i][2]->y<<","<<p[i][2]->z<<")="<<d[i]<<endl;
	}
	system("pause");
	return 0;
}
