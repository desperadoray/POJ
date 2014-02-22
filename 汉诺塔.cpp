#include<iostream>
using namespace std;
int step=1;
void move(int m,char p,char q,char r)
{
	if (m==1) 
	{    
		
		cout<<"step"<<"["<<step<<"]"<<"move 1 from "<<p<<" to "<<r<<endl;
        step++;;	
	}
	else 
	{
		move(m-1,p,r,q);
		cout<<"step"<<"["<<step<<"]"<<"move "<<m<<" from "<<p<<" to "<<r<<endl;
		step++;
		move(m-1,q,p,r);
	}
}
int main()
{
	int n;
	cin>>n;
	move(n,'a','b','c');
	system("pause");
	return 0;
}