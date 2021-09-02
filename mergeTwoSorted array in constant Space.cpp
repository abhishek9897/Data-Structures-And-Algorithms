#include<bits/stdc++.h>
using namespace std;


void mergeTwoSortedArrays(int arr1[],int arr2[],int n,int m)
{
	if(arr1[n-1]<arr2[0])
	{
		return;
	}
	int i=0;int j=0;
	while(arr1[n-1]>arr2[0])
	{
		if(arr1[i]>arr2[j])
		{
			swap(arr1[i],arr2[j]);
			sort(arr2,arr2+m);
			
		}
		else if(arr1[i]<arr2[j])
		{
			i++;
		}
		
	}
	
}

int main()
{
	int arr1[]={5,8,9};
	int arr2[]={1,2,4,6};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	int m=sizeof(arr2)/sizeof(arr2[0]);
	
	mergeTwoSortedArrays(arr1,arr2,n,m);
	for(int i=0;i<n;i++)
	{
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<m;i++)
	{
		cout<<arr2[i]<<" ";
	}
	return 0;
}
