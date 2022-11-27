
#include<bits/stdc++.h>
using namespace std;
void insertatbottom(stack<int>&s,int data)
{
if(s.empty()) 
{
	s.push(data);
	return;
}

int temp =s.top();
s.pop();
insertatbottom(s,data);
s.push(temp);
}

int main()
{
	stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	insertatbottom(s,5);
	while(!s.empty())
	{
		cout<<s.top()<<endl;
        s.pop();
	}
	return 0;
}
