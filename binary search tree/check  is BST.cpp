public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(struct Node* node)
    {
      return(isBSTUtil(node, INT_MIN, INT_MAX));
    }
    
    public:
    int isBSTUtil(struct Node* node, int min, int max)
    {
        //an empty tree is BST so we return true.
        if (node==NULL)
         return 1;
        
        //returning false if this node violates the min/max constraint.
        if (node->data < min || node->data > max)
         return 0;
        
        //otherwise checking the subtrees recursively.
        //tightening the min or max constraint.
        return
            isBSTUtil(node->left, min, node->data-1) &&  
            isBSTUtil(node->right, node->data+1, max); 
    }
