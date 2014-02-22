#include<iostream>
using namespace std;


template<class T>
class arrList //一个数组实现两个栈，一个栈从数组的前端开始，一个从末端开始
{
	int maxSize;
	T *aList;
	int front;//front为指向从数组前端开始的栈的栈顶，栈顶一直向数组中间移动
	int rear;//rear为指向数组后端开始的栈的栈顶，栈顶一直向数组中间移动
	//front rear 指向的永远是空着的一个位置即该位置还没有被填充元素 如果有则说明栈已满
public:
	arrList(int size)
	{
		maxSize = size;
		aList = new T[maxSize];
		front = 0;//使前栈的栈顶指向aList[0]
		rear = maxSize-1;//后栈的栈顶指向aList[maxSize-1]
	}
	~arrList()
	{
		delete []aList;
	}
	bool pushFront(const T item) //向前栈push进元素 item入栈
	{
		if (front == rear + 1) //前栈栈顶已经和后栈栈顶相遇
		{
			cout<<"前栈已满"<<endl;
			return false;
		}
		aList[front++] = item;
		return true;
	}
	bool pushRear (const T item)//向后栈push进元素 item 入栈
	{
		if (rear == front - 1)//前栈栈顶已经和后栈栈顶相遇
		{
			cout<<"后栈已满"<<endl;
			return false;
		}
		aList[rear--] = item;
		return true;
	}
	bool popFront(T& item) //从前栈弹出元素
	{
		if (front == 0)//前栈已经为空
		{
			cout<<"前栈已空"<<endl;
			return false;
		}
		item = aList[--front];
		return true;
	}
	bool popRear(T& item)//从后栈弹出元素
	{
		if (rear == maxSize - 1)//后栈已经为空
		{
			cout<<"后栈已空"<<endl;
			return false;
		}
		item = aList[++rear];
		return true;
	}
	bool getFront(T& item)//得到前栈栈顶元素并且不弹出
	{
		if (front == 0)
		{
			cout<<"前栈已空"<<endl;
			return false;
		}
		item = aList[front-1];
		return true;
	}
	bool getRear(T& item)//得到后栈栈顶元素并且不弹出
	{
		if (rear == maxSize - 1)
		{
			cout<<"后栈已空"<<endl;
			return false;
		}
		item = aList[rear+1];
		return true;
	}
};

int main()
{

}