#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* left,*right;
}*root;

struct node* newnode(int data)
{
	struct node* newnode=new struct node;
	newnode->data=data;
	newnode->left=newnode->right=NULL;
	return newnode;
}

void levelOrderTraversal(struct node* root)
{
	if(root==NULL)
	{
		cout<<"BT is empty";
	}
	queue<struct node*> q;
	q.push(root);
	while(!q.empty())
	{
		struct node* current=q.front();
		q.pop();
		cout<<current->data<<" ";
		if(current->left)
		{
			q.push(current->left);
		}
		if(current->right)
		{
			q.push(current->right);
		}
	}
	
}
int main()
{
	root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->right->left=newnode(6);
	root->right->right=newnode(7);
	levelOrderTraversal(root);
	return 0;
}
