// create binary tree and perform preorder, inorder, postorder

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

void preorder(Node * root)
{
  if(root==NULL)
  {
    return;
  }
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}

void inorder(Node * root)
{
  if(root==NULL)
  {
    return;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}

void postorder(Node * root)
{
  if(root==NULL)
  {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}

int main()
{
 Node *root=buildtree();
 cout<<endl;
 cout<<"-------------PREORDER-------------------"<<endl;
  preorder(root);
  cout<<endl;
  cout<<"-------------INORDER-------------------"<<endl;
  inorder(root);
  cout<<endl;
  cout<<"-------------POSTORDER-------------------"<<endl;
  postorder(root);
}

