
vector<int> reverseLevelOrder(Node *root)
{
    vector<int>v;
    if(!root)
    return ;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node*t=q.front();
        v.push_back(t->data);
        if(root->right)
        {
            q.push(root->right);
        }
        if(root->left)
        {
            q.push(root->left);
        }
        q.pop();
    }
    reverse(v.begin(),v.end());
    return v;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}
