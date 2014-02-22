#include<iostream>
using namespace std;
char map[110][110]={};
int judge[110][110]={0};
int ha,la,hb,lb;
bool search(int a,int b)
{
	int dx[5]={0,1,-1,0,0};
	int dy[5]={0,0,0,1,-1};
	if (a==hb&&b==lb) return true;
	for (int i=1;i<=4;i++)
		if (map[a+dx[i]][b+dy[i]]=='.'&&judge[a+dx[i]][b+dy[i]]==0)
		{
			judge[a+dx[i]][b+dy[i]]=1;
			if (search(a+dx[i],b+dy[i])) return true;
		}
	return false;
}
int main()
{
	int k;
	cin>>k;
	while (k--)
	{
		int n;
		cin>>n;
		memset(map,'#',sizeof(map));
		memset(judge,0,sizeof(judge));
		for (int i=1;i<=n;i++)
			for (int j=1;j<=n;j++)
				cin>>map[i][j];
		cin>>ha>>la>>hb>>lb;
		ha++;hb++;la++;lb++;
		if (map[ha][la]=='#'||map[hb][lb]=='#') cout<<"NO\n";
		else
		{
			judge[ha][la]=1;
			if (search(ha,la)) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
	return 0;
}