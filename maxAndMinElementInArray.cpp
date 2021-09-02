#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={1,3,7,2};
	int n=sizeof(arr)/sizeof(arr[0]);
//      o(nlog(n)) using sorting
sort(arr,arr+n);
cout<<"minimum element->"<<arr[0]<<endl;

cout<<"maximum element->"<<arr[n-1]<<endl;
	
	return 0;
}

