#include<iostream>
using namespace std;

//结点定义
template<class T>
class Link
{
	Link<T> *next;
	Link<T> *prev;
	T data;
public:
	Link(T _data)
	{
		next = prev = NULL;
		data = _data;
	}
};

template<class T>
class CircularQueue
{
	Link<T> *front;
	Link<T> *rear;
	int size;
public:
	CircularQueue()//构造函数
	{
		size = 0;
		front = rear = NULL;
	}
	~CircularQueue(){clear();}//析构函数
	void clear()//清空队列
	{
		while(front != NULL)
		{
			rear = front ; 
			front = front->next;
			delete rear;
		}
		rear=NULL;
		size=0;
	}
	bool enQueueFront(const T item)//item入队，插入队头
	{
		if (front == NULL)
			front = rear = new Link<T>(item);
		else 
		{
			front->prev = new Link<T>(item);
			front->prev->next = front;
			front = front->prev;
		}
		size++;
		return true;

	}
	bool deQueueFront(T& item)//返回队头元素并从队列中删除
	{
		Link<T> *temp;
		if (size == 0)
		{
			cout<<"队列为空"<<endl;
			return false;
		}
		item = front->data;
		temp = front;
		front = front->next;
		front->prev=NULL;
		delete temp;
		if (front == NULL)
			rear = NULL;
		size--;
		return true;
	}
	bool enQueueRear(const T item)//item入队，插入队尾
	{
		if (rear == NULL)
			front = rear = new Link<T>(item);
		else
		{
			rear->next = new Link<T>(item);
			rear->next->prev = rear;
			rear = rear->next;
		}
		size++;
		return true;
	}
	bool deQueueRear(T& item)//返回队尾元素并从队列中删除
	{
		Link<T> *temp;
		if (size == 0)
		{
			cout<<"队列为空"<<endl;
			return false;
		}
		item = rear->data;
		temp = rear;
		rear = rear->prev;
		rear->next = NULL;
		delete temp;
		if (rear == NULL)
			front = NULL;
		size--;
		return true;
	}
	bool getFront(T& item)//返回队头元素，但不删除
	{
		if (size == 0)
		{
			cout<<"队列为空"<<endl;
			return false;
		}
		item = front->data;
		return true;
	}
	bool getRear(T& item)//返回队尾元素，但不删除
	{
		if (size == 0)
		{
			cout<<"队列为空"<<endl;
			return false;
		}
		item = rear->data;
		return true;
	}
	
};

int main()
{

}