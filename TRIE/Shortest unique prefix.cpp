#include<iostream>
using namespace std;
#define max 256
struct trie{
	struct trie* child[max];
	int freq;
	
};

struct trie* newnode(){
	struct trie *newnode=new trie;
	newnode->freq=1;
	for(int i=0;i<max;i++){
		newnode->child[i]=NULL;
	}
	
	return newnode;
	
}
void insert(struct trie* root,string name){
	struct trie* temp=root;
	for(int i=0;i<name.length();i++){
		int index=name[i];
		if(temp->child[index]==NULL){
			temp->child[index]=newnode();
		}
		else{
			temp->child[index]->freq++;
			
		}
		temp=temp->child[index];
		
	}
}
 void find(struct trie* root,char prefix[],int ind){
	if(root==NULL){
		return;
	}
	if(root->freq==1){
        prefix[ind]='\0';
      
	cout<<prefix<<endl;
		return;
	}
	
	for(int i=0;i<max;i++){
		if(root->child[i]!=NULL)
	     	prefix[ind]=i;
		    find(root->child[i],prefix,ind+1);
	}
	
}
int main(){
	string str[]={"zebra","dog","dove","duck"};
	struct trie* root=newnode();
	root->freq=0;
	int  n=sizeof(str)/sizeof(str[0]);
	for(int i=0;i<n;i++){
		insert(root,str[i]);
	}
	char prefix[500];
	find(root,prefix,0);
	
	return 0;
}
