
class Solution {
  public:
  Node*createparentmapping(Node*root,int target, map<Node*,Node*> &nodetoparent){
      Node*res=NULL;
      queue<Node*>q;
      q.push(root);
      nodetoparent[root]=NULL;
      while(!q.empty()){
          Node*front=q.front();
          q.pop();
          if(front->data == target)
          {
              res=front;
          }
          if(front->left)
          {
              nodetoparent[front->left]=front;
              q.push(front->left);
          }
          if(front->right)
          {
              nodetoparent[front->right]=front;
              q.push(front->right);
          }
      }
      return res;
  }
  int burntree(Node* root, map<Node*,Node*> &nodetoparent){
      map<Node*,bool>visited;
      queue<Node*>q;
      
      q.push(root);
      visited[root]=true;
      int ans=0;
      
      while(!q.empty()){
          bool flag=0;
          int size=q.size();
          for(int i=0;i<size;i++){
              Node*front =q.front();
              q.pop();
              
              if(front->left && !visited[front->left]){
                  flag=1;
                  q.push(front->left);
                  visited[front->left]=1;
              }
              
              if(front->right && !visited[front->right]){
                  flag=1;
                  q.push(front->right);
                  visited[front->right]=1;
              }
              
              if(nodetoparent[front] && !visited[nodetoparent[front]]){
                  flag=1;
                  q.push(nodetoparent[front]);
                  visited[nodetoparent[front]]=1;
              }
          }
          if(flag==1){
              ans++;
          }
      }
      return ans;
  }
  
    int minTime(Node* root, int target) 
    {
        //step 1 create node to parent mapping
        //step 2 find target node
        //step 3 burn the tree in min time
        
        map<Node*,Node*> nodetoparent;
        Node*targetnode=createparentmapping(root,target,nodetoparent);
        int ans= burntree(targetnode,nodetoparent);
        return ans;
    }
};