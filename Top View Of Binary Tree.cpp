#include <bits/stdc++.h>
using namespace std;

// Structure of binary tree
struct Node {
	Node* left;
	Node* right;
	int data;
};

// function to create a new node
Node* newNode(int key)
{
	Node* node = new Node();
	node->left = node->right = NULL;
	node->data = key;
	return node;
}

void fillMap(Node* node, int d, int l,map<int, pair<int, int> >& map)
{
	if(node==NULL)
	{
		return;
	}
	if(map.count(d)==0){
		map[d]=make_pair(node->data,l);
	}
	else if(map[d].second>l)
	{
		map[d]=make_pair(node->data,l);
	}
	fillMap(node->left,d-1,l+1,map);
	fillMap(node ->right,d+1,l+1,map);
	
}

// function should print the topView of
// the binary tree
void topView(struct Node* root)
{
	map<int,pair<int,int> >map;
	fillMap(root,0,0,map);
	for(auto i:map)
	{
		cout<<i.second.first<<" ";
	}

}
// Driver Program to test above functions
int main()
{
	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->right = newNode(4);
	root->left->right->right = newNode(5);
	root->left->right->right->right = newNode(6);
	cout << "Following are nodes in top view of Binary "
			"Tree\n";
	topView(root);
	return 0;
}


