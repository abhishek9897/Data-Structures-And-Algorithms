#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left, *right;
};
Node * newNode(int k)
{
	Node *temp = new Node;
	temp->data = k;
	temp->left = temp->right = NULL;
	return temp;
}

bool findPath(Node *root, vector<int> &path,int data)
{
	if(root==NULL)
	{
		return false;	
	}
	if(root->data==data)
	{
		path.push_back(root->data);
		return true;
	}
	if(findPath(root->left,path,data)==true)
	{
		path.push_back(root->data);
		return true;
	}
	if(findPath(root->right,path,data)==true)
	{
		path.push_back(root->data);
		return true;
	}
	path.pop_back();
	return false;
	
	
}
int findLCA(struct Node* root,int data1,int data2)
{
	vector<int>path1,path2;
	
	if(findPath(root,path1,data1)==false or findPath(root,path1,data2)==false)
	{
		cout<<"LCA Not Possible"<<endl;
		return -1;
	}
		int i;
		for(i=0;i<path1.size() and i<path2.size();i++)
		{
			if(path1[i]!=path2[i]){
					return path1[i-1];
			
			}	
		}
		
		
	
}

int main()
{
	Node* root=newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	cout << "LCA(4, 5) = " << findLCA(root, 4, 5)<<endl;
	cout << "LCA(4, 6) = " << findLCA(root, 4, 6)<<endl;
	cout << "LCA(3, 4) = " << findLCA(root, 3, 4)<<endl;
	cout << "LCA(2, 4) = " << findLCA(root, 2, 4)<<endl;
	return 0;
}

