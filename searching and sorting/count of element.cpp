#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=7;
    int a[n]={2,4,20,20,20,18,10};
    int k=20;
    int start =0,end=n-1;
    int first =-1;
    int last=-1;
    while(start<=end)
    {
      int  mid = start + (end-start)/2;
       if(k==a[mid])
       {
       first=mid;
       end=mid-1;
       }
       else if(k<a[mid])
       {
           end=mid-1;
       }
        else 
                start = mid+1;
           
    }
      cout<<"first occurance of element K in array is at : "<<first<<" "<<"index"<<endl;   

///LAST OCCURANCE
int start =0,end=n-1;
while(start<=end)
    {
      int  mid = start + (end-start)/2;
       if(k==a[mid])
       {
       last=mid;
       end=mid+1;
       }
       else if(k<a[mid])
       {
           end=mid-1;
       }
        else 
                start = mid+1;
           
    }
    cout<<"last occurance of element K in array is at :"<<last<<" "<<"index";   

// count of element niklana ka lea 
  {
  count = last occ - first occ + 1 
    }
}
