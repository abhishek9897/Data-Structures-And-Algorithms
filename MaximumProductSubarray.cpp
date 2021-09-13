#include<bits/stdc++.h>
using namespace std;

int maximumProduct(int arr[],int n){
	int maximum=arr[0];
	int res=arr[0];
	int minimum=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]==0){
			maximum=1;
			minimum=1;
		}
		else{
			maximum=max(maximum,minimum*arr[i]);
		minimum=min(minimum,minimum*arr[i]);
		res=max(res,maximum);
		}
		
		
	}
	return res;
}
int main(){
	int arr[]={-1, -3, -10, 0, 60};
	int n=sizeof(arr)/sizeof(arr[0]);
cout<<	maximumProduct(arr,n);
	
	return 0;
}
