#include<iostream>
using namespace std;
int main()
{
	  int i,j,temp;
	  int a[100];
	  int n;
	  cin>>n;
	  for (i=1;i<=n;i++)
		  cin>>a[i];
	     for (j=1;j<=n;j++)
	          {
				   for (i=0;i<=n-j;i++)
				        {
							   if (a[i]>a[i+1])
							     {
								     temp=a[i];
									 a[i]=a[i+1];
									 a[i+1]=temp;
							     }
				        }
	          }
		 for (i=1;i<=n;i++)
			 cout<<a[i]<<"  ";
		system("pause");
		return 0;
		   
}