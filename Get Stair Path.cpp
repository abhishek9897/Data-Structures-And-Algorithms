#include<iostream>
using namespace std;

void getStairPath(int n,string path)
{
	if(n<0)
	{
		return;
	}
	if(n==0)
	{
		cout<<"["<<path<<"]"<<endl;
		return;
	}
//	    we are assuming that it can take maximum 2 steps in one go.

	getStairPath(n-1,path+"1");
	getStairPath(n-2,path+"2");

}
int main()
{
	int n;
	cout<<"Enter Total Numbers Of Stairs: ";
	cin>>n;
	getStairPath(n,"");
	return 0;
}
