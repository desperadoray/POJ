#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int rule[51][3] = {0};
	for (int i = 0; i < n; i++)
	{
		char ch[3]={};
		cin >> ch;
		rule[i][0] = ch[0];
		rule[i][1] = ch[1];
		rule[i][2] = ch[2];
	}
	char str[110] = {};
	cin >> str;
	int length = strlen(str);
	for (int i = 0; i < length; i++)
	{
		for (int j = i; j < length; j++)
		{

		}
	}
}