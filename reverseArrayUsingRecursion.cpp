#include<iostream>
using namespace std;
void reverseArray(int arr[],int n,int i)
{
	if(i==n)
	{
		return;
	}
	reverseArray(arr,n,i+1);
	cout<<arr[i]<<" ";
	}
int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	reverseArray(arr,n,0);
	
	return 0;
}

