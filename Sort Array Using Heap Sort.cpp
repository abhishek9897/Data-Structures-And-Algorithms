#include<bits/stdc++.h>
using namespace std;
void maxHeap(int arr[],int n,int i){
	int largest=i;
  int left=2*i+1;
  int right=2*i+2;
  if(left<n and arr[left]>arr[largest] ){
  	largest=left;
  }
  if(right<n and arr[right]>arr[largest]){
  	largest=right;
  }
  if(largest!=i){
  	swap(arr[i],arr[largest]);
  	maxHeap(arr,n,largest);
  }
	}
	void max(int arr[],int n){
		for(int i=0;i<=n/2-1;i++){
			maxHeap(arr,n,0);
		}
		for(int i=n-1;i>0;i--){
			swap(arr[i],arr[0]);
			maxHeap(arr,i,0  );
		}
	}

int main(){
	int arr[]={1,14,10,8,7,9,3,2,4,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	max(arr,n);
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
	}
	return 0;
}
