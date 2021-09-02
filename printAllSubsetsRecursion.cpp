#include <bits/stdc++.h>
using namespace std;

void printAllSubsetsRec(int arr[],int i, int n, vector<int> v,int sum)
{
	if(sum==0)
	{
		for(auto j:v)
		{
			cout<<j<<" ";
		}
		cout<<endl;
		return;
		
	}
	if(i==n and sum!=0)
	{
		return;
	}
	printAllSubsetsRec(arr,i+1,n,v,sum);
	v.push_back(arr[i]);
	printAllSubsetsRec(arr,i+1,n,v,sum-arr[i]);
	

}

void printAllSubsets(int arr[], int n, int sum)
{
	vector<int> v;
	printAllSubsetsRec(arr,0, n, v, sum);
}

// Driver code
int main()
{
	int arr[] = { 2, 5, 8, 4, 6, 11 };
	int sum = 13;
	int n = sizeof(arr) / sizeof(arr[0]);
	printAllSubsets(arr, n, sum);
	return 0;
}

