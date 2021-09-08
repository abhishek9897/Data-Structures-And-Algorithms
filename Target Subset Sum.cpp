#include<bits/stdc++.h>
using namespace std;
 void sumSubset(int arr[],int target,vector<int>set,int i,int n)
 {
 	
 	if(i==n)
 	{
		 if(target==0)
	      {
	 	     for(auto j:set)
	 	       cout<<j<<" ";
		     cout<<endl;
	 	     return;  
		  }   
 		return;
	 }
	 // 	   not include
 	sumSubset(arr,target,set,i+1,n);
// 	   include
     set.push_back(arr[i]);
 	sumSubset(arr,target-arr[i],set,i+1,n);

 }
int  main()
{
	int arr[]={10,20,30,40,50};
	int target=70;
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int>v;
	sumSubset(arr,target,v,0,n);
	return 0;
}
