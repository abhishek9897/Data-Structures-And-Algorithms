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


void remove(struct node*head){
	struct node *temp=head;
	while(temp->next){
//		    if current AND NEXT ARE EQUAL
		if(temp->data==temp->next->data){
			struct node* q;
		    q=temp->next->next;
		    temp->next=NULL;
		    temp->next=q;
			
		}
//		 NOT EQUAL
		else{
			temp=temp->next;
			
		}
	}
}
void print(struct node* head){
	while(head){
		cout<<head->data<<" ";
		head=head->next;
	}
}

int main(){
	struct node* head;
	head=newnode(2);
	head->next=newnode(2);
	head->next->next=newnode(2);
    head->next->next->next=newnode(2);
    head->next->next->next->next=newnode(3);
    remove(head);
    print(head);
	return 0;
}
