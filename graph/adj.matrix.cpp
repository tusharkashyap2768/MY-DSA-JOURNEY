#include <bits/stdc++.h>
using namespace std;
int  a[5][5];
int main() {
	int n,m,x,y;
    cin>>n>>m;
    //n=nodes m=edges
    for(int i=1;i<m;i++)
    {
        cin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;//undirected
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    	return 0;
}

5 5
0 2
2 1
2 4
4 1
1 3
