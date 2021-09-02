#include<iostream>
using namespace std;
void reverseArray(int arr[],int n)
{
	int i=0;int j=n-1;
	while(i<=j)
	{
		swap(arr[i++],arr[j--]);
	}
	
}
int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	reverseArray(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}

