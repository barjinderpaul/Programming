#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left,*right;
}*root=NULL;
node* nvaNode(int data){
	node *newNode = new node;
	newNode->data = data;
	newNode->left=newNode->right=NULL;
	return newNode;
}
void insert(int data){
	cout<<"in insert";
	if(root==NULL){
		cout<<"in if";
		root->left = nvaNode(data);
		return;
	}
	queue<node*>q;
	q.push(root);
	while(!q.empty()){
		node *curr = q.front();
		q.pop();
		if(!curr->left){
			curr->left = nvaNode(data);
			return;
		}
		else
			q.push(curr->left);
		if(!curr->right){
			curr->right = nvaNode(data);
			return;
		}
		else
			q.push(curr->right);
		
	}
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
int main(){
	int n;
	cout<<"Enter number of elements \n";
	cin>>n;
	int val;
	//node *root = new node;
	for(int i=0;i<n;i++){
		cin>>val;
		insert(val);
	}
	levelorder(root);
}
