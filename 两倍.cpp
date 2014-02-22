#include<iostream>
using namespace std;
int mycompare (const void *elem1,const void *elem2)
{
	int *p1,*p2;
	p1=(int *)elem1;
	p2=(int *)elem2;
	return (*p1-*p2);
}
int main()
{
	while (1)
	{
	    int a[20]={0};
	    int n=0;
	    int count=0;
		cin>>a[0];
		if (a[0]==-1) break;
		else
		{
			while (a[n]!=0)
			{
				n++;
				cin>>a[n];
			}
			qsort(a,n-1,sizeof(int),mycompare);
			for (int i=0;i<n;i++)
				for (int j=i+1;j<n;j++)
					if (a[j]/a[i]==2&&a[j]%a[i]==0) count++;
			cout<<count<<endl;
		}
	}
	system("pause");
	return 0;
}