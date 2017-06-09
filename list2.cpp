#include<iostream>
#include<malloc.h>
using namespace std;
struct node
{
int data;
struct node *next;
};
struct node *head=NULL;
struct node *prev,*curr;
void insert(int n)
{
struct node *newnode;
newnode=new node;
newnode->data=n;
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
prev=curr=NULL;
for(curr=head;curr!=NULL;curr=curr->next)
{
if(newnode->data<curr->data)break;
else
prev=curr;
}
newnode->next=prev->next;
prev->next=newnode;
}
void traverse()
{
for(curr=head;curr!=NULL;curr=curr->next)
cout<<curr->data;
}
int main()
{
int inf, ch;
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
case 2:// DeleteNode(); 
break;
case 3: cout<< "\n Linked List Values:\n";
traverse(); break;
case 4: //exit(0);
break;
} // end of switch
} // end of while loop
return 0;
} // end of main ( ) function
