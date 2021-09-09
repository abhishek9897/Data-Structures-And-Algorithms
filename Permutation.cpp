#include<bits/stdc++.h>
using namespace std;
#define N 4
void print(int arr[]){
	for(int i=0;i<N;i++){
		cout<<arr[i]<<" ";
	}
	
	
}
//   array size (4)     =number of total boxes;
//    currentBox        = which which box is selected
//    toSelect          = how many boxes to select
void permutation(int arr[N],int currentBox,int toSelect)
{
	if(currentBox>toSelect)
	{
		print(arr);
		cout<<endl;
		return;
	}
	
	for(int i=0;i<N;i++){
		if(arr[i]==0)
		{
			arr[i]=currentBox;
			permutation(arr,currentBox+1,toSelect);
			arr[i]=0;	
		}
		
		
	}
}

 
int main(){

	int arr[N];
	memset(arr,0,sizeof(arr));
	
	cout<<"All the permutations for placing distinct known digits in box :"<<endl;
		permutation(arr,1,2);
		
	
	return 0;
}
