#include<iostream>
#define N 20

using namespace std;

int fun(float *s, int n, float *aver)
{	float ave, t=0.0;
	int count=0, k, j;
	for(k=0;k<n;k++)
		t+=s[k];
	ave=t/n;
	for(j=0;j<n;j++)
		if(s[j]<ave) count++;
	  *aver=ave;
	return count;
}
int main( )
{
	float s[30], aver;
	int m, j;
	system("CLR");
	cout<<"\nPlease enter m£º";
	cin>>m;
	cout<<"\nPlease enter %d mark£º\n", m;
	for(j=0;j<m;j++)
		cin>>*(s+j);
	cout<<"\nThe number of students£º%d\n"<<fun(s, m, &aver);
	cout<<"Ave= "<<aver<<endl;
	system("pause");
	return 0;
}