vector<int> diagonal(Node *root)
{
   queue<Node*>q;
   vector<int>v;
   if(!root)
   return v;
   q.push(root);
   while(!q.empty())
   {
       Node*t=q.front();
       q.pop();
       while(t)
       {
       if(t->left)
           q.push(t->left);
           v.push_back(t->data);
        t=t->right;
   }
   }
   return v;
}
