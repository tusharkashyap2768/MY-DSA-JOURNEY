
DFS
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
/*input
5 5

0 2
2 1
2 4
4 1
1 3
output
0 2 1 4 
*/
