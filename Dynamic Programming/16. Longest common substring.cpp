#include <bits/stdc++.h>
using namespace std;

int LongestCommonSubstring(string X, string Y, int n, int m)
{
    int result = 0;
    int dp[n+1][m+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<m+1;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j] = 0;
            }
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(X[i-1] == Y[j-1])
            {
                dp[i][j] = 1+ dp[i-1][j-1];
                result = max(result,dp[i][j]);
            } else {
                dp[i][j] = 0;
            }
        }
    }
    return result;
}

int main() {
    string X= "OldSite:GeeksforGeeks.org";
    string Y = "NewSite:GeeksQuiz.com";
    int n = X.size();
    int m = Y.size();
    cout<<"Length of Longest Common Substring is "<<LongestCommonSubstring(X, Y, n, m)<<endl;
}
