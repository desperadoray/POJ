#include<iostream>
using namespace std;


template<class T>
class arrList //һ������ʵ������ջ��һ��ջ�������ǰ�˿�ʼ��һ����ĩ�˿�ʼ
{
	int maxSize;
	T *aList;
	int front;//frontΪָ�������ǰ�˿�ʼ��ջ��ջ����ջ��һֱ�������м��ƶ�
	int rear;//rearΪָ�������˿�ʼ��ջ��ջ����ջ��һֱ�������м��ƶ�
	//front rear ָ�����Զ�ǿ��ŵ�һ��λ�ü���λ�û�û�б����Ԫ�� �������˵��ջ����
public:
	arrList(int size)
	{
		maxSize = size;
		aList = new T[maxSize];
		front = 0;//ʹǰջ��ջ��ָ��aList[0]
		rear = maxSize-1;//��ջ��ջ��ָ��aList[maxSize-1]
	}
	~arrList()
	{
		delete []aList;
	}
	bool pushFront(const T item) //��ǰջpush��Ԫ�� item��ջ
	{
		if (front == rear + 1) //ǰջջ���Ѿ��ͺ�ջջ������
		{
			cout<<"ǰջ����"<<endl;
			return false;
		}
		aList[front++] = item;
		return true;
	}
	bool pushRear (const T item)//���ջpush��Ԫ�� item ��ջ
	{
		if (rear == front - 1)//ǰջջ���Ѿ��ͺ�ջջ������
		{
			cout<<"��ջ����"<<endl;
			return false;
		}
		aList[rear--] = item;
		return true;
	}
	bool popFront(T& item) //��ǰջ����Ԫ��
	{
		if (front == 0)//ǰջ�Ѿ�Ϊ��
		{
			cout<<"ǰջ�ѿ�"<<endl;
			return false;
		}
		item = aList[--front];
		return true;
	}
	bool popRear(T& item)//�Ӻ�ջ����Ԫ��
	{
		if (rear == maxSize - 1)//��ջ�Ѿ�Ϊ��
		{
			cout<<"��ջ�ѿ�"<<endl;
			return false;
		}
		item = aList[++rear];
		return true;
	}
	bool getFront(T& item)//�õ�ǰջջ��Ԫ�ز��Ҳ�����
	{
		if (front == 0)
		{
			cout<<"ǰջ�ѿ�"<<endl;
			return false;
		}
		item = aList[front-1];
		return true;
	}
	bool getRear(T& item)//�õ���ջջ��Ԫ�ز��Ҳ�����
	{
		if (rear == maxSize - 1)
		{
			cout<<"��ջ�ѿ�"<<endl;
			return false;
		}
		item = aList[rear+1];
		return true;
	}
};

int main()
{

}