#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};
//check with queue:
node* newNode(int data){
	node *newnode = new node;
	newnode->data = data;
	newnode->left = newnode->right = NULL;
	return newnode;
}
void insertion(node *root,int data){
	queue<node*>q;
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
			curr->right = newNode(data);
			break;
		}else{
			q.push(curr->right);
		}
	}
}
void inorder(node *root){
	if(root == NULL)
		return;
	inorder(root->left);
	cout<<root->data<< " ";
	inorder(root->right);
}
int main(){
	int n,val;
	node *root = new node;
	insertion(root,20);	
	insertion(root,20);	
	insertion(root,20);	
	insertion(root,20);	
			
}
