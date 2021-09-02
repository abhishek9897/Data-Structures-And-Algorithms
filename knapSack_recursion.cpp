#include<bits/stdc++.h>
using namespace std;
int static t[100][100];

int knapsack(int weight[],int val[],int capacity,int n)
{
	if(n==0 or capacity==0)
	{
		return 0;
	}
	if(weight[n-1]<=capacity)
	{
		return max((val[n-1]+knackswap(weight,val,capacity-weight[n-1],n-1)),knackswap(weight,val,capacity,n-1));
	}
	else{
		return knapsack(weight,val,capacity,n-1);
	}
}
int main()
{
	memset(t,-1,sizeof(t));
	int val[]={60,100,120};
	int weight[]={10,20,30};
	int w=50;
	int n=sizeof(weight)/sizeof(weight[0]);
cout<<	knapsack(weight,val,w,n);
	
	
}
