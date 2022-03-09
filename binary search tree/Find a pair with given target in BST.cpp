class Solution{
  private:
  void inOrder(struct Node *root,vector<int>& ans){
      if(root==NULL){
          return ;
      }
      
      inOrder(root->left,ans);
      ans.push_back(root->data);
      inOrder(root->right,ans);
      
  }

  public:
    // root : the root Node of the given BST
    // target : the target sum
    int isPairPresent(struct Node *root, int target)
    {
        vector<int> ans;
        inOrder(root,ans);
        int i=0;
        int j=ans.size()-1;
        while(i<j){
            int sum = ans[i] + ans[j];
            if(sum==target){
                return 1;
            }
            else if(sum>target)
                j--;
            else
                i++;
        }
        
        return 0;
    }
};
