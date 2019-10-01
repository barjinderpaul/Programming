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

void insert(node **root,int data){
	node *curr = newNode(data);
	queue<node *>q;
	if(*root==NULL){
		*root = curr;
		return ;
	}
	q.push(*root);
	while(!q.empty()){
		node *temp = q.front();
		//cout<<"temp= "<<temp->data<<"\n";
		q.pop();
		if(!temp->left){
			temp->left = curr;
			return ;
		}else{
			q.push(temp->left);
		}
		if(!temp->right){
			temp->right = curr;
			return ;
		}
		else
			q.push(temp->right);
	}
}

void levelorder(node *root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while(q.size()>1){
		node *curr = q.front();
		q.pop();
		if(curr==NULL){
			cout<<"\n";
			q.push(NULL);
		}else{
		cout<<curr->data<<" ";
		if(curr->left)
			q.push(curr->left);
		if(curr->right)
			q.push(curr->right);
		}
	}
}
int size(node *root){
	if(root==NULL)
		return 0;
	else return size(root->left)+1+size(root->right);
}
int height(node *root){
	int h = 0;
	if(root==NULL)
		return 0;
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while(q.size()>1){
		node *curr = q.front();
		q.pop();
		if(curr==NULL){
			h++;
			q.push(NULL);
		}else{
		//cout<<curr->data<<" ";
		if(curr->left)
			q.push(curr->left);
		if(curr->right)
			q.push(curr->right);
		}
	}
	return h+1;
}
int main(){
	node *root = NULL;
	int n,data;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>data;
		insert(&root,data);
		
	}
	cout<<"Levelorder = \n";
	levelorder(root);
	cout<<"\nSize of Binary Tree = "<<size(root)<<"\n";
	cout<<"Height of Binary Tree = "<<height(root)<<"\n";
	
	
}
