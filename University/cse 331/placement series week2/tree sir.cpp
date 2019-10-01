#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left, *right;
};
node* newNode(int data){
	node *newnode = new node;
	newnode->data = data;
	newnode->left = newnode->right = NULL;
	return newnode;
}

void inorder(node *root){
	if(root == NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void preorder(node *root){
	if(root == NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(node *root){
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

void levelorder(int data){
	queue<node*> q;
	if(data == NULL)
		return ;
	q.push(root);
	while(!q.empty()){
	node *curr = q.front();
		q.pop();
		if(curr->left = NULL){
			curr->left = newNode(data);
			break;
		}
		else{
			q.push(curr->left);
		}
		if(curr->right = NULL){
			curr->rigt = newNOde(data);
			break;
		}else{
			q.push(curr->right);
		}	}
}
int main(){
	node *root = newNode(10);
	root->left = newNode(20);
	root->right = newNode(30);
	root->left->left = newNode(40);
	root->left->right = newNode(50);
	cout<<"in order "<<"\n";	
	inorder(root);
	cout<<" \nPreorder \n";
	preorder(root);
	cout<<"\nPostorder \n" ;
	postorder(root);
	cout<<"\nLevelorder \n";
	levelorder(root);
	
			
}
