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

void reverse(stack<int>&s)
{
	if(s.empty())
	{
		return;
	} 
	int temp =s.top();
	s.pop();
	reverse(s);
	insertatbottom(s,temp);
}

int main()
{
	stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	//insertatbottom(s,5);
	reverse(s);
	while(!s.empty())
	{
		cout<<s.top()<<endl;
        s.pop();
	}
	return 0;
}
