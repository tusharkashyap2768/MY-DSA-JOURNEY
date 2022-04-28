void inorder(Node *curr,vector<int> &ans){
        if(curr==NULL)
            return;
        inorder(curr->left,ans);
        ans.push_back(curr->data);
        inorder(curr->right,ans);;
    }
   int kthLargest(Node *root, int K)
   {
       //Your code here
       vector<int> ans;
       inorder(root,ans);
       return ans[ans.size()-K];
   }

//KthSmallestElement
class Solution {
    public :
 void inorder(Node*root,vector<int> &v)
   {
       if(!root)
       {
           return ;
       }
       inorder(root->left,v);
       v.push_back(root->data);
       inorder(root->right,v);
   }
   
   int KthSmallestElement(Node *root, int K) {
       // add code here.
       vector<int> v;
       inorder(root,v);
       if(K>v.size())
       return -1;
       else
       return v[K-1];
   }
};
