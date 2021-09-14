#include<bits/stdc++.h>
using namespace std;
kSorted(int arr[],int k,int n){
	priority_queue<int,vector<int>,greater<int> >q(arr,arr+k+1);
	
	int index=0;
	for(int i=k+1;i<n;i++){
		arr[index++]=q.top();
		q.pop();
		q.push(arr[i]);
	}
	while(q.empty()==false){
		arr[index++]=q.top();
		q.pop();
		
	}
//	2, 3, 5, 6, 8, 9, 10}
}
int main(){
	int arr[] = {6, 5, 3, 2, 8, 10, 9};
          int  k = 3;
          int n=sizeof(arr)/sizeof(arr[0]);
          kSorted(arr,k,n);
          for(int i=0;i<n;i++){
          	cout<<arr[i]<<" ";
		  }
	return 0;
}
