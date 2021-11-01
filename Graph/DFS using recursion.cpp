#include<bits/stdc++.h>
using namespace std;
void add(vector<int> arr[],int a,int b){
	arr[a].push_back(b);
	arr[b].push_back(a);
}
void dfs(vector<int> arr[],int start,vector<bool> &visited){
visited[start]=true;
cout<<start<<" ";

for(auto i:arr[start]){
	if(visited[i]==false){
		dfs(arr,i,visited);
	}
}
}

void dfsUtil(vector<int> arr[],int n){
vector<bool> visited(n,false);
for(int i=1;i<n;i++){
	if(visited[i]==false){
		dfs(arr,i,visited);
	}
}
}
int main(){
	vector<int>arr[8];
	add(arr,1,2);
	add(arr,2,4);
	add(arr,2,7);
	add(arr,3,5);
	add(arr,6,7);
	add(arr,4,6);

	

dfsUtil(arr,8);

	return 0;
}
