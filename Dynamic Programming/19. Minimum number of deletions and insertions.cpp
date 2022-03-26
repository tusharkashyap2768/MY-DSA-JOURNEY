	public:
	   
	int lcs(int x, int y, string s1, string s2)
   {
       // your code here
       int t[x+1][y+1];
       int i,j;
       
       for(i=0; i<x+1; i++)
       for(j=0; j<y+1; j++)
           if( i==0 || j==0)
               t[i][j]=0;
       
       for(i=1; i<x+1; i++)
       for(j=1; j<y+1; j++)
       {
           if(s1[i-1] == s2[j-1])
               t[i][j] = 1+t[i-1][j-1];
           else
               t[i][j] = max(t[i-1][j], t[i][j-1]);
       }
       
       return t[x][y];
} 

int minOperations(string str1, string str2) 
{ 
    // Your code goes here
    int n = str1.length();
    int m = str2.length();
    
   int len = lcs(n,m,str1, str2);
   
   int del= n-len;
   int ins= m-len;
   
   return del+ins;
}
