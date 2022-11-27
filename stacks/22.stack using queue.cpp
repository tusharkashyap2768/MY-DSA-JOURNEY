//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
    
    //uisng 1 queue
    q1.push(x);
    int sz=q1.size()-1;
    while(sz--)
    {
        q1.push(q1.front());
        q1.pop();
    }
    
    //using 2 queue
        // q1.push(x);
        // while(!q2.empty())
        // {
        //     q1.push(q2.front());
        //     q2.pop();
        // }
        // swap(q1,q2);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        int ans;
        if(q2.empty())
        {
            ans=-1;
        }
        else
        {
            ans=q2.front();
            q2.pop();
        }
        return ans;
}
