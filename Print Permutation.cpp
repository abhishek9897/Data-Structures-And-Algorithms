#include<bits/stdc++.h>
using namespace std;

void printPermutation(string str,int i,int n)
{
	if(i==n)
	{
		cout<<str<<endl;
		return;
	}
	for(int l=i;l<n;l++)
	{
		swap(str[i],str[l]);
		printPermutation(str,i+1,n);
		swap(str[i],str[l]);
	}

	

}
int main()
{
string str;
cout<<"Enter String For subsequences: ";
cin>>str;
int n=str.length();
	printPermutation(str,0,n);
	return 0;
}
