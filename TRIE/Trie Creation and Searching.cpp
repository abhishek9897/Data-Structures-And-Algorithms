#include<iostream>
#include<string>
using namespace std;
struct trie{
	struct trie* arr[26];
	bool endingHere;
};
struct trie* getnode(){

struct trie* newnode=new trie;
for(int i=0;i<26;i++){
	newnode->arr[i]=NULL;
	
}
newnode->endingHere=false;
return newnode;
}
void insert(struct trie* root,string word){
	
	struct trie* temp=root;
	for(int i=0;i<word.length();i++){
		int index=word[i]-'a';
		if(temp->arr[index]==false){
			temp->arr[index]=getnode();
		}
		temp=temp->arr[index];
	}
	temp->endingHere=true;
}
bool search(struct trie* root,string key){
	struct trie* temp=root;
	for(int i=0;i<key.length();i++){
		int index=key[i]-'a';
		if(temp->arr[index]==false){
			return false;
		}
		temp=temp->arr[index];
	}
	return temp->endingHere;
	
}
int main(){
	string str[]={"abcdadada","abcdadadab"};
	int n=sizeof(str)/sizeof(str[0]);
	struct trie* root=getnode();
	for(int i=0;i<n;i++){
		insert(root,str[i]);
		
	}
	if(search(root,"abcdadadab")){
		cout<<"YES";
	}
	return 0;
}
