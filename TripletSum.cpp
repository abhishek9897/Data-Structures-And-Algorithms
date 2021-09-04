#include<bits/stdc++.h>
using namespace std;

bool find3Numbers(int arr[],int n,int sum)
{
	sort(arr,arr+n);
	for(int i=0;i<n-2;i++)
	{
		int j=i+1;
		int k=n-1;
		while(j<k)
		{
			if(arr[i]+arr[j]+arr[k]==sum)
		{
			return true;
		}
		else if(arr[i]+arr[j]+arr[k]<sum)
		{
			j++;
			
		}
		else{
			
			k--;
		}
		}
		
	}
	return false;
	
}


/* Driver code */
int main()
{
    int A[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 22;
    int arr_size = sizeof(A) / sizeof(A[0]);
    if(find3Numbers(A, arr_size, sum))
    {
    	cout<<"triplet is present";
	}
	else{
		cout<<"not present";
	}
    
    return 0;
}
 
