#include<bits/stdc++.h>
using namespace std;
int pairs (int a[],int n)
{
   for(int i=0; i<n; i++)
   {
       int x=a[i];
       for(int j=i+1; j<n; j++)
       {
           int y=a[j];
           cout<<x<<","<<y<<endl;
       }
       cout<<endl;
   }

}
main()
{
    int a[]={1,2,3,4,5,6,7}; 
    int n =sizeof(a)/sizeof(int);
     pairs(a,n);

}
