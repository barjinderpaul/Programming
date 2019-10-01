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

void deleteThis(node *root, node *todel){
	queue<node *> q;
	q.push(root);
	while(!q.empty()){
		node *curr = q.front();
		q.pop();
		if(curr->left){
			if(curr->left == todel){
				curr->left = NULL;
				delete todel;
				return;
			}
			else
				q.push(curr->left);
		}
		if(curr->right){
			if(curr->right==todel){
				curr->right = NULL;
				delete todel;
				return;
			}
			else
				q.push(curr->right);
		}
			
	}
}
void preorder(node *root){
	if(root==NULL)
		return ;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void deepestRight(node *root,int data){
	queue<node *>q;
	q.push(root);
	node *target = NULL,*curr = NULL;
	while(!q.empty()){
		curr = q.front();
		q.pop();
		if(curr->data == data)
			target = curr;
		if(curr->left)
			q.push(curr->left);
		if(curr->right)
			q.push(curr->right);
			
	}
	target->data = curr->data;
	deleteThis(root,curr);
}
int main(){
node *root =  newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left =  newnode(4);
	root->left->right =  newnode(5);
	root->right->left =  newnode(6);
	root->right->right =  newnode(7);
	cout<<"Preorder traversal \n";
	preorder(root);
	deepestRight(root,3);
	cout<<"\n new preorder \n";
	preorder(root);
}
