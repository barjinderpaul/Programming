#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left,*right;
};
node *newNode(int data){
	node* newnode = new node;
	newnode->data  = data;
	newnode->left=newnode->right=NULL;
	return newnode;
}
void preorder(node *root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void inorder(node *root){
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
	
}

void postorder(node *root){
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

void levelorder(node *root){
	queue<node*>q;
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

void levelorderline(node *root){
	queue<node *>q;
	q.push(root);
	q.push(NULL);
	while(q.size()>1){
		node *curr = q.front();
		if(curr==NULL){
			cout<<"\n";
			q.pop();
			q.push(NULL);
		}
		else{
			cout<<curr->data<<" ";
				if(curr->left)
				q.push(curr->left);
			if(curr->right)
				q.push(curr->right);
			q.pop(); 
		}
		
	}
}
int height(node *root){
	if(root==NULL)
		return 0;
	int lheight = height(root->left);
	int rheight = height(root->right);
	if(lheight>rheight)
		return lheight+1;
	else
		return rheight+1;
}
int main(){
	/*
	    1
	   / \
	  2	  3
	 / \
	4 	5  
	
*/
	
	node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
//	root->left->right->left = newNode(5);
	
	cout<<"Preorder : ";		
	preorder(root);
	cout<<"\nInorder : ";
	inorder(root);
	cout<<"\nPostorder : ";
	postorder(root);
	cout<<"\nLevelorder : ";
	levelorder(root);
	cout<<"\nLevelOrder in line \n";
	levelorderline(root);
	cout<<"\n height of binary tree : ";
	cout<<height(root); 
		
}

