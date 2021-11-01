#include<bits/stdc++.h>
using namespace std;
void add(vector<int> arr[],int a,int b){
	arr[a].push_back(b);
	arr[b].push_back(a);
}
void dfs(vector<int> arr[],int start,vector<bool> &visited){
stack<int>s;
visited[start]=true;
s.push(start);
while(s.empty()==false){
	int a=s.top();
	s.pop();
	cout<<a<<" ";
	for(int i:arr[a]){
		if(visited[i]==false){
			visited[i]=true;
			s.push(i);
		}
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
