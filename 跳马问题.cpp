#include<iostream>
using namespace std;
int num=0;
int dx[5]={0,1,2,2,1};
int dy[5]={0,2,1,-1,-2};
int mark[9]={0};
void jump(int x,int y,int step)
{
	 int x1,y1;
	 for (int k=1;k<=4;k++)
	 {
		 x1=x+dx[k];
		 y1=y+dy[k];
		 if ((x1>=0)&&(x1<=8)&&(y1>=0)&&(y1<=4)&&(!((x1==8)&&(y1<4))))
		 {
			 mark[step]=k;
			 if ((x1==8)&&(y1==4))
			 {
				 num++;
				 cout<<"No. "<<num<<" : ";
				 for (int t=1;t<=step;t++)
                        cout<<mark[t]<<" ";
				 cout<<endl;
			 }
			 else jump(x1,y1,step+1);
		 }

	 }
}
int main()
{
	jump(0,0,1);
	system("pause");
	return 0;
}