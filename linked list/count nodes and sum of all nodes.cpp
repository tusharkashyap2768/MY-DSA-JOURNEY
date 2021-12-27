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
void count(struct Node *p)
{
    int c=0;
    while(p!=NULL)
    {
        p=p->next;
        c++;
    }
    cout<<"no of nodes in linked list :-"<<c<<endl;
}

void sum(struct Node *p)
{
    int s=0;
    while(p!=NULL)
    {
        s+=p->data;
        p=p->next;
    }
    cout<<"sum of nodes :-"<<s<<endl;
}

int main()
{
    struct Node * temp;
    int n;
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
    count(first);
    sum(first);
}
