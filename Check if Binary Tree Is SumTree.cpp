
#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int data)
{
	struct node*node=new struct node;
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return(node);
}
int sum(struct node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	return root->data+sum(root->left)+sum(root->right);
}
bool isSumTree(struct node* root){

  if(root==NULL or (root->left==NULL and root->right==NULL))
	{
		return true;
	}
  int left=sum(root->left);
	int right=sum(root->right);

	  return (root->data==left+right) and isSumTree(root->left) and isSumTree(root->right);
		  
}

int main()
{
	struct node *root = newNode(26);
	root->left = newNode(10);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(6);
	root->right->right = newNode(3);
	
	if (isSumTree(root))
		cout << "The given tree is a SumTree ";
	else
		cout << "The given tree is not a SumTree ";

	
	return 0;
}


