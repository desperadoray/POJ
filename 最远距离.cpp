#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	  float a[100],b[200];
	  double max,s,temp;
	  int i,j,n;
	  cin>>n;
	  for (i=0;i<=n-1;i++)
	  {
		  cin>>a[i]>>b[i];
	  }
	  max=0;  
	  for (i=0;i<=n-2;i++)
	  {
		    for (j=i+1;j<=n-1;j++)
			{   
				 s=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
				if (s>max)
				{
					temp=max;
				    max=s;
					s=temp;
				}
			}
	  }
	  printf("%.4f\n", max);
	  return 0;
}