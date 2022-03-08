


-→ Idea is  simple inorder traversal and we keep a counter “c” which will increament when we go in ascending order (As inorder traversal of BST is always in ascending order).

-→So when our c is equals to k that is the node we are looking for and the node's data is our answer

 

void solve(Node* root,int k,int &c,int &res){
        if(root==NULL || c>=k){
            return;
        }
        
        solve(root->left,k,c,res);
        c++;
        if(c==k){
            res = root->data;
        }
        solve(root->right,k,c,res);
        return;
        
    }
 
    int KthSmallestElement(Node *root, int k) {
        int c = 0;
        int res = -1;
        solve(root,k,c,res);
        return res;
    }
