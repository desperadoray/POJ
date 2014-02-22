#include<stdio.h>
#include<math.h>
int main()
{
   float x,y=0,a;
   scanf("%f",&a);
  ¡¡for (x=a/2;fabs(x-y)>=1e-5;x=(y+a/y)/2.0)
    {y=x;}
    printf("%6.2f\n",x);
    getchar();
   getchar();
   return 0;
}
