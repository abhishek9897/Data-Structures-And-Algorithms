#include<bits/stdc++.h>
using namespace std;

bool subarray(int arr[],int n)
{
	unordered_set<int>s;

	int preSum=0;
	
	for(int i=0;i<n;i++)
	{
		preSum=preSum+arr[i];
		if(arr[i]==0 or preSum==0 or s.find(preSum)!=s.end())
		{
			return true;
		}
		else{
			s.insert(preSum);
		}
		
		
	}
	return false;
}
int main()
{
	int arr[]={-6,1,-1};
	int n=sizeof(arr)/sizeof(arr[0]);
	if(subarray(arr,n))
	{
		cout<<"It Contains Subarray of sum 0";
	}
	else
	{
		cout<<"It does not Contains Subarray of sum 0";
	}
	
	return 0;
}
