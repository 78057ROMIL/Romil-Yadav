#include <iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node* top = NULL;
struct node* temp;
void push(int n)
{
temp=new node;
temp->data = n;
temp->next = top;
top = temp;
}
void pop() {
if(top==NULL)
cout<<"Stack Underflow"<<endl;
else
{
cout<<"The popped element is "<< top->data <<endl;
top = top->next;
}
}
void display() {
struct node* ptr;
if(top==NULL)
cout<<"stack is empty";
else
{
ptr = top;
cout<<"Stack elements are: ";
while (ptr != NULL)
{
cout<< ptr->data <<" ";
ptr = ptr->next;
}
}
cout<<endl;
}
void clear()
{
if(top==NULL)
{
cout<<"Stack is empty\n";
}
else
{

while(top!=NULL)
{
temp=top;
top=top->next;
free(temp);
}
cout<<"Stack is cleared\n";
}
}
void topele()
{
if(top==NULL)
{
cout<<"Stack is empty\n";
}
else
{
cout<<"Top element of stack is :"<<top->data<<endl;
}
}
int main()
{
clrscr();
int ch, n;
cout<<"1) Push in stack"<<endl;
cout<<"2) Pop from stack"<<endl;
cout<<"3) Display stack"<<endl;
cout<<"4) Clear stack"<<endl;
cout<<"5) Top element is"<<endl;
cout<<"6) Exit"<<endl;
do
{
cout<<"Enter choice: "<<endl;
cin>>ch;
switch(ch) {
case 1: {
	    cout<<"Enter value to be pushed:"<<endl;
	    cin>>n;
	    push(n);
	    break;
	 }
case 2: {
	    pop();
	    break;
	 }
case 3: {
	    display();
	    break;
	 }
case 4: {
	  clear();
	  break;
		}
case 5: {
	   topele();
	   break;
	   }


case 6: {
	    exit(0);

	 }

     default: {
	    cout<<"Invalid Choice"<<endl;
	 }
      }
}while(ch!=7);
getch();
return 0;
}
