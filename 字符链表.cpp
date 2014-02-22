#include<iostream>
using namespace std;
struct linker
{
	char a;
	linker *next;
};
linker *create()
{
	char str1[100];
	cin>>str1;
	linker *temp,*follow,*head;
	head=new linker;
	temp=head;
	int i=0;
	while (str1[i]!='\0')
	{
		temp->a=str1[i];
		follow=temp;
		temp->next=new linker;
        temp=temp->next;
		i++;
	}
	if (i==0) head=NULL;
	else follow->next=NULL;
    delete temp;
	return head;
}
int main()
{
	linker *head;
	head=create();
	system("pause");
	return 0;
}