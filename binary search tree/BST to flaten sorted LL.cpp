

void inOrder(TreeNode<int>*root,vector<int>& in){
      if(root==NULL){
          return ;
      }
      
      inOrder(root->left,in);
      in.push_back(root->data);
      inOrder(root->right,in);
      
  }
TreeNode<int>* flatten(TreeNode<int>* root)
{
 vector<int> inorderval;
  //store inoder ->  sorted values
  inorder(root,inorderval);
  int n = inorderval.size();
  TreeNode<int>* newRoot = new TreeNode<int>(inorderval[0]);
  TreeNode<int>* curr= newRoot;
  
  //2nd step
  for(int i=1; i<n; i++){
    TreeNode<int>* temp =new TreeNode<int>* (inorderval[i]);
    curr->left =NULL;
    curr->right= temp;
    curr= temp;
  }
  //3rd step
  curr->left =NULL;
    curr->right= NULL;
  return ans;
  
}
