#include<bits/stdc++.h>
using namespace std;

//             o(n)
void duplicate(int arr[],int n)
{
	int slow=arr[0];
	int fast=arr[0];
	do
	{
		slow=arr[slow];
		fast=arr[arr[fast]];
		
	}while(slow!=fast);
	
	fast=arr[0];
	while(slow!=fast)
	{
		slow=arr[slow];
		fast=arr[fast];
	}
	cout<< slow;

}

int main()
{
	int arr[]={2,5,9,6,9,3,8,9,7,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	duplicate(arr,n);
	
	return 0;
}
