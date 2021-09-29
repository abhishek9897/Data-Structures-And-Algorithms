#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int vCount=0,CCount=0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U'
		or s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
			vCount++;
		} 
		else if((65<=s[i] and s[i]<=90) or (97<=s[i] and s[i]<=122)){
			CCount++;
		}
	}
	cout<<"vowels :"<<vCount<<endl;
	cout<<"consonants :"<<CCount;
	
	
	return 0;
}

