// bubble osrt is o(n^2) //
#include<bits/stdc++.h>
using namespace std;
void bubblesort (int a[],int n)
{
    for(int times=0;times<n-1;times++)
    {
        for(int j=0;j<n-times-1;j++)
        {
            if(a[j] >a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }

}
main()
{
    int a[]={-2,3,4,-1,5,-12,6,1,3}; 
    int n =sizeof(a)/sizeof(int);
    bubblesort(a,n);
    for(auto x: a)
    cout<<x<<" ";

}
