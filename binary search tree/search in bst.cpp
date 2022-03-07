// Recursive
bool search(Node* root, int x) {
    if(root == NULL) return 0;
    if(root->data ==x) return 1;

    if(x < root->data) search(root->left,x);
    else search(root->right,x);
}

//iterative
bool search InBST (BinaryTreeNode<int> *root, int x) {
BinaryTreeNode<int> *temp = root;
while(temp != NULL) 
{
    if( temp->data == x) 
    {
return true;
}

if( temp->data > x) 
{
    temp =temp->left;
}
else
temp temp -> right;
}
return false;
}
