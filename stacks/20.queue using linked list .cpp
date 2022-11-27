#include <bits/stdc++.h>
using namespace std;
struct Node
{
int data;
struct Node *next;
}*front=NULL,*rear=NULL;
void enqueue(int x)
{
struct Node *t;
t=new Node;
if(t==NULL)
  cout<<"Queue is FUll\n";
else
{
t->data=x;
t->next=NULL;
if(front==NULL)
front=rear=t;
else
{
rear->next=t;
rear=t;
}
}
}
int dequeue()
{
int x=-1;
struct Node* t;
if(front==NULL)
cout<<"Queue is Empty\n";
else
{
x=front->data;
t=front;
front=front->next;
free(t);
}
return x;
}
void Display()
{
struct Node *p=front;
while(p)
{
cout<<p->data<<endl;
p=p->next;
}
}
int main()
{
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
enqueue(50);
Display();
printf("%d ",dequeue());
return 0;
}
