#include<bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[], int n, int tsum)
{
    bool dp[n+1][tsum+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<tsum+1;j++)
        {
            if(i==0)
            {
                dp[i][j] = false;
            }
            if(j==0)
            {
                dp[i][j] = true;
            }
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<tsum+1;j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][tsum];
}

bool findPartition(int arr[], int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+= arr[i];
    }
    if(sum%2!=0)
    {
        return false;
    } else {
        return subsetSum(arr,n,sum/2);
    }
}



int main() {
    int n = 5;
    int arr[n] = { 3, 1, 5, 9, 12 };
    
    if(findPartition(arr, n) == true)
    {
        cout<<"Partition is possible having same sum"<<endl;
    } else {
        cout<<"Partition isn't Possible"<<endl;
    }
    
}
