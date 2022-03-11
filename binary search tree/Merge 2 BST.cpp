o(M+N)

void inorder( TreeNode<int>*root, vector<int> &in)
{
 if(root == NULL)
   return;
  inorder(root->left,in);
  in.push_back(root->data);
  inorder(root->right,in);
}
// merge two sorted arrays
vector<int> mergeArray(vector<int>a, vector<int>b)
{
  vector<int> ans(a.size() + b.size());
  int i,j=0,k=0;
  while(i<a.size() && j<b.size())
  {
    if(a[i]<b[j])
    {
      ans[k++]=a[i];
      i++;
    }
    else
    {
      ans[k++]=b[j];
      j++;
    }
  }
  while(i<a.size())
  {
    ans[k++]=a[i];
    i++;
  }
  while(j<b.size())
  {
    ans[k++]=b[j];
    j++;
  }
  return ans;
}

TreeNode<int>*inordertobst(vector<Node *>&v,int start,int end)
{
    if(start>end)
    return NULL;
    int mid=(start+end)/2;
    Node *temp=v[mid];
    temp->left=construct(v,start,mid-1);
    temp->right=construct(v,mid+1,end);
    return temp;
}

TreeNode<int>* mergeBST(TreeNode<int>*root1, TreeNode<int>*root2)
{
 //step 1 store inorder
  vector<int> bst1,bst2;
  inorder(root1,bst1);
  inorder(root2,bst2);
   //step 2 merege two sorted array to one
  vector<int>mergeArray = mergeArrays(bst1,bst2);
  //step 3 construct bst from sorted array
  int start=0, end=mergeArray.size()-1;
  return inordertobst(start,end,mergeArray);
}



// ANOTHER SOLUTION 
class Solution
{
    public:
    void BST1(Node* root, vector<int> &ans){
        if(root==NULL){
            return;
        }
        BST1(root->left, ans);
        ans.push_back(root->data);
        BST1(root->right, ans);
    }
    void BST2(Node* root, vector<int> &ans){
        if(root==NULL){
            return;
        }
        BST2(root->left, ans);
        ans.push_back(root->data);
        BST2(root->right, ans);
    }
    vector<int> merge(Node *root1, Node *root2)
    {
       //Your code here
       vector<int> ans;
       BST1(root1, ans);
       BST2(root2, ans);
       sort(ans.begin(), ans.end());
       return ans;
    }
};
