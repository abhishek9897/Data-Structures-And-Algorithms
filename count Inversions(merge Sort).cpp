#include<bits/stdc++.h>
using namespace std;
int merge(int arr[],int left,int middle,int right,int temp[]){
	int i=left;
	int j=middle;
	int k=left;
	int inv=0;
	while(i<=middle-1 and j<=right){
		if(arr[i]<=arr[j]){
			temp[k++]=arr[i++];
			
		}
		else{
			temp[k++]=arr[j++];
			
			inv=inv+(middle-i);
			
		}
	}
	while(i<=middle-1){
		temp[k++]=arr[i++];
	}
	while(j<=right){
		temp[k++]=arr[j++];
	}
	for(int i=left;i<=right;i++){
		arr[i]=temp[i];
	}
	return inv;
	
	
}
int mergeSort(int arr[],int left,int right,int temp[]){
	int inv=0;
	if(right>left){
		
	
	int middle=(left+right)/2;
inv=inv+mergeSort(arr,left,middle,temp);
inv=inv+mergeSort(arr,middle+1,right,temp);
inv=inv+merge(arr,left,middle+1,right,temp);

}
return  inv;
}
int main(){
	
	int arr[]={ 9,6,8,4 };
	int n=sizeof(arr)/sizeof(arr[0]);
	int temp[n];
cout<<	mergeSort(arr,0,n-1,temp);
	

		return 0;
}
