#include<bits/stdc++.h>
using namespace std;

int countOfSubsetSum(int arr[], int n, int sum)
{
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
            if(arr[i-1]<=j)
            {
                dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    // for(int i=0;i<n+1;i++)
    // {
    //     for(int j=0;j<sum+1;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return dp[n][sum];
}


int main() {
    int n = 6;
    int arr[n] = {2, 3, 5, 6, 8, 10};
    int sum = 10;
    cout<<countOfSubsetSum(arr, n, sum)<<endl;
    
}
