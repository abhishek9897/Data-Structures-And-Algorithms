#include<bits/stdc++.h>
using namespace std;

void negativeToLeft(int arr[],int n)
{
	int i;int j=0;
	for(i=1;i<n;i++)
	{
		if(arr[i]<0)
		{
			swap(arr[i],arr[j++]);
		}
	}
	
	
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

