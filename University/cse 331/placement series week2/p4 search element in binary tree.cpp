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
/*
int search(node* root,int data){
	//bfs;
	queue<node *> q;
	q.push(root);
	while(!q.empty()){
		node *curr = q.front();
		q.pop();
		if(curr->data==data)
			return 1;
		if(curr->left)
			q.push(curr->left);
		if(curr->right)
			q.push(curr->right);
	}
	return 0;
}
*/

//recursive way dfs;
int search(node *root,int data){
	int temp;
	if(root==NULL)
		return 0;
	else{
		if(root->data==data)
			return 1;
		else{
			//cout<<"before root = "<<root->data<<" temp = "<<temp<<"\n";
			temp = search(root->left,data);
			//cout<<"root = "<<root->data<<" temp = "<<temp<<"\n";
			if(temp!=0)
				return temp;	
			else
				return search(root->right,data);
		}
	}
return 0;
	
	
}
int main(){
	node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	int data;
	cin>>data;
	if(search(root,data))
		cout<<"Element exists in binary tree\n";
	else
		cout<<"Element does not exists in binary tree\n";
}
