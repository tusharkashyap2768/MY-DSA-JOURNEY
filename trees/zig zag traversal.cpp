class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> v;
    	queue<Node*>q;
    	if(!root)
    	return v;
    	q.push(root);
    	int f=1;
    	while(!q.empty())
    	{
    	    vector<int> temp;
    	    int s=q.size();
    	    while(s--)
    	    {
    	        Node*t=q.front();
    	        temp.push_back(t->data);
    	        q.pop();
    	        
    	       if(t->left) q.push(t->left);
    	       if(t->right) q.push(t->right);
    	    }
    	    if(f%2==0) reverse(temp.begin(),temp.end());
    	    for(int i=0;i<temp.size();i++)
    	    v.push_back(temp[i]);
    	    f!=f;
    	}
    	return v;
    }
};


class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> result;
    	if(root == NULL)
    	    return result;
    	
    	queue<Node*> q;
    	q.push(root);
    	
    	bool leftToRight = true;
    	
    	while(!q.empty()) {
    	    
    	    int size = q.size();
    	    vector<int> ans(size);
    	    
    	    //Level Process
    	    for(int i=0; i<size; i++) {
    	        
    	        Node* frontNode = q.front();
    	        q.pop();
    	        
    	        //normal insert or reverse insert 
    	        int index = leftToRight ? i : size - i - 1;
    	        ans[index] = frontNode -> data;
    	        
    	        if(frontNode->left)
    	            q.push(frontNode -> left);
    	            
    	        if(frontNode->right)
    	            q.push(frontNode -> right);
    	    }
    	    
    	    //direction change karni h
    	    leftToRight = !leftToRight;
    	   
    	  for(auto i: ans) {
    	      result.push_back(i);
    	  }  
    	}
    	    return result;
    }
};
