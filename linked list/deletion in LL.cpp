#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node * next;
}*first=NULL;

void create (int a[],int n)
{
    int i;
    struct Node *t,*last;
    first=new Node;
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(i= 1; i <n; i++)
    {
        t=new Node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }
}

void display(struct Node *p)
{
while(p!=NULL)
{
cout<<p->data<<" ";
p=p->next;
}
}
int Delete(struct Node *p,int index)
{
struct Node *q=NULL;
int x=-1,i;
if(index < 1 || index > count(p))
return -1;
if(index==1)
{
q=first;
x=first->data;
first=first->next;
free(q);
return x;
}
else
{
for(i=0;i<index-1;i++)
{
q=p;
p=p->next;
}
q->next=p->next;
x=p->data;
free(p);
return x;
}
}

int main()
{
    struct Node * temp;
    int n;
    int key,index,x;
    cout<<"enter the no of nodes in linked list :-"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter data of linked list :-"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    create(a,n);
    display(first);
    cout<<sorted(first);
     cout<<"enter the index where you want to delete"<<endl;
     cin>>index;
     cout<<Delete((first),index);
      delete(first);
}
