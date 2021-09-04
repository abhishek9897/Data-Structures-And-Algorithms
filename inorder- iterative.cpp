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
	void inorder(struct node*root)
	{
		stack<struct node*>s;
		if(root==NULL)
		{
			return;
		}
		
		while(root or s.empty()==false)
		{
			if(root)
			{
				s.push(root);
				root=root->left;
			}
			else{
				if(s.empty())
				{
					break;
				}
				root=s.top();
				s.pop();
				cout<<root->data<<" ";
				root=root->right;
			
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
	inorder(root);
 
	return 0;
}
