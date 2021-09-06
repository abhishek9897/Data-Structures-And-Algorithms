
#include <iostream>
using namespace std;


struct node
{
	int data;
	node* left;
	node* right;
};


node* newNode(int data)
{
	node* new_node = new node;
	new_node->data = data;
	new_node->left = new_node->right = NULL;
	return (new_node);
}
int diagonalUtil(struct node* root,int *diagonal)
{
	if(root==NULL)
	{
		return -1;
	}
	int leftheight=diagonalUtil(root->left,diagonal);
	int rightheight=diagonalUtil(root->right,diagonal);
	*diagonal=max(*diagonal,leftheight+rightheight+2);
	return max(leftheight,rightheight)+1;
}
int diagonal(struct node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	int diagonal=0;
	diagonalUtil(root,&diagonal);
	return diagonal;
}
int main()
{

	struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
 cout<<diagonal(root);
	

	return 0;
}

