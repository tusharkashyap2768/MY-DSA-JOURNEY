#include<bits/stdc++.h>
using namespace std;


int CountSubsetSum(int arr[], int n, int s1)
{
    int dp[n+1][s1+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<s1+1;j++)
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
        for(int j=1;j<s1+1;j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j] = dp[i-1][j-arr[i-1]]+dp[i-1][j];
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][s1];
}


int CountNoOfSubsetWithGivenDiff(int arr[], int n, int diff)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int s1 = (diff+sum)/2;
    return CountSubsetSum(arr, n, s1);
}

int main() {
    int n=4,diff=1;
    int arr[n] = {1, 1, 2, 3};
    cout<<CountNoOfSubsetWithGivenDiff(arr, n, diff);
}
