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
	
void levelOrderTraversalUtil(struct node* root,int level,stack<struct node*>&s)
{
	if(root==NULL)
	{
		return;
	}
	if(level==1)
	{
		
		s.push(root);
		return;
	}
	if(level>1)
	{
		levelOrderTraversalUtil(root->left,level-1,s);
		levelOrderTraversalUtil(root->right,level-1,s);
	}
}
void levelOrderTraversal(struct node* root)
{
	stack<struct node*>s;
	int h=height(root);
	for(int i=1;i<=h;i++)
	{
		levelOrderTraversalUtil(root,i,s);
	}
	while(!s.empty())
	{
		cout<<s.top()->data<<" ";
		s.pop();
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
