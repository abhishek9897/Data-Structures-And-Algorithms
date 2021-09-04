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
	
void leftView(struct node* root)
{
	queue<struct  node*>q;
	q.push(root);
	while(!q.empty())
	{
		int n=q.size();
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				cout<<q.front()->data<<" ";
			}
			if(q.front()->left)
	    	{
			    q.push(q.front()->left);
		    }
		   if(q.front()->right)
		    {
		    	q.push(q.front()->right);
		    }
		q.pop();
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
	root->right->right->right=newnode(8);
	leftView(root);

	return 0;
}
