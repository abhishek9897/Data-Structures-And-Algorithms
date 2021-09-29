#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int word=0;
	for(int i=0;i<s[i]!='\0';i++){
		if(s[i]==' ' and s[i-1]!=' '){
			word++;
		}
	}
	cout<<word+1;
	
	
	return 0;
	
}
