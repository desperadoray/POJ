#include<iostream>
using namespace std;
int main()
{
	  int i,j,n;
	  cin>>n;
	  int a[1002];
	  for (i=1;i<=n;i++)
		  a[i]=1;
	  for (i=1;i<=n;i++)
		  for (j=1;j<=n;j++)
			  if (j%i==0)
					a[j]=a[j]*(-1);	  
		for (i=1;i<=n;i++)
			{
               if (a[i]==1) 
               {
               cout<<i;
               j=i;
               break;
               }
            }
        for (i=j+1;i<=n;i++)
              if (a[i]==1) cout<<" "<<i;
		return 0;
}
