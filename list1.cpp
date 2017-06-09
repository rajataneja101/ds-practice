#include<iostream>
#include<malloc.h>

using namespace std;
struct node
{
int data;
struct node *next;
};
struct node *head=NULL;
struct node *prev,*cur;
void insert(int item)
{
	struct node *newnode;
	newnode=new node;
	newnode->data=item;
	newnode->next=NULL;
	if(head==NULL)
	{
	head=newnode;
	return;
	}
	if(newnode->data<=head->data)
	{
		newnode->next=head;
		head=newnode;
		return;
	}
	prev=cur=NULL;
	for(cur=head;cur!=NULL;cur=cur->next)
	{
		if(newnode->data<cur->data)
		break;
		else
		prev=cur;
	}
	newnode->next=prev->next;
	prev->next=newnode;
}

void traverse()
{
for(cur=head;cur!=NULL;cur=cur->next)
cout<<cur->data;
}
int main()
{ int inf, ch;
while(1)
{ cout<< " \n\n\n\n Linked List Operations\n\n";
cout<< " 1- Add Node \n 2- Delete Node \n";
cout<< " 3- Traverse List \n 4- exit\n";
cout<< "\n\n Your Choice: "; cin>>ch;
switch(ch)
{ case 1: cout<< "\n Put info/value to Add: ";
cin>>inf;
insert(inf);
break;
case 2: //DeleteNode(); 
break;
case 3: cout<< "\n Linked List Values:\n";
traverse(); break;
case 4: 
break;
} // end of switch
} // end of while loop
return 0;
} // end of main ( ) function

