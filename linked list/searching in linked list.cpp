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

void display(struct Node*p)
{
    while(p!=NULL)
    {
        cout<<"data ="<<p->data<<endl;
        p=p->next;
    }
    
}
void lsearch(struct Node *p,int key)
{
    int c=0;
while(p!=NULL)
{
    if(p->data==key)
    {
        c++;
    }
    p=p->next;
}
 if(c>0)
    {
        
        cout<<"element found"<<endl;
    }
    else
    cout<<"element not found"<<endl;
}

int main()
{
    struct Node * temp;
    int n;
    int key;
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
    cout<<"enter the element you want to search :-"<<endl;
    cin>>key;
    lsearch(first,key);
}


OPTIMIZED SEARCHING :-
  struct Node * LSearch(struct Node *p,int key)
{
struct Node *q;
while(p!=NULL)
{
if(key==p->data)
{
q->next=p->next;
p->next=first;
first=p;
return p;
}
q=p;
p=p->next;
}
return NULL;
}
