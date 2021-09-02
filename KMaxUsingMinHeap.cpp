#include<bits/stdc++.h>
using namespace std;
void KthMaxUsingMinHeap(int arr[],int n,int k)
{
	priority_queue<int,vector<int>,greater<int> >queue;
	for(int i=0;i<n;i++)
	{
		queue.push(arr[i]);
		if(queue.size()>k)
		{
			queue.pop();
		}
		
	}
	while(!queue.empty())
	{
		cout<<queue.top()<<" ";
		queue.pop();
	}
}
int main()
{
	int arr[]={5,6,2,8,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k;
	cin>>k;
	KthMaxUsingMinHeap(arr,n,k);
	
	return 0;
}
