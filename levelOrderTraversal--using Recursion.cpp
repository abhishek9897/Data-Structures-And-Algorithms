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
int height(struct node*root)
{
	if(root==NULL)
	{
		return 0;
		
	}
	int left=height(root->left);
	int right=height(root->right);
	return max(left,right)+1;
}
	
void levelOrderTraversalUtil(struct node* root,int level)
{
	if(root==NULL)
	{
		return;
	}
	if(level==1)
	{
		cout<<root->data<<" ";
		return;
	}
	if(level>1)
	{
		levelOrderTraversalUtil(root->left,level-1);
		levelOrderTraversalUtil(root->right,level-1);
	}
}
void levelOrderTraversal(struct node* root)
{
	int h=height(root);
	for(int i=1;i<=h;i++)
	{
		levelOrderTraversalUtil(root,i);
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
