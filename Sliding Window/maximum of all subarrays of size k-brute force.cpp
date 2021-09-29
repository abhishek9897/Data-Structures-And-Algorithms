#include<bits/stdc++.h>
using namespace std;
vector<int> maximumofallSubarray(int arr[],int n,int k){
	
	vector<int>v;
	for(int i=0;i<=n-k;i++){
		int maximum=INT_MIN;
		for(int j=i;j<k+i;j++){
			maximum=max(maximum,arr[j]);
		}
		v.push_back(maximum);
	}
	return v;                                       
}
int main(){
	int arr[]={1,2,3,1,4,5,2,3,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	vector<int>a=maximumofallSubarray(arr,n,k);
	for(auto i:a){
		cout<<i<<" ";
	}
	return 0;
}
