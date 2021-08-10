#include<bits/stdc++.h>
using namespace std;
int subarrays (int a[],int n)
{
   for(int i=0; i<n; i++)
   {
       for(int j=i; j<n; j++)
       {
           for(int k=i; k<=j; k++)
           {
               cout<<a[k]<<",";
           }
            cout<<endl;
       }
      
   }

}
main()
{
    int a[]={1,2,3,4,5,6,7}; 
    int n =sizeof(a)/sizeof(int);
     subarrays(a,n);

}
