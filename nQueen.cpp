#include<bits/stdc++.h>
using namespace std;
#define n 4
bool isSafe(char arr[][n],int col,int row)
{
	for(int i=row-1;i>=0;i--)
	{
		if(arr[i][col]=='Q')
		{
			return false;
		}
	}
	for(int i=row-1,j=col-1;i>=0 and j>=0;i--,j--){
		if(arr[i][j]=='Q')
		  {
			return false;
		}
		
		
	}
	for(int i=row-1,j=col+1;i>=0 and j<n;i--,j++){
		if(arr[i][j]=='Q')
		   {
			return false;
		}
		
	}
	return true;
}
void print(char arr[][n]){
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
cout<<endl;

}
void nQueen(char arr[][n],int row)
{
	if(row==n)
	{
		print(arr);
		return;
	}

	
	for(int col=0;col<n;col++)
	{
		if(isSafe(arr,col,row)==true){
			arr[row][col]='Q';
			nQueen(arr,row+1);
			arr[row][col]='-';	
		}
	}
	
}


int main(){
	
	char arr[n][n];
	memset(arr,'-',sizeof(arr));
	nQueen(arr,0);
	
	return 0;
}
