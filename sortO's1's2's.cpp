#include<bits/stdc++.h>
using namespace std;

void sort0s1s2s(int arr[],int n)
{
	int count0=0,count1=0,count2=0;
	
	for(int i=0;i<n;i++)
	{
		switch(arr[i])
		{
			case 0:
				count0=count0+1;
				break;
			case 1:
			    count1=count1+1;
			    break;
			case 2:
			    count2=count2+1;
			    break;
						
		}
		
	}
	while(count0>0)
	{
		cout<<0<<" ";
		count0--;
	}
	while(count1>0)
	{
		cout<<1<<" ";
		count1--;
		
	}
	while(count2>0)
	{
		cout<<2<<" ";
		count2--;
	}
	
	
}
int main()
{
	int arr[]={2,0,1,2,1,0};
	int n=sizeof(arr)/sizeof(arr[0]);
    sort0s1s2s(arr,n);
    

	
	return 0;
}

