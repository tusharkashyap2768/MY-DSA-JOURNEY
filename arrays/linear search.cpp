
#include<bits/stdc++.h>
using namespace std;
int lsearch(int arr[],int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
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
    int index = lsearch(a,n,key);
    if(index !=0)
    {
        cout<<"elemenet is present at" <<index<<endl;
    }
    else
    {
        cout<<"elemenet is not present";
    }
}
