#include<iostream>
using namespace std;
int main()
{
	   int a[100][100],b[100][100],c[100][100];
	   memset(a,0,sizeof(a));
	   memset(b,0,sizeof(b));
	   memset(c,0,sizeof(c));
	   int i,j;
	   int n,p,m;
	   cin>>n>>p>>m;
	   for (i=1;i<=n;i++)
		     for (j=1;j<=p;j++)
				  cin>>a[i][j];
       for (i=1;i<=p;i++)
		     for (j=1;j<=m;j++)
				  cin>>b[i][j]; 
	   int k;
          for (i=1;i<=p;i++)
			       for (j=1;j<=p;j++)
				   {
                         c[i][j]=0;
					    for (k=1;k<=p;k++)
					       c[i][j]=c[i][j]+a[i][k]*b[k][j];
				   }
	       
	   cout<<"A，B矩阵乘法的结果是"<<endl;
	   for (i=1;i<=p;i++)
			      {
                          for (j=1;j<=p;j++)
                            {   
			                   cout <<c[i][j]<<" ";
                            }
                          cout<<endl;
                  } 
	   system("pause");
	   return 0;
}
