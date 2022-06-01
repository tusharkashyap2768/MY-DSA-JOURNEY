//BFS
//tc ->O(N+E) sc->O(N+E) + O(N) + O(N)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
		for(int i=1;i<V;i++)
		if(!vis[i])
		{
	    vector<int> bfs; 
	    vector<int> vis(V, 0); 
	    queue<int> q; 
	    q.push(0); 
	    vis[0] = 1; 
	    while(!q.empty()) {
	        int node = q.front();
	        q.pop(); 
	        bfs.push_back(node); 
	        
	        for(auto it : adj[node]) {
	            if(!vis[it]) {
	                q.push(it); 
	                vis[it] = 1; 
	            }
	        }
	    }

		}
	    
	    return bfs; 
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	// for multiple graphs
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    // 		adj[v].push_back(u); // uncomment this for undirected graoh 
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends


/*================================================================
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
================================================================
*/
