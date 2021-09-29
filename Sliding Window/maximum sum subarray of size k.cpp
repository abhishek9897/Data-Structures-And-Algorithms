#include<bits/stdc++.h>
using namespace std;
int maximumsub(int arr[],int k,int n,int final){
	int maximum=INT_MIN;
	for(int i=0;i<=final;i++){
		int sum=0;
		for(int j=i;j<k+i;j++){
			sum=sum+arr[j];
		}
		maximum=max(maximum,sum);
	}
	return maximum;
}
int maximumSubarray(int arr[],int n,int k){
	
	return 	maximumsub(arr,k,n,n-k);
	
}
int main(){
	int arr[]={100,200,300,400};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<maximumSubarray(arr,n,2);
	
}
