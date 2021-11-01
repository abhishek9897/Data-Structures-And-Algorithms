#include<bits/stdc++.h>
using namespace std;
void add(vector<int> arr[],int a,int b){
	arr[a].push_back(b);
	arr[b].push_back(a);
}
void bfs(vector<int> arr[],int start,vector<bool> &visited){
queue<int>q;
visited[start]=true;
q.push(start);
while(q.empty()==false){

	int a=q.front();
	cout<<a<<" ";
	q.pop();
	for(auto i:arr[a]){
		if(visited[i]==false){
			visited[i]=true;
			q.push(i);


		}
	}
}
}

void bfsUtil(vector<int> arr[],int n){
vector<bool> visited(n,false);
for(int i=1;i<n;i++){
	if(visited[i]==false){
		bfs(arr,i,visited);
	}
}
}
int main(){
	vector<int>arr[8];
	add(arr,1,2);
	add(arr,2,3);
	add(arr,2,7);
	add(arr,3,5);
	add(arr,5,7);
	add(arr,4,6);
	

bfsUtil(arr,8);

	return 0;
}
