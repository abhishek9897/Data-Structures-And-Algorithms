#include<bits/stdc++.h>
using namespace std;

void negativeToLeft(int arr[],int n)
{
//	nlogn
	sort(arr,arr+n);
	
	
	
}
int main()
{
	int arr[]={2,-1,4,-3};
	int n=sizeof(arr)/sizeof(arr[0]);
    
negativeToLeft(arr,n);
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
	
	return 0;
}

