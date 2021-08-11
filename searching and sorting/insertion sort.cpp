// insertion sort is o(n^2) //
#include<bits/stdc++.h>
using namespace std;
void insertionsort (int a[],int n)
{

    for(int i = 1; i < n-1; i++)
    {
         int current =a[i];
         int previous =i-1;
         while(previous >=0 and a[previous] > current) 
         {
           a[previous+1]=a[previous];
           previous=previous-1;
         }

          a[previous+1]=current;
    }

}
main()
{
    int a[]={-2,3,4,-1,5,-12,6,1,3}; 
    int n =sizeof(a)/sizeof(int);
    insertionsort(a,n);
    for(auto x: a)
    cout<<x<<" ";

}
