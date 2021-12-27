
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



void max(struct Node *p)
{
    int max=INT32_MIN;
    while(p !=NULL)
    {
        if(p->data > max)
            max=p->data;
            p=p->next;
        
    }
      cout<<"maximum value in linked list :-"<<max<<endl;
    }

  void min(struct Node *p)
{
    int min=INT32_MAX;
    while(p !=NULL)
    {
        if(p->data < min)
            min=p->data;
            p=p->next;
        
    }
      cout<<"manimum value in linked list :-"<<min<<endl;
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
    max(first);
    min(first);
}
