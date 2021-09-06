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
int sumTree(struct node*root)
	{
		if(root==NULL)
		{
			
      return 0;
		}
		int old_val=root->data;
		root->data=sumTree(root->left)+sumTree(root->right);
		
		 		  return  root->data+old_val;		
	}
	
void inorder(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
	
	inorder(root->left);cout<<root->data<<" ";
	inorder(root->right);
}
int main()
{
	 root = newnode(10);
    root->left = newnode(-2);
    root->right = newnode(6);
    root->left->left = newnode(8);
    root->left->right = newnode(-4);
    root->right->left = newnode(7);
    root->right->right = newnode(5);
	sumTree(root);
 inorder(root);
	return 0;
}
