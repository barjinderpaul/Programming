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
int maxElement(node *root){
	//iterative way bfs
	int maxx=-1;
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node *curr = q.front();
		q.pop();
		if(curr->data>maxx)
			maxx=curr->data;
		if(curr->left)
			q.push(curr->left);
		if(curr->right)
			q.push(curr->right);
	}
	return maxx;
		
}
int recursiveMax(node *root){
	int root_val,left,right,maxx=-1;
	if(root!=NULL){
		root_val = root->data;
		//cout<<"Root_val = "<<root_val<<"\n";
		left = recursiveMax(root->left);
		//cout<<"left = "<<left<<"\n";
		right = recursiveMax(root->right);
		//cout<<"right = "<<right<<"\n";
		//cout<<"max = "<<maxx<<"\n";
		if(left>right)
			maxx = left;
		else maxx=right;
		if(root_val>maxx)
			maxx=root_val;
	}
	return maxx;	
}
int main(){
	node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	
	cout<<"Iterative Max element  = "<<maxElement(root)<<"\n";
	cout<<"Recursive Max element = "<<recursiveMax(root);
}
