0(N^2) approach 

class Solution{
    private :
    int height(struct Node* node){
        if(node == NULL)
        return 0;
        
        int op1 = height(node -> left);
        int op2 = height(node -> right);
        
        int ans = max(op1,op2)+1;
        return ans;
    }
    public:
   
    bool isBalanced(Node *root){
    {
        if(root == NULL)
        return true;
    }
    
    bool left = isBalanced(root-> left);
    bool right = isBalanced(root-> right);
    
    bool diff = abs (height(root ->left) - height(root -> right))<=1;
    
    if(left && right && diff)
    {
    return 1;
    }
    else
    {
    return false;
    }
    }
    
};


o(N) approach 
class Solution{
    public:
     pair<bool,int> isbal(Node * root)
    {
        if(root == NULL)
        {
            pair<bool,int> p = make_pair(true,0);
            return p;
        }
        
        pair<int,int>left = isbal(root-> left);
         pair<int,int> right =isbal(root-> right);
         
         bool leftans = left.first;
         bool rightans = right.first;
         
         bool diff = abs (left.second - right.second)<=1;
         
         pair<bool,int> ans;
         ans.second = max(left.second, right.second) +1;
         
         if(leftans && rightans && diff )
         {
             ans.first= true;
         }
         else
         {
             ans.first=false;
         }
         return ans;
    }
    bool isBalanced(Node *root)
    {
       return isbal(root).first;
    }
    
};
