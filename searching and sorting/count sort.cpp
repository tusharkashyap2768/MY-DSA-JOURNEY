// o(n)+R


#include<iostream>
#include<vector>
using namespace std;



void counting_sort(int a[],int n){
	//Largest Element
	int largest = -1;

	for(int i=0;i<n;i++){
		largest = max(largest,a[i]);
	}

	//create a count array/vector
	vector<int> freq(largest+1,0);

	//Update the freq array 
	for(int i=0;i<n;i++){
		freq[a[i]]++;
	}

	//Put back the elements from freq into original array

	int j = 0;
	for(int i=0; i<=largest; i++){

		while(freq[i]>0){
			a[j] = i;
			freq[i]--;
			j++;
		}
	}
	return;

}

main()
{
    int a[]={-2,3,4,-1,5,-12,6,1,3}; 
    int n =sizeof(a)/sizeof(int);
    insertionsort(a,n);
    for(auto x: a)
    cout<<x<<" ";

}
