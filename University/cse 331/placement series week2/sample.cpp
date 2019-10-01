#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left,*right;
};

node *newnode(int data){
	node *newNode = new node;
	newNode->data = data;
	newNode->left=newNode->right=NULL;
	return newNode;
}

void levelOrder(node *root){
	if(root==NULL);
		return;
	queue<node *>q;
	q.push(root);
	while(!q.empty()){
		node *curr = q.front();
		q.pop();
		cout<<curr->data<<" ";
		if(curr->left)
			q.push(curr->left);
		if(curr->right)
			q.push(curr->right);
		
	}

}

int main(){
	node *root = newnode(1);
	root->left= newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	root->right->left = newnode(6);
	root->left->left->left = newnode(7);
	levelOrder(root);
	
}
