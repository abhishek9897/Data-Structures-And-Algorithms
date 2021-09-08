#include<iostream>
using namespace std;

void getMazePath(int n,int row,int col,string path)
{
	if(row>n or col>n)
	{
		return;
	}
	if(row==n and col==n)
	{
		cout<<path<<endl;
		return;
	}
	getMazePath(n,row,col+1,path+"Right ");
	getMazePath(n,row+1,col,path+"Down ");

}
int main()
{
	int n;
//	    assuming it is n*n path
	cout<<"Enter the Dimension For Path : ";
	cin>>n;
	getMazePath(n,1,1,"");
	return 0;
}
