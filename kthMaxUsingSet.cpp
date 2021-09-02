#include<bits/stdc++.h>
using namespace std;

void Kthmax(int arr[],int n,int k)
{
	set<int>s(arr,arr+n);
	set<int>::iterator i=s.begin();
	advance(i,n-k);
	cout<<*i;
	

}
int main()
{
	int arr[]={1,3,7,5,9,0,12};
	int n=sizeof(arr)/sizeof(arr[0]);
    Kthmax(arr,n,3);

	
	return 0;
}

