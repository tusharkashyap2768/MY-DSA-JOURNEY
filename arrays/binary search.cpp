// binary search o(log(n)) //

#include<bits/stdc++.h>
using namespace std;
int Bsearch(int a[],int n, int key)
{
    int start=0;
    int end=n-1;
    while(start<=end) 
    {
        int mid=(start+end)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }

    }
    return -1;
}
main()
{
    int a[]={1,2,3,4,5,6,7};
    int n =sizeof(a)/sizeof(int);
    int key=0;
    cin>>key;
    int index = Bsearch(a,n,key);
    if(index !=-1)
    {
        cout<<"elemenet is present at" <<index<<endl;
    }
    else
    {
        cout<<"elemenet is not present";
    }
}
