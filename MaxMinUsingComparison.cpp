#include<bits/stdc++.h>
using namespace std;
struct answer{
	int mini;
	int maxi;
};
struct answer* maxAndMin(int arr[],int n)
{
	struct answer* getminmax=new struct answer();
	getminmax->mini=INT_MAX;
	getminmax->maxi=INT_MIN;
	
	
	for(int i=0;i<n;i++)
	{
		getminmax->mini=min(getminmax->mini,arr[i]);
		getminmax->maxi=max(getminmax->maxi,arr[i]);
	}
	return getminmax;
}
int main()
{
	int arr[]={1,3,7,5,9,0,2};
	int n=sizeof(arr)/sizeof(arr[0]);
//int mini=minimum(arr,n);
//int maxi=maximum(arr,n);
struct answer* get=maxAndMin(arr,n);
cout<<"minimum element->"<<get->mini<<endl;

cout<<"maximum element->"<<get->maxi<<endl;
	
	return 0;
}

