#include<bits/stdc++.h>
using namespace std;

void maxAndMin(int arr[],int n)
{
	priority_queue<int,vector<int>,greater<int> >q;
	for(int i=0;i<n;i++)
	{
		q.push(arr[i]);
		if(q.size()>1)
		{
			q.pop();
		}	
	}
	cout<<q.top();
}
int main()
{
	int arr[]={1,3,7,5,9,0,12};
	int n=sizeof(arr)/sizeof(arr[0]);
    max(arr,n);

	
	return 0;
}

