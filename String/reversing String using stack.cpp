#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	
	stack<char>st;
	for(int i=0;s[i]!='\0';i++){
		st.push(s[i]);
	}
	
	
	while(st.empty()==false){
		cout<<st.top();
		st.pop();
	}
	
	return 0;
	
}
