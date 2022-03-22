#include<bits/stdc++.h>
using namespace std;


int MinSubsetSumDiff(int arr[], int n, int range)
{
    int dp[n+1][range+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<range+1;j++)
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
        for(int j=1;j<range+1;j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    vector<int>v;
    for(int j=0;j<=range/2;j++)
    {
        if(dp[n][j] == 1)
        {
            v.push_back(j);
        }
    }
    int minimum = INT_MAX;
    for(int i=0;i<v.size();i++)
    {
        // cout<<v[i]<<endl;
        minimum = min(minimum, range-2*v[i]);
        // cout<<minimum<<endl;
    }
    return minimum;
}

int main() {
    int n=4,sum=0;
    int arr[n] = {1, 6, 5, 11};
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<MinSubsetSumDiff(arr,n,sum)<<endl;
}
