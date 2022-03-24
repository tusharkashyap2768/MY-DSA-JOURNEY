#include <bits/stdc++.h>
using namespace std;

int CoinChangeMinCoin(int coin[], int n, int sum)
{
    int dp[n+1][sum+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(i==0)
            {
                dp[i][j] = INT_MAX-1;
            }
            if(j==0 && i>0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for(int j=1;j<sum+1;j++)
    {
        if(j%coin[0] == 0)
        {
            dp[1][j] = j/coin[0];
        } else {
            dp[1][j] = INT_MAX-1;
        }
    }
    for(int i=2;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(coin[i-1]<=j)
            {
                dp[i][j] = min(dp[i][j-coin[i-1]]+1, dp[i-1][j]);
            } else {
                dp[i][j]  = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}

int main() {
    int n = 4;
    int coin[n]= {9, 6, 5, 1};
    int sum = 11;
    cout<<CoinChangeMinCoin(coin, n, sum)<<endl;
}
