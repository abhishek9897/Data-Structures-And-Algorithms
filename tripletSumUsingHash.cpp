#include<bits/stdc++.h>
using namespace std;

void find3Numbers(int arr[],int n,int sum)
{
	for(int i=0;i<n-1;i++)
	{
		unordered_set<int>set;
		for(int j=i+1;j<n;j++)
		{
			if(set.find(sum-arr[i]-arr[j])!=set.end())
			{
				cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
			}
			else{
				set.insert(arr[j]);
			}
		}
		
	}
	
	
}


/* Driver code */
int main()
{
    int A[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 22;
    int arr_size = sizeof(A) / sizeof(A[0]);
    find3Numbers(A, arr_size, sum);
   
    
    return 0;
}
 
