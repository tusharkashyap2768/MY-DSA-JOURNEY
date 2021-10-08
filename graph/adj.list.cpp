#include <bits/stdc++.h>
using namespace std;
vector <int> v[5];
int main() {
	int n,m,x,y;
    cin>>n>>m;
    //n=nodes m=edges
    //1 2
    //1->2
    //v[1].pushback(2)
    for(int i=1;i<m;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
         v[y].push_back(x);//undirected
    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    	return 0;
}

/*input
5 5
0 2
2 1
2 4
4 1
1 3
output
0->2 
1->2 4 
2->0 1 4 
3->
4->2 1 
*/
