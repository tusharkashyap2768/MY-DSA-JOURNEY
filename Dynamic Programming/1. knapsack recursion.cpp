#include<bits/stdc++.h>
using namespace std;

int knapsackrecursion(int weight[], int value[], int w, int n)
{
    if(w==0 || n==0) return 0;

    if(weight[n-1]<=w)
    {
      return max(value[n-1] + knapsackrecursion(weight,value,w-weight[n-1],n-1), knapsackrecursion(weight,value,w,n-1) );
    }

    else
    {
     knapsackrecursion(weight,value,w,n-1);
    }
}


int main(){
    int n=3;
    int w= 50;
    int weight[]={10,20,30};
    int value[]={60,100,120};
    cout<<knapsackrecursion(weight,value,w,n);
}
