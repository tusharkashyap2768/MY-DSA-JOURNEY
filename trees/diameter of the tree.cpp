o(N) solution 
class Solution {
    
    // private:
    // int height(struct Node* node){
    //     if(node == NULL)
    //     return 0;
        
    //     int op1 = height(node -> left);
    //     int op2 = height(node -> right);
        
    //     int ans = max(op1,op2)+1;
    //     return ans;
    // }
    
  public:
   pair<int,int> dia(Node * root)
   {
       if(root == NULL)
       {
       pair<int,int> p = make_pair(0,0);
       return p;
       }
       
       pair<int,int> left = dia(root -> left);
       pair<int,int> right = dia(root -> right);
       
       int op1 = left.first;
       int op2 = right.first;
       int op3 = left.second + right.second + 1;
       
       pair<int,int> ans;
       ans.first= max(op1,max(op2,op3));
       ans.second = max(left.second,right.second) + 1;
       
       return ans;
   }
    int diameter(Node* root) {
        return dia(root).first;
    }
};
