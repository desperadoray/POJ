#include<iostream>
using namespace std;
class student
{
private:
	char szname[20];
	int age;
	int id;
	int ave1,ave2,ave3,ave4;
public:
	void input();
	void output();
};
void student::input()
{
	int i=0;
	char temp;
	while ((temp=getchar())!=',')
		szname[i++]=temp;
	szname[i]='\0';
	scanf("%d,%d,%d,%d,%d,%d",&age,&id,&ave1,&ave2,&ave3,&ave4);
}
void student::output()
{
	int ave=(ave1+ave2+ave3+ave4)/4;
	printf("%s,%d,%d,%d",szname,age,id,ave);
}
int main()
{
	student s1;
	s1.input();
	s1.output();
	return 0;
}