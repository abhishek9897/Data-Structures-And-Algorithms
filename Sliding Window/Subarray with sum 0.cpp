#include<bits/stdc++.h>
using namespace std;
bool subarray(int arr[],int n){
	int sum=0;
	unordered_set<int>set;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
		if(sum==0 or arr[i]==0 or set.find(sum)!=set.end()){
			return true;
		}
		set.insert(sum);
	}
	
	return false;
}
int main(){
	int arr[]={2,1,-3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	if(subarray(arr,n)==true){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
