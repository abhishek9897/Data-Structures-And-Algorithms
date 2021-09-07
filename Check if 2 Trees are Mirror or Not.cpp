
#include <bits/stdc++.h>
using namespace std;

struct  node
{
	
	char data;
	node* left;
	node* right;
};
node* newNode(char data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}

bool areMirror(struct node* a,struct node* b)
{
	if(a==NULL and b==NULL)
	{
		return true;
	}
	if((a==NULL and b!=NULL) or(b==NULL and a!=NULL))
	{
		return false;
	}
	
	
	
	return a->data==b->data and areMirror(a->left,b->right) and areMirror(a->right,b->left);
	
}

int main()
{

     node *a = newNode(1);
    node *b = newNode(1);
    a->left = newNode(2);
    a->right = newNode(3);
    a->left->left  = newNode(4);
    a->left->right = newNode(5);
 
    b->left = newNode(3);
    b->right = newNode(2);
    b->right->left = newNode(5);
    b->right->right = newNode(4);
 
    if(areMirror(a, b)){
    	cout<<"2 Trees are mirror";
	}
	else{
		cout<<"not mirrors";
	}
	
}

