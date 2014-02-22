#include<iostream>
using namespace std;
struct linker
{
	int num;
	linker *next;
};
linker *create(int n)
{
	int i=1;
	linker *temp,*follow,*head;
	head=new linker;
	temp=head;
    while (i<=n)
	{
		temp->num=i++;
        follow=temp;
		temp->next=new linker;
		temp=temp->next;
	}
    if (i==1) temp->next=head;
	else follow->next=head;
	delete temp;
	return head;
}
linker *dele(linker *head,int m)
{
	int i=1;
	linker *temp,*follow;
	temp=head;
	while (head->next!=head) 
	{
		if (i<m)
		{
              follow=temp;
			  temp=temp->next;
			  i++;
		}
		else
		{
		follow->next=temp->next;
		head=follow->next;
		temp=head;
		follow=temp;
		i=1;
		}
	}
	return head;
} 
int main()
{
	int m,n;
	while (cin>>n>>m)
	{
		if (!(n==0&&m==0))
		{
			if (m==1) cout<<n<<endl;
			else
			{
           linker *head,*p;
		   head=create(n);
		   p=dele(head,m);
		   cout<<p->num<<endl;
			}
		}
		else break;
	}
	return 0;
}