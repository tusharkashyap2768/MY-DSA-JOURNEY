#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n = 12;
    int a[n] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int maxL[n],maxR[n];
    maxL[0]=a[0];
    maxR[n-1]=a[n-1];
    for(int i=1;i<n;i++)
    {
        maxL[i]=max(maxL[i-1],a[i]);
    }
    for(int i=n-2;i>=0;i--)
    {
        maxR[i]=max(maxR[i+1],a[i]);
    }
    int water[n],sum=0;
    for(int i=0;i<n;i++) {
        water[i] = min(maxL[i],maxR[i])-a[i];
        sum+=water[i];
    }
    cout<<sum<<endl;
}

