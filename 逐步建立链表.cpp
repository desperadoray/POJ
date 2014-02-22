#include<iostream>
using namespace std;
struct linker *create();
void showlist(struct linker *);
struct linker
{
	int num;
	struct linker *next;
};
void main()
{
	struct linker *head;
	head=create();
	showlist(head);
	system("pause");
}
struct linker *create ()
{
	linker *follow,*temp,*head;
	int n,num;
	head=new linker;
	temp=head;
	n=0;
	cin>>num;
	while (num!=-1)
	{
		n++;
		temp->num=num;
		follow=temp;
		temp->next=new linker;
		temp=temp->next;
		cin>>num;
	}
	if (n==0) head=NULL;
	else follow->next=NULL;
	delete temp;
	return head;
}
void showlist(linker *head)
{
	linker *temp;
	if (head==NULL) cout<<"this is a null linker\n";
	else
	{
		temp=head;
		do
		{
			cout<<temp->num<<" ";
			temp=temp->next;
		}while (temp!=NULL);
	}
	cout<<endl;
}