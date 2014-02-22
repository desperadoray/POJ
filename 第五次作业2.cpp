#include <iostream>
using namespace std;


template <class T>
class MinHeap
{
private :
	T *heapArray;
	int currentSize;
	int maxSize;
	int buildHeap();
public:
	int count;
	MinHeap(const int size)
	{
		if (size <= 0) return;
		currentSize = 0;
		maxSize = size;
		heapArray = new T[maxSize];
		count = buildHeap();
	}
	bool isEmpty(){return currentSize == 0;}
	bool isLeaf(int pos) const{return (pos >= currentSize/2 && pos <currentSize);}
	int leftChild(int pos) const{return pos * 2 + 1;}
	int rightChild(int pos) const{return pos * 2 + 2;}
	int parent(int pos) const{return (pos - 1) / 2;}
};

template <class T>
int MinHeap<T>::buildHeap()
{
	for (int i = 0;;i++)
	{
		if (i == maxSize)
		{
			cerr << "Out of range" << endl;
			return 0;
		}

		T temp;
		cin >> temp;
		if (temp == 0) 
		{
			break;
		}		
		heapArray[i] = temp;
		currentSize++;
	}
	int ans = 0 ;
	for (int left = currentSize/2 - 1; left >= 0; left--)
	{
		int i = left;
		int j = leftChild(i);
		T temp = heapArray[i];
		while (j < currentSize)
		{
			if (j < currentSize - 1 && heapArray[j] > heapArray[j+1])
				j++;
			if (temp > heapArray[j])
			{
				heapArray[i] = heapArray[j];
				ans ++;
				i = j;
				j = leftChild(j);
				
			}
			else break;
		}
		heapArray[i] = temp;
		ans ++;
	}
	return ans;
}


int main()
{
	MinHeap<char> m(100);
	cout << m.count << endl;
	system("pause");

}