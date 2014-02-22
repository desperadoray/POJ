#include<iostream>
using namespace std;
int main()
{
	int p,e,i,d,num=1;;
	while (cin>>p>>e>>i>>d)
	{
		if (p==-1&&e==-1&&i==-1&&d==-1) break;
		int j;
		for (j=d+1;j<=d+21252;j++)
			if ((j-p)%23==0) break;
		for (j=j;j<=d+21252;j=j+23)
			if ((j-e)%28==0) break;
		for (j=j;j<=d+21252;j=j+644)
			if ((j-i)%33==0) break;
		cout<<"Case "<<num<<": "<<"the next triple peak occurs in "<<j-d<<" days."<<endl;
		num++;
	}
	return 0;
}