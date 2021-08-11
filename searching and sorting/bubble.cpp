#include<bits/stdc++.h>
using namespace std;
int largestsubarraysum (int a[],int n)
{int largestsum=0;
int cs=0;
   for(int i=0; i<n; i++)
   {
      cs=cs+a[i];
      if(cs<0)
      {
          cs=0;
      }
       largestsum=max(largestsum,cs);
   }
   return largestsum;

}
main()
{
    int a[]={-2,3,4,-1,5,-12,6,1,3}; 
    int n =sizeof(a)/sizeof(int);
    cout<<largestsubarraysum(a,n)<<endl;

}