#include<iostream>
using namespace std;
int n,d[100][100]={0};
int max(int p,int q)
{
	if (p==n) return d[p][q];
	int amax[100][100];
	for (int i=0;i<=99;i++)
		for (int j=0;j<=99;j++)
			amax[i][j]=-1;
	if (amax[p+1][q]==-1)
		amax[p+1][q]=max(p+1,q);
	if (amax[p+1][q+1]==-1)
		amax[p+1][q+1]=max(p+1,q+1);
	if (amax[p+1][q]>amax[p+1][q+1])
		return d[p][q]+amax[p+1][q];
	return d[p][q]+amax[p+1][q+1];

}
int main()
{
	cin>>n;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=i;j++)
			cin>>d[i][j];
	cout<<max(1,1)<<endl;
	system("pause");
	return 0;
}