#include<iostream>
#include<cmath>
using namespace std;
bool checksquare(int num)
{
	if (sqrt((double)(num))-(int)sqrt((double)(num))==0)
		return 1;
	return 0;
}

int main()
{
	int i,j,k,t=0,a[30]={0},b[30][4],c[4];
	for (i=100;i<=999;i++)
		if ((checksquare(i))&&(((i/100)!=(i%10))&&((i%10)!=((i/10)%10))&&((i/100)!=((i/10)%10)))) 
		{
			t++;
			a[t]=i;
			b[t][1]=i/100;b[t][2]=i/10%10;b[t][3]=i%10;
		}
	for (i=1;i<=t-2;i++)
		for (j=i+1;j<=t-1;j++)
			for(k=j+1;k<=t;k++)
			{
                 if ((b[i][1]!=b[j][1]&&b[i][1]!=b[j][2]&&b[i][1]!=b[j][3]&&b[i][1]!=b[k][1]&&b[i][1]!=b[k][2]&&b[i][1]!=b[k][3])
				   &&(b[i][2]!=b[j][1]&&b[i][2]!=b[j][2]&&b[i][2]!=b[j][3]&&b[i][2]!=b[k][1]&&b[i][2]!=b[k][2]&&b[i][2]!=b[k][3])
				   &&(b[i][3]!=b[j][1]&&b[i][3]!=b[j][2]&&b[i][3]!=b[j][3]&&b[i][3]!=b[k][1]&&b[i][3]!=b[k][2]&&b[i][3]!=b[k][3])
				   &&(b[j][1]!=b[k][1]&&b[j][1]!=b[k][2]&&b[j][1]!=b[k][3])
				   &&(b[j][2]!=b[k][1]&&b[j][2]!=b[k][2]&&b[j][2]!=b[k][3])
				   &&(b[j][3]!=b[k][1]&&b[j][3]!=b[k][2]&&b[j][3]!=b[k][3]))
				 {
					 c[1]=a[i];
					 c[2]=a[j];
					 c[3]=a[k];
					 for (int p=1;p<=3;p++)
						 cout<<c[p]<<endl;
				 }
			}
	int m;
	cin>>m;
    if (m>c[3]) cout<<c[1]<<" "<<c[2]<<" "<<c[3];
	if (m>c[2]&&m<=c[3]) cout<<c[1]<<" "<<c[2];
	if (m>c[1]&&m<=c[2]) cout<<c[1];
	return 0;
}
