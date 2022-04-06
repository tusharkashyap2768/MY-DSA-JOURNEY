// selection sort is o(n^2) //
#include<bits/stdc++.h>
using namespace std;
void selectionsort (int a[],int n)
{

    for(int position = 0; position <= n-2; position++)
    {
         int current =a[position];
         int min_position =position;
         for(int j=position;j<n;j++)
         {
             if(a[j] < a[min_position])
             {
                 min_position = j;
             }
         }
         swap(a[min_position],a[position]);;

    }

}
main()
{
    int a[]={-2,3,4,-1,5,-12,6,1,3}; 
    int n =sizeof(a)/sizeof(int);
    selectionsort(a,n);
    for(auto x: a)
    cout<<x<<" ";

}
