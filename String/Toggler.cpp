#include<bits/stdc++.h>
using namespace std;
int main(){
	string name="abhiSHEK";
	for(int i=0;name[i]!='\0';i++){
		if(65<=name[i] and name[i]<=90){
			name[i]=name[i]+32;
		}
		else if(97<=name[i] and name[i]<=122){
			name[i]=name[i]-32;
		}
	}
	cout<<name;
	return 0;
}

