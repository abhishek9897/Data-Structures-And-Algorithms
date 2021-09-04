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
	
void preInPost(struct node* root,vector<int>&pre,vector<int>&ino,vector<int>&post)
{
	if(root==NULL)
	{
		return;
	}
	pre.push_back(root->data);
	preInPost(root->left,pre,ino,post);
	ino.push_back(root->data);
	preInPost(root->right,pre,ino,post);
	post.push_back(root->data);
	
	
   
	
	
	
	
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
	vector<int>pre;
	vector<int>ino;
	vector<int>post;
 preInPost(root,pre,ino,post);
	
//	print the preorder
cout<<"preorder traversal->";
for(auto i=pre.begin();i!=pre.end();i++)
{
	cout<<*i<<" ";
}
cout<<endl;
	
//	print the inorder
cout<<"inorder traversal->";
for(auto  i=ino.begin();i!=ino.end();i++)
{
	cout<<*i<<" ";
}
cout<<endl;
	
//	print the postorder
cout<<"postorder traversal->";
for(auto i=post.begin();i!=post.end();i++)
{
	cout<<*i<<" ";
}
cout<<endl;
	return 0;
}
