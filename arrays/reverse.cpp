#include<bits/stdc++.h>
using namespace std;
int reverse(int a[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end) 
    {
    swap(a[start],a[end]);
    start=start+1;
    end=end-1;

    }

}
main()
{
    int a[]={1,2,3,4,5,6,7};
    int n =sizeof(a)/sizeof(int);
    reverse(a,n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
}
