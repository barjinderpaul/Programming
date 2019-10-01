#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left,*right;
};

node *newNode(int data){
	node *newnode = new node;
	newnode->data = data;
	newnode->left = newnode->right = NULL;
	return newnode;
}
void inorder(node *root){
	if(!root)
		return;
	inorder(root->left);
	if(!root->left && !root->right)
		cout<<root->data;
	inorder(root->right);
}
int main(){
	node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	inorder(root);
	
}
