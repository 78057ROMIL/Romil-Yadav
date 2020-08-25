#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#define null 0
class cll
{
public:
       struct node
    {
	int data;
	struct node *next;

    }*temp,*head,*last,*tail,*pev,*pre;

  cll()
{
   head->next=null;

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
 void cll::create()
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
 tail=head;
 }

 else
 {

 temp->data=n;
 tail->next=temp;
 tail=temp;
 tail->next=head;
 }

 cout<<" u want to enter new node\n";
 cin>>ch;
 }
 while(ch=='y');

}

void cll::traverse()
{
    cout<<"\nlinked list is \n";
    temp=head;
    while(temp->next!=head)
 {
     cout<<temp->data<<"->";
     temp=temp->next;

   }

   cout<<temp->data;
   }
 void cll::insbeg()
{
  int n;
  temp=new node;
  cout<<" Enter data\n";
  cin>>n;
  temp->data=n;
  if(tail==null)
  {
  tail=temp;
  tail->next=temp;
  }
  else
  {
  temp->next=tail->next;
  tail->next=temp;
  head=temp;
  }
  }
void cll::insend()
{
int n;
temp=new node;
cout<<"Enter data u want to enter\n";
cin>>n;
temp->data=n;
if(tail==null)
{
tail=temp;
tail->next=temp;
}
else
{
temp->next=tail->next;
tail->next=temp;
tail=temp;
}


}
void cll::insbtw()
{
int d,n,count=1;
temp=new node;
pev=new node;
cout<<"Enter data\n";
cin>>d;
cout<<" At Which pos u want to insert\n";
cin>>n;
pev->data=d;
temp=tail->next;
while(count<(n-1))
{
 temp=temp->next;
 count++;
 }
pev->next=temp->next;
temp->next=pev;
  }
 void cll::delbeg()
 {
 temp=new node;
 temp=tail->next;
 if(tail==null)
 {
 cout<<"list is empty\n";
 }
 else if(temp->next==temp)
 {
 tail=0;
 free(temp);
 }
 else
 {
 tail->next=temp->next;
 head=temp->next;
 free(temp);
 }
 }

 void cll::delend()
 {
 pev=new node;
 temp=new node;
 temp=tail->next;
 while(temp->next!=tail->next)
 {
 pev=temp;
 temp=temp->next;
 }
 pev->next=tail->next;
 tail=pev;
 free(temp);
}
void cll::delbtw()
{
int n,count=1;
temp=new node;
pev=new node;
cout<<"Which node u want to delete\n";
cin>>n;
temp=tail->next;
while(count<(n-1))
{
temp=temp->next;
count++;
}
pev=temp->next;
temp->next=pev->next;
free(pev);
}
void cll::search()
{
int n,flag=0;
cout<<"Enter element to be search\n";
cin>>n;
temp=new node;
temp=tail->next;
while(temp!=tail->next)
{
if(temp->data==n)
{
cout<<"element found\n";
flag++;
}
temp=temp->next;
}
if(tail->data==n)
{  cout<<"element found\n";
flag++;
}
if(flag==0)
{
cout<<"Element not found\n";
}
}
void cll::reverse()
{
temp=new node;
pre=new node;
pev=new node;
temp=tail->next;
pre=temp->next;
if(tail==null)
{
cout<<"empty linked list\n";
}
else if(temp->next==temp)
{
cout<<"one node is present\n";
}
else
{
while(temp!=tail)
{
pev=temp;
temp=pre;
pre=temp->next;
temp->next=pev;
}
pre->next=tail;
tail=pre;
head=temp;
}}
void cll::counter()
{
int count=1;
temp=new node;
temp=tail->next;
while(temp->next!=tail->next)
{
temp=temp->next;
count++;
}
cout<<"Total no. of nodes are --"<<count;
}










































































