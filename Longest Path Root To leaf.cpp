#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	node* left, *right;
};

node* getNode(int data)
{
	
	node* newNode = new node;
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}
void sum(struct node* root,int &maximum,int sumRoot)
{
	if(root==NULL)
	{
		return;
	}
	if(root->left==NULL and root->right==NULL)
	{
		sumRoot=sumRoot+root->data;
		maximum=max(maximum,sumRoot);
		return;
	}
	sumRoot=sumRoot+root->data;
	 sum(root->left,maximum,sumRoot);
	  sum(root->right,maximum,sumRoot);
	
}
int sumOfRootToLeaf(struct node* root)
{
	
	int sumRoot=0;
	int maximum=0;
	
	 sum(root,maximum,sumRoot);
	return maximum;
}



int main()
{
	
	node* root = getNode(4);		 	 	 
	root->left = getNode(2);	
	root->right = getNode(5);	
	root->left->left = getNode(7);
	root->left->left->left=getNode(10);
	root->left->right = getNode(1); 
	root->right->left = getNode(2);
	root->right->right = getNode(3); 
	root->left->right->left = getNode(6);

	cout << "Sum = "
		<< sumOfRootToLeaf(root);

	return 0;
}

