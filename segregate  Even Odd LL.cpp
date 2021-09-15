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

void print(struct node* head){
	while(head){
		cout<<head->data<<" ";
		head=head->next;
	}
}
void evenOdd(struct node**head){
	struct node* evenStart=NULL;
	struct node* oddStart=NULL;
	struct node* evenEnd=NULL;
	struct node* oddEnd=NULL;
	struct node* temp=*head;
	while(temp){
//		 EVEN
		if(temp->data%2==0){
			if(evenStart==NULL){
				evenStart=evenEnd=temp;
				temp=temp->next;
			}
			else{
				evenEnd->next=temp;
				evenEnd=temp;
				temp=temp->next;
			}
			
		}
		//		ODD
		else{
			
			if(oddStart==NULL){
				oddStart=oddEnd=temp;
				temp=temp->next;
			}
			else{
				oddEnd->next=temp;
				oddEnd=temp;
				temp=temp->next;
			}

		}

	}
	if(evenStart==NULL or oddStart==NULL){
		return;
	}
	
		
		evenEnd->next=oddStart;
		oddEnd->next=NULL;
		*head=evenStart;
	

	
}

int main(){
	struct node* head;
	head=newnode(2);
	head->next=newnode(7);
	head->next->next=newnode(9);
    head->next->next->next=newnode(6);
    head->next->next->next->next=newnode(5);
    head->next->next->next->next->next=newnode(4);
    
    evenOdd(&head);
    print(newhead);
	return 0;
}
