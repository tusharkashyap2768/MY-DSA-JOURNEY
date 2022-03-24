#include <bits/stdc++.h>
using namespace std;

int LongestCommonSubsequenceMemoization(string X, string Y, int n, int m)
{
    int dp[n+1][m+1];
    memset(dp, 0, sizeof(dp));
    if(n == 0 || m == 0)
    {
        return 0;
    }
    if(dp[n][m]!=0)
    {
        return dp[n][m];
    }
    if(X[n-1] == Y[m-1])
    {
        return dp[n][m] = 1+LongestCommonSubsequenceMemoization(X, Y, n-1, m-1);
    } else {
        return dp[n][m] = max(LongestCommonSubsequenceMemoization(X, Y, n-1, m), LongestCommonSubsequenceMemoization(X, Y, n, m-1));
    }
}

int main() {
    string X= "AGGTAB";
    string Y = "GXTXAYB";
    int n = X.size();
    int m = Y.size();
    cout<<"Length of Lowest Common Subsequence is "<<LongestCommonSubsequenceMemoization(X, Y, n, m)<<endl;
}
