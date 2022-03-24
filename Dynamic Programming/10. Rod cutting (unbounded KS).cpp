#include<bits/stdc++.h>
using namespace std;

int RodCutting(int len[], int price[], int totalLength, int n)
{
    int dp[n+1][totalLength+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<totalLength+1;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<totalLength+1;j++)
        {
            if(len[i-1]<=j)
            {
                dp[i][j] = max(price[i-1] + dp[i][j-len[i-1]] , dp[i-1][j]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][totalLength];
}


int main() {
    int price[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
    int n = sizeof(price)/sizeof(price[0]);
    int len[n];
    for(int i=0;i<n;i++)
    {
        len[i] = i+1;
    }
    int totalLength = n;
    cout<<RodCutting(len, price, totalLength, n);
}
