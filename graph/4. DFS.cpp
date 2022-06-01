//DFS
//tc ->O(N+E) sc->O(N+E) + O(N) + O(N)

#include<bits/stdc++.h>
using namespace std;


class Solution {
    void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storeDfs) {
        storeDfs.push_back(node); 
        vis[node] = 1; 
        for(auto it : adj[node]) {
            if(!vis[it]) {
                dfs(it, vis, adj, storeDfs); 
            }
        }
    }
public:
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    vector<int> storeDfs; 
	    vector<int> vis(V+1, 0); 
      for(int i = 1;i<=V;i++) {
        if(!vis[i]) dfs(i, vis, adj, storeDfs); 
      }
	    return storeDfs; 
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends



/*
================================================================




#include <bits/stdc++.h>
using namespace std;
vector <int> v[5];
int visited[5];
void dfs(int source);
int main() {
	int n,m,x,y;
    cin>>n>>m;
    for(int i=1;i<m;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
         //v[y].push_back(x);//undirected
    }
    dfs(0);
    cout<<endl;
}
void dfs(int current )
{
    cout<<current <<" ";
    visited[current]=1;
    for(int i=0;i<v[current].size();i++)
    {
        int child =v [current][i];
        if(visited[child]==0)
        {
            dfs(child);
        }
    }

}
input
5 5

0 2
2 1
2 4
4 1
1 3
output
0 2 1 4 
*/
