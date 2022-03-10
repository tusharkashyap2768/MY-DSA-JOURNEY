void inorder(Node *root,vector<Node *>&v)

{
    if(root!=NULL)
    {
        inorder(root->left,v);
        v.push_back(root);
        inorder(root->right,v);
    }
}
Node *construct(vector<Node *>&v,int start,int end)
{
    if(start>end)
    return NULL;
    int mid=(start+end)/2;
    Node *temp=v[mid];
    temp->left=construct(v,start,mid-1);
    temp->right=construct(v,mid+1,end);
    return temp;
}
Node* buildBalancedTree(Node* root)
{
	// Code here
	vector<Node *>v;
	inorder(root,v);
	int start=0,end=v.size(); 
	return construct(v,start,end-1);
}
