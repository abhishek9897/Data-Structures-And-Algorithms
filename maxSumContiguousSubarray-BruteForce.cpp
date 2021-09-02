#include<bits/stdc++.h>
using namespace std;
int maxSumContiguousSubarray(int arr[],int n)
{
	int maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=i;j<n;j++)
		{
			sum=sum+arr[j];
			maxi=max(maxi,sum);
			
			
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
