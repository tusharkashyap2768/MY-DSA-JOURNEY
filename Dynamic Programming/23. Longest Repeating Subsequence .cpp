class Solution {
	public:
    int lcs(string A,string s){
     int n=A.size();
     int m=s.size();
     int t[n+1][m+1];
     for(int i=0;i<n+1;i++)
      t[i][0]=0;
      for(int j=0;j<m+1;j++)
      t[0][j]=0;
      
      for(int i=1;i<n+1;i++){
          for(int j=1;j<m+1;j++){
              if(A[i-1]==s[j-1] && (i!=j))
              t[i][j]=1+t[i-1][j-1];
              else
              t[i][j]=max(t[i][j-1],t[i-1][j]);
          }
      }
      return t[n][m];
}
 int LongestRepeatingSubsequence(string str){
     // Code here
     string A=str;
     string s=str;
     return lcs(A,s);
 }

};
