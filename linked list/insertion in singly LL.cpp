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

int count(struct Node *p)
{
    int c=0;
    while(p!=NULL)
    {
        p=p->next;
        c++;
    }
    cout<<"no of nodes in linked list :-"<<endl;
    return c;
}

void insert(struct Node *p,int index,int x)
{
struct Node *t;
int i;
if(index < 0 || index > count(p))
return;
t=new Node;
t->data=x;
if(index == 0)
{
t->next=first;
first=t;
}
else
{
for(i=0;i<index-1;i++)
p=p->next;
t->next=p->next;
p->next=t;
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
    cout<<"enter the index where you want to insert"<<endl;
    cin>>index;
    cout<<"enter the no"<<endl;
    cin>>x;
    insert(first,index,x);
    display(first);
 
}
