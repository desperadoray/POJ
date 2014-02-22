#include<stdio.h>
int gcd(int a,int b)
{
if(b==0) return a; 
return gcd(b,a%b);
}

void exgcd(int a,int b,__int64 &x,__int64 &y)
{
if(b==0)
{
    x=1;
    y=0;
    return ;
}
exgcd(b,a%b,x,y);
__int64 t=x;
x=y;
y=t-a/b*y;
return ;
}

int main()
{ __int64 x,y,m,n,l,p,t;
int c,a,b,d;
scanf("%I64d%I64d%I64d%I64d%I64d",&x,&y,&m,&n,&l);
bool flag=0;
if(m==n) flag=1;
else 
{
    a=n-m;
    b=l;
    d=x-y;
    c=gcd(a,b);    
    if(d%c!=0) flag=1;
}
   
if(flag) printf("Impossible");
else
{
    a=a/c;
    b=b/c;
    exgcd(a,b,t,p);
    d=d/c;
    t=d*t;
    t=t%b;
    if(t<0) t=t+b;
    printf("%d\n",t%b);
}

return 0;
}
