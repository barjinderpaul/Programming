#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left,*right;
}*root=NULL;

void insert(int val){
	node *temp = new node();
	temp->data = val;
	temp->left = NULL;
	temp->right = NULL:
	if(root==NULL){
		root = temp;
	}
	else if(root->left==NULL){
		root->left = temp;
		root->left->left = NULL;
		root->left>right = NULL;
	}
	else if(root->right==NULL){
		root->right = temp;
		root->right->left = NULL;
		root->right->right = NULL;
	}
}

void traverse(){
	if(root==NULL){
		cout<<"Tree is empty ";
		break;
	}
	node *temp = root;
	while(temp->left!=NULL || temp->right!=NULL){
		cout<<temp->data;
		if(temp->right!=NULL)
			temp = temp->left;
		else
			temp-
	}
		
}
int main(){
	int n,val;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>val;
		insert(val);
	}
	traverse();
}
