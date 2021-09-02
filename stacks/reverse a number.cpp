#include <bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int number = n;
    stack<int>s;
    while(number !=0)
    {
     s.push(number%10);
     number=number/10;
    }
    
    int i=1,reverse=0;
    while(s.empty())
    {
        reverse=  reverse+(s.top()*i);
        s.pop();
        i=i*10;
    }
    
    return reverse;
}



