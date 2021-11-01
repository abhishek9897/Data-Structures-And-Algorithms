#include<bits/stdc++.h>
using namespace std;
void add(vector<int> arr[],int a,int b){
	arr[a].push_back(b);
	arr[b].push_back(a);
}
int main(){
	vector<int>arr[6];
	add(arr,1,2);
	add(arr,2,3);
	add(arr,2,4);
	add(arr,4,3);
	add(arr,1,5);
	add(arr,5,3);
	
	
	for(int i=1;i<6;i++){
		cout<<i<<"-> ";
		for(auto j:arr[i]){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
