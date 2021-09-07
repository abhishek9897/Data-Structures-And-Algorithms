#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	node* left, *right;
};

node* newNode(int data)
{
	
	node* newNode = new node;
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}
int  sum(struct node* root,int &maximum)
{
	if(root==NULL)
	{
		return 0;
	}
return max(root->data+sum(root->left,maximum)+sum(root->right,maximum),maximum);

	
}
int maximumSumSubtree(struct node* root)
{
	int maximum=INT_MIN;
	 return sum(root,maximum);

}



int main()
{
	
	node* root = newNode(1);
    root->left = newNode(-2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(-6);
    root->right->right = newNode(2);

	cout << "maximum = "
		<< maximumSumSubtree(root);

	return 0;
}

