#include<bits/stdc++.h>
using namespace std;

void printSubsequences(string str,string subseq,int i,int n)
{
	if(i==n)
	{
		cout<<subseq<<endl;
		return;
	}
//	 include in subsequence
	printSubsequences(str,subseq+str[i],i+1,n);
//	not include in subsequence
	printSubsequences(str,subseq,i+1,n);
	
	

}
int main()
{
string str;
cout<<"Enter String For subsequences: ";
cin>>str;
int n=str.length();
	printSubsequences(str,"",0,n);
	return 0;
}
