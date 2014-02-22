#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	string temps1, temps2;
	int length = s.length();
	int i = 0 , j = length - (length % 2 == 0);

	while (true)
	{
		if (i < length)
		{
			temps1 += s[i];
			i += 2;
		}
		if (j > 0)
		{
			temps2 += s[j];
			j -= 2;
		}
		if (i >= length && j <= 0)
			break;
	}
	s = temps1 + temps2;
	cout << s << endl;
}