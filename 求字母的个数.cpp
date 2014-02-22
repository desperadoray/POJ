#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int count_a=0,count_e=0,count_i=0,count_o=0,count_u=0;
	int l=a.length();
	int i;
	for (i=0;i<=l-1;i++)
	{
		if ((int)a[i]==97) count_a++;
			if ((int)a[i]==101) count_e++;
				if ((int)a[i]==105) count_i++;
					if ((int)a[i]==111) count_o++;
						if ((int)a[i]==117) count_u++;
	}
	cout<<count_a<<" ";
	cout<<count_e<<" ";
	cout<<count_i<<" ";
	cout<<count_o<<" ";
	cout<<count_u<<" ";
	system("pause");
	return 0;
}