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
int height(struct node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	return max(height(root->left),height(root->right))+1;
	
}
void rightViewUtil(struct node*root,int level,int *maxlevel)
{
	if(root==NULL)
	{
		return;
	}
	if(*maxlevel<level)
	{
		cout<<root->data<<" ";
		*maxlevel=level;
	}
	rightViewUtil(root->right,level+1,maxlevel);
	rightViewUtil(root->left,level+1,maxlevel);
	
}	
void rightView(struct node* root)
{	int maxlevel=0;
		rightViewUtil(root,1,&maxlevel);	
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
	root->left->left->left=newnode(8);
	rightView(root);

	return 0;
}
