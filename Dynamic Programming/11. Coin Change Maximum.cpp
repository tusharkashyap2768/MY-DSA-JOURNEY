#include<bits/stdc++.h>
using namespace std;

int CoinChangeMaxWay(int coin[], int n, int sum) {
    int dp[n+1][sum+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(i==0)
            {
                dp[i][j] = 0;
            }
            if(j==0)
            {
                dp[i][j] = 1;
            }
        }
    }
    
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(coin[i-1]<=j)
            {
                dp[i][j] = dp[i-1][j] + dp[i][j-coin[i-1]];
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

int main() {
    int n = 3;
    int coin[n] = {1, 2, 3};
    int sum = 5;
    cout<<CoinChangeMaxWay(coin, n, sum)<<endl;
    
}
