 int findpos(int in[],int ele,int n)
    {
        for(int i=0;i<n;i++){
        if(in[i] == ele)
        return i;
        }
        return -1;
    }
    
    Node* solve(int in[],int post[],int &index,int inorderstart,int inorderend,int n)
    {
        if(index <0 || inorderstart > inorderend )
        return NULL;
        int ele = post[index--];
        Node*root=new Node(ele);
        int pos=findpos(in, ele,n);
        
        root->right = solve(in,post,index,pos+1,inorderend,n);
        root->left = solve(in,post,index,inorderstart,pos-1,n);
        
        
        return root;
    }
    
    Node* buildTree(int in[],int post[], int n)
    {
        int postorderindex=n-1;
        Node*ans=solve(in,post,postorderindex,0,n-1,n);
        return ans;
    }

