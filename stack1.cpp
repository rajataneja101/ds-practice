#include<iostream>
using namespace std;
#define stacksize 10
int top=-1;
int stack[stacksize];
void Push(int n)
{
stack[++top]=n;
}
int Pop()
{
return stack[top--];
}
bool IsEmpty()
{
if(top==-1)
return true;
else
return false;
}
bool IsFull()
{
if(top==stacksize-1)
return true;
else
return false;
}
void Traverse()
{
int toptemp=top;
do
{
cout<<stack[toptemp--]<<endl;
}
while(toptemp>-0);
}
int main( )
{ int item, choice;
while( 1 )
{
cout<< "\n\n\n\n\n";
cout<< " ******* STACK OPERATIONS ********* \n\n";
cout<< " 1- Push item \n 2- Pop Item \n";
cout<< " 3- Traverse / Display Stack Items \n 4- Exit.";
cout<< " \n\n\t Your choice ---> ";
cin>> choice;
switch(choice)
{ case 1: if(IsFull())cout<< "\n Stack Full/Overflow\n";
else
{ cout<< "\n Enter a number: "; cin>>item;
Push(item); }
break;
case 2: if(IsEmpty())cout<< "\n Stack is empty) \n";
else
{item=Pop();
cout<< "\n deleted from Stack = "<<item<<endl;}
break;
case 3: if(IsEmpty())cout<< "\n Stack is empty) \n";
else
{ cout<< "\n List of Item pushed on Stack:\n";Traverse();
}
break;
case 4:
default:
cout<< "\n\n\t Invalid Choice: \n";
} // end of switch block
} // end of while loop
} // end of of main() function
