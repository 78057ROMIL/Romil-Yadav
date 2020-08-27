#include <stdio.h>
#include<iostream.h>
#include<conio.h>
#include<process.h>

#define M 10

template <class X>

class Stack
{
	X arr[M];

 public:

     X item,r;
     int top;

     Stack()
     {
	top=-1;
     }

     void push(X a)
     {
	if(top==M)
		cout<<"\nStack is full";
	else
	    arr[++top] = a;
     }

     X pop()
     {
	if(top==-1)
	{
		cout<<"\nStack is empty";

	}
	else
		return arr[top--];
     }

     void clear()
     {
	 while(top!=-1)
	 {
		cout<<arr[top--]<<"->";
	 }
	 cout<<"NULL\n";


     }

     void display()
  {
   if(top>=0)
  {
    cout<<"Stack elements are :\n";
    for(int i=top;i>=0;i--)
   {
    cout<<arr[i]<<"->";
    }
    cout<<endl;
 }
    else
    {
    cout<<"Stack is empty :";
    }
    }

    void topele()
    {
    if(top==-1)
    {
     cout<<"Stack is empty: ";
     }
     else
    {
    cout<<"top element is:\n"<<arr[top];
    }
    }
};
int main()
{   clrscr();
    Stack <int>s;
    int ch;
    while(1)
    {
	cout<<"\n1.PUSH\n2.POP\n3.CLEAR\n4.DISPLAY\n5.TOPELEMENT\n6.EXIT\n";
	cin>>ch;
	switch(ch)
	{
	  case 1:
		  cout<<"\nEnter the value to be pushed : ";
		  cin>>s.item;
		  s.push(s.item);
		  break;
	  case 2: s.r = s.pop();
		  cout<<"\nValue popped out is : "<<s.r;
		  break;
	  case 3: s.clear();
		  break;
	  case 4: s.display();
		  break;
	  case 5: s.topele();
		  break;
	  case 6: exit(0);
	}
    }
getch();
	return 0;
}
