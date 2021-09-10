
#include <bits/stdc++.h>
using namespace std;

class Node{
  public : int data;
  Node*left;
  Node*right;
  Node(int d){
  data=d;
  left=right=NULL;
}};

Node*buildtree()
{
  int d;
  cin>>d;
  if(d==-1)
  {
    return NULL;
  }
  Node * n = new Node(d);
  n->left=buildtree();
  n->right=buildtree();
  return n;
}
void rightView(Node *root)
{
   if(!root)
   return ;
   queue<Node*>q;
   q.push(root);
   while(!q.empty())
   {
       int size=q.size();
        Node *t;
       while(size--)
       {
           t=q.front();
           q.pop();
           if(t->left)
           {
            q.push(t->left);
           }
           if(t->right)
           {
            q.push(t->right);
           }
       }
        cout<<t->data;
   }
}


int main()
{
 Node *root=buildtree();
//  levelorder(root);
//  cout <<height(root);
 rightView(root);
}

