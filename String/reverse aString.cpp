#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int j=s.length()-1;
	for(int i=0;i<s.length()/2;i++){
		swap(s[i],s[j--]);
	}
	cout<<s;
	
	
	return 0;
	
}
