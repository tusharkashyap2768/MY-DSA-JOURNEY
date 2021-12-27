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
int isSorted(struct Node *p)
{
int x=-65536;
while(p!=NULL)
{
if(p->data < x)
return 0;
x=p->data;
p=p->next;
}
return 1;
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
