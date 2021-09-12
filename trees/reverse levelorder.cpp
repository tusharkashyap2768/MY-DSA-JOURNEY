
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
        if(t->right)
        {
            q.push(t->right);
        }
        if(t->left)
        {
            q.push(t->left);
        }
        q.pop();
    }
    reverse(v.begin(),v.end());
    return v;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}
