#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 7;
    int a[n] = {1,3,0,0,1,2,4};
    vector<int>v;
    stack<int>s;
    //yha loop change hui hai
    for(int i=0;i<=n;i++) {
        if(s.size()==0) {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>a[i]) {
            v.push_back(s.top());
        } else if(s.size()>0 && s.top()<=a[i]) {
            while(s.size()>0 && s.top()<=a[i]) {
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
    //yha reverse nhi karna hai
    for(int i=0;i<n;i++) {
        cout<<v[i]<<" ";
    }
}
