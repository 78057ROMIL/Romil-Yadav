#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#define null 0
class ll
{
public:
       struct node
    {
	int data;
	struct node *ptr;
    }*temp,*head,*last,*next,*pre;

  ll()
{
   head=null;
   }
 void create();
 void traverse();
 void insbeg();
 void insend();
 void insbtw();
 void delbeg();
 void delend();
 void delbtw();
 void search();
 void reverse();
 void counter();
 }s;

 void main()
 {
 int ch1;
 char ch2;

 clrscr();
      do
  {
     cout<<"1 CREATE\n 2 TRAVERSE\n 3 INSERT BEG\n 4 INSERT END\n 5 INSERT BTW\n 6 DELETE BEG\n 7 DELETE END\n 8 DELETE BTW\n 9 SEARCH\n 10 REVERSE\n 11 COUNTER 12 EXIT\n";
     cout<<"enter your choice\n";
     cin>>ch1;
 switch(ch1)
 {
  case 1: s.create();
  break;
  case 2: s.traverse();
  break;
  case 3: s.insbeg();
  break;
  case 4: s.insend();
  break;
  case 5: s.insbtw();
  break;
  case 6: s.delbeg();
  break;
  case 7: s.delend();
  break;
  case 8: s.delbtw();
  break;
  case 9: s.search();
  break;
  case 10: s.reverse();
  break;
  case 11: s.counter();
  break;
  case 12: exit(0);
  }
  cout<<" u want enter more\n";
  cin>>ch2;
  }while(ch2=='y');

 getch();
 }
 void ll::create()
 {
 char ch='y';
 int n;
 do
 {
 next=new node;
 next->ptr=null;
 cout<<"enter data u want to enter  \n";
 cin>>n;
 if(head==null)
 {
 head=temp=next;
 head->data=n;
 last=head;
 }

 else
 {
 temp=new node;
 temp->data=n;
 temp->ptr=null;
 last->ptr=temp;
 last=temp;
 }

 cout<<" u want to enter new node\n";
 cin>>ch;
 }
 while(ch=='y');

}

void ll::traverse()
{
    cout<<"\nlinked list is \n";
    temp=head;
    while(temp!=null)
 {
     cout<<temp->data<<"->";
     temp=temp->ptr;

   }

   cout<<"null";
   }
void ll::insbeg()
{
  int n;
  temp=new node;
  cout<<" Enter data\n";
  cin>>n;
  temp->data=n;
  temp->ptr=head;
  head=temp;
  }
void ll::insend()
{
int n;
temp=new node;
cout<<"Enter data u want to enter\n";
cin>>n;
temp->data=n;
last->ptr=temp;
last=temp;
last->ptr=null;
}
void ll::insbtw()
{
int d,n,count=1;
next=new node;
cout<<"Enter data\n";
cin>>d;
cout<<" At Which pos u want to insert\n";
cin>>n;
next->data=d;
temp=new node;
temp=head;
while(count<(n-1))
{
temp=temp->ptr;
count++;
}
next->ptr=temp->ptr;
temp->ptr=next;
  }
 void ll::delbeg()
 {
 temp=new node;
 temp=head;
 head=head->ptr;
 free(temp);
 }

 void ll::delend()
 {
 temp=new node;
 next=new node;
 if(head->ptr==null)
 {
   free(head);
   }
else
{
temp=head;
while(temp->ptr!=null)
{

temp=temp->ptr;
}

free(last);
last=temp;
temp=temp->ptr=null;
}
}
void ll::delbtw()
{
int n,count=1;
temp=new node;
next=new node;
temp=head;
cout<<"Which node u want to delete\n";
cin>>n;
while(count<n-1)
{
temp=temp->ptr;
count++;
}
next=temp->ptr;
temp->ptr=next->ptr;
free(next);
}
void ll::search()
{
int n;
cout<<"Enter element to be search\n";
cin>>n;
temp=new node;
temp=head;
while(temp->ptr!=null)
{
if(temp->data==n)
{
cout<<"element found\n";
}
temp=temp->ptr;
}
cout<<"Element not found\n";
}
void ll::reverse()
{
temp=new node;
next=new node;
pre=new node;
pre=null;
temp=head;
while(temp!=null)
{
next=temp->ptr;
temp->ptr=pre;
pre=temp;
temp=next;
}
head=pre;
}
void ll::counter()
{
int count=1;
temp=new node;
temp=head;
while(temp->ptr!=null)
{
temp=temp->ptr;
count++;
}
cout<<"Total no. of nodes are --"<<count;
}










































































