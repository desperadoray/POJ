#include<iostream>
using namespace std;
void showlist(struct linker *);
void search(struct linker *);
void sort(linker *head);
linker *dele(struct linker *head,int n);
linker *insert(linker *head,int n);
struct linker *create();
struct linker
{
	int num;
	linker *next;
};
int main()
{
    linker *head;
	head=create();
	search(head);
	head=dele(head,5);
	showlist(head);
	head=insert(head,7);
	showlist(head);
	sort(head);
	showlist(head);
	system("pause");
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
linker *create()
{
	struct linker*follow,*temp,*head;
	int num,n;
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
	if (n==0) head=NULL;else follow->next=NULL;
	delete temp;
	return head;
}
void search(linker *head)
{
    int n;	
	linker *temp;
	temp=head;cin>>n;
	while (temp!=NULL&&temp->num!=n)
	{
		temp=temp->next;
	}
	if (temp!=NULL) cout<<temp->num<<endl;
	else cout<<"not found"<<endl;
}

linker *dele(struct linker *head,int n)
{
	linker *temp,*follow;
	temp=head;
	if (head==NULL) return head;
	if (head->num==n)
	{
		head=head->next;
		delete temp;
		return head;
	}
	while (temp!=NULL&&temp->num!=n)
	{
		follow=temp;
		temp=temp->next;
	}
	if (temp==NULL) cout<<"not dound"<<endl;
	else
	{
		follow->next=temp->next;
		delete temp;
	}
	return head;
}
linker *insert(linker *head,int n)
{
	linker *temp,*unit,*follow;
	temp=head;
	unit=new linker;
	unit->num=n;unit->next=NULL;
	if (head==NULL)
	{
		head=unit;
		return head;
	}
	while (temp->next!=NULL&&temp->num<n)
	{
		follow=temp;temp=temp->next;
	}
	if (temp==head)
	{
		unit->next=head;head=unit;
	}
	else
	{
		if (temp->next==NULL) temp->next=unit;
		else 
		{
			follow->next=unit;
			unit->next=temp;
		}
	}
	return head;
}
void sort(linker *head)
{
	linker *temp,*follow,*tail=NULL;int t;
	while (head->next!=tail)
	{
		follow=head;
		temp=follow->next;
		while (temp!=tail)
		{
			if (follow->num>temp->num)
			{
				t=follow->num;
				follow->num=temp->num;
				temp->num=t;
			}
			follow=temp;
			temp=temp->next;
		}
		tail=follow;
	}
}
