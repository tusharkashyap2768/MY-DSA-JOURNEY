

BFS
  #include <bits/stdc++.h>
using namespace std;
vector <int> v[5];
int visited[5];
void bfs(int source);
int main() {
	int n,m,x,y;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
         //v[y].push_back(x);//undirected
    }
    bfs(0);
}
void bfs(int source )
{
    queue<int> q;
    q.push(source);
    visited[source]=1;
    while(!q.empty())
    {
        int current=q.front();
        q.pop();
        cout<<current<<" ";
    for(int i=0;i<v[current].size();i++)
    {
        int child =v [current][i];
        if(visited[child]==0)
        {
            q.push(child);
            visited[child]=1;
        }
    }}
    cout<<endl;

}
