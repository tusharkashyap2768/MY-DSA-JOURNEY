
class Solution{
    public:
    
    int findpos(int in[],int ele,int n)
    {
        for(int i=0;i<n;i++){
        if(in[i] == ele)
        return i;
        }
        return -1;
    }
    
    Node* solve(int in[],int pre[],int &index,int inorderstart,int inorderend,int n)
    {
        if(index >=n || inorderstart > inorderend )
        return NULL;
        int ele = pre[index++];
        Node*root=new Node(ele);
        int pos=findpos(in, ele,n);
        
        root->left = solve(in,pre,index,inorderstart,pos-1,n);
        root->right = solve(in,pre,index,pos+1,inorderend,n);
        
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        int preorderindex=0;
        Node*ans=solve(in,pre,preorderindex,0,n-1,n);
        return ans;
    }
};
