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
	
void preorder(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
	stack<struct node*>s;
	s.push(root);
	while(!s.empty())
	{
		struct node* current=s.top();
		cout<<current->data<<" ";
		s.pop();
		if(current->right){
			s.push(current->right);
		}
		if(current->left)
		{
			s.push(current->left);
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
	preorder(root);

	return 0;
}
