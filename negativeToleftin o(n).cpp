#include<bits/stdc++.h>
using namespace std;

void negativeToLeft(int arr[],int n)
{
	int a[n];
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			a[j++]=arr[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			a[j++]=arr[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	
	
	
}
int main()
{
	int arr[]={2,-1,4,-3};
	int n=sizeof(arr)/sizeof(arr[0]);
    
negativeToLeft(arr,n);
//for(int i=0;i<n;i++)
//{
//	cout<<arr[i]<<" ";
//}
	
	return 0;
}

