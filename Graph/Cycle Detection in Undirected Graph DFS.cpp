#include<bits/stdc++.h>
using namespace std;
void add(vector<int> arr[],int a,int b){
	arr[a].push_back(b);
	arr[b].push_back(a);
}
bool detectUsingBfs(vector<int> arr[],int start,vector<bool> &visited,int parent){
	visited[start]=true;

  for(auto i:arr[start]){
		if(visited[i]==false){
       
			 if(detectUsingBfs(arr,i,visited,start)){
				 return true;
			 }
			 }
			 else if(visited[i]==true and i!=parent){
				 return true;
			 }
		}
		return false;
	}

bool bfsUtil(vector<int> arr[],int n){
   vector<bool>visited(n,false);
	 for(int i=1;i<n;i++){
	  if(visited[i]==false){
	    if(detectUsingBfs(arr,i,visited,-1)){
				return true;
			}	
		}
	 }	
  return false;	
}
int main(){
	vector<int>arr[9];
	add(arr,2,5);
	add(arr,5,6);
	add(arr,6,7);
	add(arr,7,8);
	add(arr,8,5);
	

	

if(bfsUtil(arr,9)){
	cout<<"YES";
}
else{
	cout<<"false";
}

	return 0;
}
