#include<bits/stdc++.h>
using namespace std;

void duplicate(int arr[],int n)
{
	set<int>set;
	for(int i=0;i<n;i++)
	{
		if(set.find(arr[i])!=set.end())
		{
			cout<<"duplicate element is"<<" "<<arr[i];
			break;
			
		}
		else{
			set.insert(arr[i]);
		}
	}
	
}

int main()
{
	int arr[]={1,3,1,5,4,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	duplicate(arr,n);
	
	return 0;
}
