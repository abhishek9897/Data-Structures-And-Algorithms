#include<bits/stdc++.h>
using namespace std;
void add(vector<int> arr[],int a,int b){
	arr[a].push_back(b);
	arr[b].push_back(a);
}
bool detectUsingBfs(vector<int> arr[],int start,vector<bool> &visited){
	visited[start]=true;
	queue<pair<int,int>>q;
	q.push({start,-1});
	while(q.empty()==false){
		int node=q.front().first;
		int parent=q.front().second;
		q.pop();
		for(auto i:arr[node]){
			if(visited[i]==false){
				visited[i]=true;
				q.push({i,node});
			}
			else if(visited[i]==true and parent!=i) {
        return true;
			}
		}
	}

return false;
}
bool bfsUtil(vector<int> arr[],int n){
   vector<bool>visited(n,false);
	 for(int i=1;i<n;i++){
	  if(visited[i]==false){
	    if(detectUsingBfs(arr,i,visited)){
				return true;
			}	
		}
	 }	
  return false;	
}
int main(){
	vector<int>arr[11];
	add(arr,1,2);
	add(arr,2,6);
	add(arr,2,10);
	add(arr,10,9);
	add(arr,9,8);
	add(arr,7,8);
	add(arr,6,7);


	

if(bfsUtil(arr,11)){
	cout<<"YES";
}
else{
	cout<<"false";
}

	return 0;
}
