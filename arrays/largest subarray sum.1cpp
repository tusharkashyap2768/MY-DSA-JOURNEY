// this is brute force approach //

#include<bits/stdc++.h>
using namespace std;
int largestsubarraysum (int a[],int n)
{int largestsum=0;
   for(int i=0; i<n; i++)
   {
       for(int j=i; j<n; j++)
       {
           int subarraysum=0;
           for(int k=i; k<=j; k++)
           {
               subarraysum+=a[k];
           }
            largestsum=max(largestsum,subarraysum);
       }
      
   }
   return largestsum;

}
main()
{
    int a[]={1,2,3,4,5}; 
    int n =sizeof(a)/sizeof(int);
    cout<<largestsubarraysum(a,n)<<endl;

}
