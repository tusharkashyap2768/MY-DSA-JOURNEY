
int kthSmallest(int arr[], int l, int r, int k)
    {
        priority_queue<int> maxh;
        for(int i=0;i<arr;i++)
        {
             maxh.push(arr[i]);
             if(maxh.size()>k)
             {
                 maxh.pop();
             }
        }
        return maxh.top();
        
    }
