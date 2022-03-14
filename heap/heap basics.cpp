#include<bits/stdc++.h>
using namespace std;

class heap {
    public:
    int arr[100];
    int size=0;
    heap()
    {
        arr[0]=-1;
        size=0;
    }
    
    //insertion in heap o (logn n)
    void insert(int val){

        size=size+1;
        int index=size;
        arr[index]=val;

        while(index > 1)
        {
            int parent = index/2;

            if(arr[parent] < arr[index])
            {
             swap(arr[parent],arr[index]);
             index=parent;
            }
            else{
                return;
            }

        }
    }

    //deletion o(log n)
//step 1: put last element into first index
    void deletefromheap(){
        if(size==0)
        cout<<"nothing to delete"<<endl;
        return;
//step 2: remove last element
        arr[1]=arr[size];
        size--;
//step 3: take root node to its correct position
        int i=1;
        while(i<size)
        {
            int leftindex=2*i;
            int rightindex=2*i+1;
            if(leftindex < size && arr[i] < arr[leftindex])
            {
                swap(arr[i],arr[leftindex]);
                i=leftindex;
            }
            else if(rightindex < size && arr[i] < arr[rightindex])
            {
                swap(arr[i],arr[rightindex]);
                i=rightindex;
            }
            else{
                return;
            }
        }
    }

    void heapify(int arr[], int n, int i)
    {
        int largest = i;
        int left = 2*i;
        int right = 2*i+1;

        if(left < n && arr[largest] < arr[left])
        {
            largest = left;
        }

        if(right < n && arr[largest] < arr[right])
        {
            largest = right;
        }

        if(largest != i)
        {
            swap(arr[largest], arr[i]);
            heapify(arr,n,largest);
        }

    }



    void print(){
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }
};

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print(); 

    h.deletefromheap();
    h.print();

    int arr[6]={-1,54,53,55,52,50};
    int n =5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    cout<<"printing the array now"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<endl;
    }
}
