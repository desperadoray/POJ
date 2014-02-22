#include<iostream>
using namespace std;
int arrive[4]={0};
int road[4]={0};
void seek(int step)
{
  if (step>3)
  {
	  for (int i=1;i<=3;i++)
		  cout<<road[i]<<" ";
	  cout<<endl;
  }
  else
  for (int i=1;i<=3;i++)
  {
	  if (arrive[i]==0)
	  {
		  road[step]=i;
          arrive[i]=1;
		  seek(step+1);
		  arrive[i]=0;
	  }
  }

    
}
int main()
{
	for (int i=1;i<=3;i++)
		arrive[i]=0;
	seek(1);
	system("pause");
	return 0;
}