Class solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
int dp[201][201];
   
   int helper(int e,int f){
       if(f == 0 || f == 1) return (f);
       if(e == 1) return (f);
       
       if(dp[e][f] != -1) return (dp[e][f]);
       
       int mn = INT_MAX;
       for(int k = 1; k <= f; k++){
           int tempAns = 1 + max(helper(e-1,k-1),helper(e,f-k));
           mn = min(mn,tempAns);
       }
       return (dp[e][f] = mn);
   }
   
   int eggDrop(int e, int f) {
       memset(dp,-1,sizeof(dp));
       return (helper(e,f));
   }
    
};
