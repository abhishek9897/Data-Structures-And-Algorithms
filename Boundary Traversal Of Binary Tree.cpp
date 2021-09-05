#include <bits/stdc++.h>
using namespace std;

// Structure of binary tree
struct node {
	node* left;
	node* right;
	int data;
};

//20 8 4 10 14 25 22

// function to create a new node
node* newNode(int key)
{
	node* node = new struct node;
	node->left = node->right = NULL;
	node->data = key;
	return node;
}

void leftBoundary(struct node*root)
{
	if(root==NULL)
	{
		return;
	}
	if(root->left)
	{
		cout<<root->data<<" ";
		leftBoundary(root->left);
	}
	else if(root->right)
	{
		cout<<root->data<<" ";
		leftBoundary(root->right);
		
	}
}
void leaves(struct node* root)
{
		if(root==NULL)
	{
		return ;
	}
	if(root->left==NULL and root->right==NULL)
	{
		cout<<root->data<<" ";
		return;
	}

	leaves(root->left);
	leaves(root->right);
}
void rightBoundary(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
	if(root->right){
		rightBoundary(root->right);
		cout<<root->data<<" ";
	}
	else if(root->left){
		rightBoundary(root->left);
		cout<<root->data<<" ";
		}
	
}
void boundaryTraversal(struct node* root)
{
	cout<<root->data<<" ";
	if(root->left)
	  leftBoundary(root->left);
	  
	leaves(root->left);
	leaves(root->right);
	
	if(root->right){
		rightBoundary(root->right);
	}
}
// Driver Program to test above functions
int main()
{
	struct node* root = newNode(20);
    root->left = newNode(8);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);
    root->right = newNode(22);
    root->right->right = newNode(25);
	cout << "Following are nodes in boundary traversal  of Binary "
			"Tree\n";
	boundaryTraversal(root);
	return 0;
}


