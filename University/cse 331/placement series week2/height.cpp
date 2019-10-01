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


void preorder(node *root,int &count){
	if(root==NULL)
		return ;
	preorder(root->left,count);
	count+=1;
	preorder(root->right,count);

}




int main(){
node *root =  newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left =  newnode(4);
	root->left->right =  newnode(5);
	root->right->left =  newnode(6);
	root->right->right =  newnode(7);
	//max height;
	int count=0;
	preorder(root,count);
	cout<<count<<" ";
}
