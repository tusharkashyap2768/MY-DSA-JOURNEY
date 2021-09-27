
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
	int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int start=a[0],end=a[n-1];
    while(start<end)
    {
        int mid=(start+end)/2;
        int prev=(mid+n-1)%n;
        int next=(mid+1)%n;
        if(a[mid]<a[next]&&a[mid]<a[prev])
        cout<<mid;
        if(a[start]<=a[mid])
        start=mid+1;
        else if(a[mid]<=a[end])
        end=mid-1;
    }
	return 0;
}

