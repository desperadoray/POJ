#include<iostream>
using namespace std;
struct linker
{
	int num;
	linker *next;
};
int n;
linker *create()
{
	struct linker *follow,*temp,*head;
	int t=0;
	head=new linker;
	temp=head;
	while (t!=n)
	{
        temp->num=++t;
		follow=temp;
		temp->next=new linker;
		temp=temp->next;
	}
	if (n==0) head=NULL;
	else if (n==1) return head;
	else follow->next=head;
	delete temp;
	return head;
}
void dele(linker *head)
{
	int m;cin>>m;
	int t=1;
	linker *temp,*follow;
	temp=head;
	follow=temp;
	while (head->next!=head)
	{
		if (m==1) {cout<<n<<endl;goto loop;}
		else
		{
        if (t!=m) 
		{
			t++;
			follow=temp;
			temp=temp->next;
		}
		else
		{
            t=1;
			follow->next=temp->next;
			head=follow->next;
			temp=head;
			follow=temp;
		}
		}
	}
	cout<<head->num<<endl;
     loop:;
}
int main()
{
  linker *head;
  while (1==1)
  {
	  cin>>n;
	  if (n==1) cout<<1<<endl;
	  else 
	  {
  head=create();
  dele(head);
	  }
  }
  system("pause");
}