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
//int height(struct node*root)
//{
//	if(root==NULL)
//	{
//		return 0;
//		
//	}
//	int left=height(root->left);
//	int right=height(root->right);
//	return max(left,right)+1;
//}
	
int size(struct node* root)
{
	if(root==NULL)
	{
		return 0;
	}
   
	return size(root->left)+size(root->right)+1;
	
	
	
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
	
cout<<size(root);
	
	
	return 0;
}
