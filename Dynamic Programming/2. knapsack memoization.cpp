#include<bits/stdc++.h>
using namespace std;

int dp[1002][1002];

int knapsack(int weight[], int value[], int w, int n)
{
    if(w==0 || n==0) return 0;
    
    if(dp[n][w] != -1)
    	return dp[n][w];

    if(weight[n-1]<=w)
    {
      return  dp[n][w] = max(value[n-1] + knapsack(weight,value,w-weight[n-1],n-1), knapsack(weight,value,w,n-1) );
    }

    else
    {
     dp[n][w]= knapsack(weight,value,w,n-1);
    }
}

int main(){
    int n=3;
    int w= 50;
    int weight[]={10,20,30};
    int value[]={60,100,120};
      memset(dp, -1, sizeof(dp));
    cout<<knapsack(weight,value,w,n);
}
