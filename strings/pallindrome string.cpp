#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;
string p =s;
 reverse(p.begin(), p.end());
    if (s == p) {
        cout<<"Yes";
    }
    else {
     cout<<"NO";
}
}

