

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

void levelorder(Node *root)
{
queue<Node*> q;
q.push(root);
q.push(NULL);

while(!q.empty()){
   Node * temp=q.front();
   if(temp==NULL)
   {
    cout<<endl;
    q.pop();

    //insert new null for next level
    if(!q.empty())
    {
      q.push(NULL);
    }
   }
   else
   {
     q.pop();
     cout<<temp->data<<" ";
     if(temp->left)
     {
       q.push(temp->left);
     }

     if(temp->right)
     {
       q.push(temp->right);
     }
   }
}
return;
}

/ void levelOrder(Node* root)
//     {
  
//       if(!root)
//       return ;
//       queue<Node*>q;
//       q.push(root);
//       while(!q.empty())
//       {
//           Node*t=q.front();
//           cout<<t->data;
//           if(t->left)
//           {
//               q.push(t->left);
//           }
//           if(t->right)
//           {
//               q.push(t->right);
//           }
//           q.pop();      
          
//       }
//     }


int main()
{
 Node *root=buildtree();
 levelorder(root);
}

