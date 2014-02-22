#include<iostream>
using namespace std;

//��㶨��
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
	CircularQueue()//���캯��
	{
		size = 0;
		front = rear = NULL;
	}
	~CircularQueue(){clear();}//��������
	void clear()//��ն���
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
	bool enQueueFront(const T item)//item��ӣ������ͷ
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
	bool deQueueFront(T& item)//���ض�ͷԪ�ز��Ӷ�����ɾ��
	{
		Link<T> *temp;
		if (size == 0)
		{
			cout<<"����Ϊ��"<<endl;
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
	bool enQueueRear(const T item)//item��ӣ������β
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
	bool deQueueRear(T& item)//���ض�βԪ�ز��Ӷ�����ɾ��
	{
		Link<T> *temp;
		if (size == 0)
		{
			cout<<"����Ϊ��"<<endl;
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
	bool getFront(T& item)//���ض�ͷԪ�أ�����ɾ��
	{
		if (size == 0)
		{
			cout<<"����Ϊ��"<<endl;
			return false;
		}
		item = front->data;
		return true;
	}
	bool getRear(T& item)//���ض�βԪ�أ�����ɾ��
	{
		if (size == 0)
		{
			cout<<"����Ϊ��"<<endl;
			return false;
		}
		item = rear->data;
		return true;
	}
	
};

int main()
{

}