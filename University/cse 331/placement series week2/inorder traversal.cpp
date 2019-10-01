#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left,*right;
};

node* newnode(int data){
	node *nodee = new node;
	nodee->data=data;
	nodee->left = nodee->right = NULL;
	return nodee;
}

void inorder(node *root){
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main(){
	node *root =  newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left =  newnode(4);
	root->left->right =  newnode(5);
	root->right->left =  newnode(6);
	root->right->right =  newnode(7);
	cout<<"Inorder traversal \n";
	inorder(root);
}
