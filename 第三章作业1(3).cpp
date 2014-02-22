#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool judge(char c1 , char c2 ) //判断c1是否比c2的优先级高或相等
{
	if (c1=='*'||c1=='/') return true;
	if (c1=='+'||c1=='-') 
	{
		if (c2=='*'||c2=='/') return false;
		return true;
	}
}


int main()
{
	char temp;
	stack<char> stack;
	bool space=0;
	while (true)
	{
		temp=cin.get();
		if (temp=='=')
		{
			while (!stack.empty())
			{
				char c=stack.top();
				stack.pop();
				if (c=='(') 
				{
					cout<<"The expression is wrong"<<endl;
					return 0;
				}
				else cout<<' '<<c;
			}
			cout<<" ="<<endl;
		}
		if ((temp!='+') && (temp!='=')&& temp!='-' && temp!='*' && temp!='/' && temp!= '(' && temp!=')') 
		{
			if (space==1) cout<<' ';
			cout<<temp;
			space=0;
		}   
		if (temp=='(') stack.push(temp);
		if (temp==')')
		{
			if (stack.empty())
			{
				cout<<"The expression is wrong"<<endl;
				break;
			}
			char c;
			while (true)
			{
				c=stack.top();
				stack.pop();
				if (c!='(')	cout<<' '<<c;
				else break;
			}
		}
		if (temp=='+'||temp=='-'||temp=='*'||temp=='/')
		{
			space=1;
			char c;
			if (!stack.empty()) c=stack.top();
			while ((c!='(')&&(judge(c,temp)))
			{
				char s;
				s=stack.top();
				stack.pop();
				cout<<' '<<s;
				if (!stack.empty()) c=stack.top();
				else break;
			}
			stack.push(temp);
		}
	}
	system("pause");
	return 0;
}