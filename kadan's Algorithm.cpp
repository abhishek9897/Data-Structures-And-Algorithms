#include<bits/stdc++.h>
using namespace std;
int maxSumContiguousSubarray(int arr[],int n)
{
	int sum=0;
	int maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
		maxi=max(sum,maxi);
		if(sum<0)
		{
			sum=0;
		}
		
	}
	return maxi;
	
}
int main()
{
	int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<maxSumContiguousSubarray(arr,n);
	return 0;
}
