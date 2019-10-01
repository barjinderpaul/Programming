#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left,*right;
};
node *newNode(int data){
	node *newnode = new node;
	newnode->data = data;
	newnode->left=newnode->right=NULL;
	return newnode;
}

void insert(node **root,int data){
	node *curr = newNode(data);
	if(*root==NULL){
		*root = curr;
		return ;
	}
	queue<node *>q;
	q.push(*root);
	while(!q.empty()){
		node *temp = q.front();
		q.pop();
		if(!temp->left){
			temp->left = curr;
			return ; 
		}else{
			q.push(temp->left);
		}
		if(!temp->right){
			temp->right=curr;
			return ;
		}else{
			q.push(temp->right);
		}
	}
}

void bfs(node *root){
	if(root==NULL)
		return ;
	queue<node *>q;
	q.push(root);
	while(!q.empty()){
		node *temp = q.front();
		q.pop();
		cout<<temp->data<<" ";
		if(temp->left)
			q.push(temp->left);
		if(temp->right)
			q.push(temp->right);
	}
}

bool search(node*root,int key){
	if(root==NULL)
		return false;
	queue<node *>q;
	q.push(root);
	while(!q.empty()){
		node *temp = q.front();
		q.pop();
		if(temp->data==key){
			return 1;
		}
		if(temp->left)
			q.push(temp->left);
		if(temp->right)
			q.push(temp->right);
	}
	return 0;
}

void deleteDeepest(node* root,node *deepestNode){
	queue<node *>q;
	q.push(root);
	while(!q.empty()){
		node *temp = q.front();
		q.pop();
		if(temp->right){
			if(temp->right==deepestNode){
				temp->right=NULL;
				delete(deepestNode);
				return;
			}
			else
				q.push(temp->right);
		}
		if(temp->left){
			if(temp->left==deepestNode){
				temp->left=NULL;
				delete(deepestNode);
				return;
			}
			else
				q.push(temp->left);
		}
	}
}
bool deleteNode(node **root,int data){
	if(*root==NULL)
		return 0;
	node *toDelete=NULL,*deepestNode;
	queue<node*>q;
	q.push(*root);
	while(!q.empty()){
		deepestNode = q.front();
		q.pop();
		if(deepestNode->data==data){
			toDelete = deepestNode;
		}
		if(deepestNode->left)
			q.push(deepestNode->left);
		if(deepestNode->right)
			q.push(deepestNode->right);
	}
	if(toDelete==NULL)
		return 0;
	//cout<<"todelete->data, deepestNode->data"<<toDelete->data<<" "<<deepestNode->data<<"\n";
	swap(toDelete->data,deepestNode->data);
	deleteDeepest(*root,deepestNode);
	return 1;
	
}
int main(){
	node *root=NULL;
	int n,val;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>val;
		insert(&root,val);
	}
	cout<<"level order \n";
	bfs(root);
	cout<<"\n";
	int searchkey,delkey;
	cin>>searchkey;
	if(search(root,searchkey))
		cout<<"Found\n";
	else
		cout<<"Not found\n";
	cout<<"enter element to delete\n";
	cin>>delkey;
	if(deleteNode(&root,delkey)){
		cout<<"Element deleted\n";
		bfs(root);
	}
	else
		cout<<"element not found\n";
}
