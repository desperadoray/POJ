#include<iostream>
using namespace std;
int like[6][6]={{0,0,0,0,0,0},{0,0,0,1,1,0},{0,1,1,0,0,1},{0,0,1,1,0,1},{0,0,0,0,1,0},{0,0,1,0,0,1}};
int take[6]={0},book[6]={0};//take[i]��ʾ��i���õ���;book[i]��ǵ�i�����Ƿ����ߣ�
int n=0;
void tryman(int t)
{
	for (int i=1;i<=5;i++)
	{
		if ((like[t][i]==1)&&(book[i]==0))
		{
              take[t]=i;
			  book[i]=1;
			  if (t==5)
			  {
				  n++;
				  cout<<"solution["<<n<<"]"<<endl;
				  for (int j=1;j<=5;j++)
					  cout<<take[j]<<" "<<"�ָ�"<<char(j+64)<<endl;
				  cout<<"------------------------------------"<<endl;
			  }
			  else tryman(t+1);     
			  book[i]=0;
		}
	}
}
int main()
{
	tryman(1);
	system("pause");
	return 0;

}