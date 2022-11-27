#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    int a[n] = {4,5,2,10,8};
    vector<int>v;
    stack<int>s;
  //yha loop change
    for(int i=n-1; i>=0;i--) {
        if(s.size()==0) {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()<a[i]) {
            v.push_back(s.top());
        } else if(s.size()>0 && s.top()>=a[i]) {
            while(s.size()>0 && s.top()>=a[i]) {
                s.pop();
            }
            if(s.size()==0) {
                v.push_back(-1);
            } else {
                v.push_back(s.top());
            }
        }
        s.push(a[i]);
    }
   reverse(v.begin(), v.end());
    for(int i=0;i<n;i++) {
        cout<<v[i]<<" ";
    }
}
