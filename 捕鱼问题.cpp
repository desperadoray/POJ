#include<iostream>
using namespace std;
int main()
{
	int fish[6]={1,1,1,1,1,1};
	int i;
	do
	{
		fish[5]=fish[5]+5;
		for (i=4;i>=1;i--)
		{
			 if (fish[i+1]%4!=0)
				 break;
			 else 
				 fish[i]=fish[i+1]*5/4+1;
		}
	}
	while(i>=1);
	for (i=1;i<=5;i++)
		cout<<fish[i]<<endl;
	system("pause");
	return 0;

}