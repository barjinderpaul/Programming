#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left,*right;
};
node *newnode(int data){
	node *newNode = new node;
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}
void insert(node **root,int data){
	node *toAdd = newnode(data);
	if(root==NULL){
		root = toAdd;
		return;
	}
	if(root->data<data){
		insert(root->left,data);
	}
	else if(root->data>data){
		insert(&root->right,data);
	}
	if(!root->left){
		root->left = toAdd;
	}
	if(!root->right){
		root->right = toAdd;
	}	
}
void inorder(node *root){
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int main(){
	node *root=NULL;
	int n,val;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>val;
		insert(&root,val);
	}
	inorder(root);
}
