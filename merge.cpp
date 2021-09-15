#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node* next;
};
struct node* newnode(int data){
	struct node* newnode= new struct node;
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}
struct node* merge(struct node*a,struct node* b){
	node* result=NULL;
	if(a==NULL){
		return b;
		
	}
else	if(b==NULL){
		return a;
	}
	if(a->data>=b->data){
		result=b;
		result->next=merge(a,b->next);
	}
	else{
		result=a;
		
		result->next=merge(a->next,b);
	}
	return result;
	
	
}

int main(){
	struct node* head1,*head2;
	head1=newnode(2);
	head1->next=newnode(5);
	head1->next->next=newnode(7);
	head2=newnode(3);
	head2->next=newnode(6);
	
	head2->next->next=newnode(9);
node* head=	merge(head1,head2);
while(head!=NULL){
	cout<<head->data<<" ";
	head=head->next;
}
	return 0;
}
