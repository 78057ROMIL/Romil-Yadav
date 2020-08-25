#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#define null 0
class dll
{
public:
       struct node
    {
	int data;
	struct node *next;
	struct node *prev;
    }*temp,*head,*last,*tail,*pev;

  dll()
{
   head->next=null;
   head->prev=null;
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
 void dll::create()
 {
 char ch='y';
 int n;
 do
 {
temp=new node;
 temp->next=null;
 cout<<"enter data u want to enter  \n";
 cin>>n;
 if(head==null)
 {
 head=temp;
 head->data=n;
 last=head;
 }

 else
 {
 temp=new node;
 temp->data=n;
 temp->next=null;
 last->next=temp;
 temp->prev=last;
 last=temp;
 }

 cout<<" u want to enter new node\n";
 cin>>ch;
 }
 while(ch=='y');

}

void dll::traverse()
{
    cout<<"\nlinked list is \n";
    temp=head;
    while(temp!=null)
 {
     cout<<temp->data<<"->";
     temp=temp->next;

   }

   cout<<"null";
   }
 void dll::insbeg()
{
  int n;
  temp=new node;
  cout<<" Enter data\n";
  cin>>n;
  temp->data=n;
  temp->prev=null;
  temp->next=head;
  head->prev=temp;
  head=temp;
  }
void dll::insend()
{
int n;
temp=new node;
cout<<"Enter data u want to enter\n";
cin>>n;
temp->data=n;
temp->next=null;
temp->prev=last;
last->next=temp;
last=temp;
}
void dll::insbtw()
{
int d,n,count=1;
temp=new node;
pev=new node;
cout<<"Enter data\n";
cin>>d;
cout<<" At Which pos u want to insert\n";
cin>>n;
pev->data=d;
temp=head;
while(count<(n-1))
{
temp=temp->next;
count++;
}
pev->next=temp->next;
temp->next->prev=pev;
temp->next=pev;
pev->prev=temp;
  }
 void dll::delbeg()
 {
 temp=new node;
 temp=head;
 head=head->next;
 temp->next=null;
 head->prev=null;
 free(temp);
 }

 void dll::delend()
 {
 temp=new node;
 if(head->next==null)
 {
   temp=head;
   head=null;
   free(temp);
   }
else
{
temp=last;
last=last->prev;
temp->prev=null;
last->next=null;
free(temp);
}
}
void dll::delbtw()
{
int n,count=1;
temp=new node;
pev=new node;
temp=head;
cout<<"Which node u want to delete\n";
cin>>n;
while(count<n-1)
{
temp=temp->next;
count++;
}
pev=temp->next;
temp->next=temp->next->next;
temp->next->prev=temp;
free(pev);
}
void dll::search()
{
int n,f=0;
cout<<"Enter element to be search\n";
cin>>n;
temp=new node;
temp=head;
while(temp!=null)
{
if(temp->data==n)
{
cout<<"element found\n";
f++;
}
temp=temp->next;
}
if(f==0)
{
cout<<"Element not found\n";
}
}
void dll::reverse()
{
temp=new node;
pev=new node;
pev=head;
if(pev==null)
{
cout<<"List is empty\n";
}
else if(pev->next==null)
{
cout<<"Only 1 node is present";
}
else
{
while(pev!=null)
{
temp=pev->prev;
pev->prev=pev->next;
pev->next=temp;
pev=pev->prev;
}
if(temp!=null)
{
temp=temp->prev;
}
}
head=temp;
}
void dll::counter()
{
int count=1;
temp=new node;
temp=head;
while(temp->next!=null)
{
temp=temp->next;
count++;
}
cout<<"Total no. of nodes are --"<<count;
}










































































