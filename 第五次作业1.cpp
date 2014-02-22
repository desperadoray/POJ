#include <iostream>
#include <stack>
#include <time.h>
using namespace std;

template <class T>
class Node
{
public:
	Node<T> *leftchild;
	Node<T> *rightchild;
	T value;
	Node(T _value):value(_value)
	{
		leftchild = rightchild = NULL;
	}
};

template <class T>
class BST
{
	Node<T> *root;
public:
	BST():root(NULL)
	{
		//root->leftchild = root->rightchild = NULL;
	}
	bool isEmpty(){return (root == NULL);}
	Node<T> *getRoot(){return root;}
	void insertNode(Node<T> *pointer)
	{
		Node<T> *temp = NULL;
		if (isEmpty())
		{
			root = pointer;
			return;
		}
		else temp = root;
		while (temp != NULL)
		{
			if (temp->value == pointer->value)
			{
				cerr << "Illegal input!" << endl;
				return ;
			}
			if (temp->value > pointer->value)
			{
				if (temp->leftchild == NULL)
				{
					temp->leftchild = pointer;
					return;
				}
				else temp = temp->leftchild;
			}
			else if (temp->value < pointer->value)
			{
				if (temp->rightchild == NULL)
				{
					temp->rightchild = pointer;
					return;
				}
				else temp = temp->rightchild;
			}
		}
	}
};

template <class T>
int smallCount(Node<T> *root, T key)
{
	if (root == NULL) return 0;
	if (root->value > key)
	{
		return smallCount(root->leftchild, key);
	}
	else return 1+smallCount(root->leftchild, key) + smallCount(root->rightchild,  key);
}

template <class T>
int smallCount2(Node<T> *root, T key)
{
	stack<Node<T> *> s;
	s.push(NULL);
	Node<T> *pointer = root;
	int ans = 0;
	while (pointer != NULL)
	{
		if (pointer->value <= key)
		{
			ans ++;
			if (pointer->rightchild != NULL)
				s.push(pointer->rightchild);
			if (pointer->leftchild != NULL)
				pointer = pointer->leftchild;
			else
			{
				pointer = s.top();
				s.pop();
			}
		}
		else if (pointer->value > key)
			pointer = pointer->leftchild;
	}
	return ans;
}


int main()
{
	int n;
	BST<int> bst;
	while (cin >> n)
	{
		if (n == -1) break;
		bst.insertNode(new Node<int>(n));
	}
	int key;
	while (true)
	{
	cin >> key;
	cout << smallCount(bst.getRoot(), key) << endl;
	cout << smallCount2(bst.getRoot(), key) << endl;
	}
	system("pause");

}