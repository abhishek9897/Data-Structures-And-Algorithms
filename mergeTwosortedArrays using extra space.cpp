#include<bits/stdc++.h>
using namespace std;


void mergeTwoSortedArrays(int arr1[],int arr2[],int n,int m)
{
//	       0(n+m*log(n+m)) for sorting +0(n+m) ------------------time complexity
//         0(n+m) for new array3  
	
	int arr3[n+m];
	int j=0;
	for(int i=0;i<n;i++)
	{
		arr3[j++]=arr1[i];	
	}
		for(int i=0;i<m;i++)
	{
		arr3[j++]=arr2[i];	
	}
	sort(arr3,arr3+(n+m));
	
	for(int i=0;i<n;i++)
	{
		arr1[i]=arr3[i];
	}
	int i=0;
	for(int k=n;k<m+n;k++)
	{
		arr2[i++]=arr3[k];
	}
	
	for(int a=0;a<n;a++)
	{
		cout<<arr1[a]<<" ";
	}
	cout<<endl;
	for(int a=0;a<m;a++)
	{
		cout<<arr2[a]<<" ";
	}
	

}

int main()
{
	int arr1[]={5,8,9};
	int arr2[]={1,2,4,6};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	int m=sizeof(arr2)/sizeof(arr2[0]);
	
	mergeTwoSortedArrays(arr1,arr2,n,m);
	
	return 0;
}
