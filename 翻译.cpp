#include<iostream>
using namespace std;
struct apple
{
	int weight;
};
static int totalweight;
int getweight(apple a)
{
	return a.weight;
}
static int gettotalweight(apple a)
{
	return a.weight;
}
int main()
{
	apple a;
	getweight(a);
	gettotalweight(a);
	return 0;
}