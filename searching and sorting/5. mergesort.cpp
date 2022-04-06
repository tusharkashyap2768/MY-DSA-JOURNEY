class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         int i=l,j=m+1,k=l;
  int B[1000001];
while(i<=m && j<=r)
{
if(arr[i]<arr[j])
B[k++]=arr[i++];
else
B[k++]=arr[j++];
}
for(;i<=m;i++)
B[k++]=arr[i];
for(;j<=r;j++)
B[k++]=arr[j];
for(i=l;i<=r;i++)
arr[i]=B[i];
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l<r){
           int mid=(l+r)/2;
           mergeSort(arr,l,mid);
           mergeSort(arr,mid+1,r);
           merge(arr,l,mid,r);
       }
    }
};
