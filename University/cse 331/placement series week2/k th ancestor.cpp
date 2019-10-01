#include<bits/stdc++.h>
using namespace std;
int arr[1000000]={0};
struct node{
	int data;
	node *left,*right;
};
node *newnode(int data){
	node *newNode = new node;
	newNode->data = data;
	newNode->left=NULL;newNode->right=NULL;
	return newNode;
}

void preOrder(node *root){
	if(root==NULL)
		return ;
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}

void kthAncestor(node *root, int k){
	//a[root->data]=-1;
	queue<node *>q;
	vector<int> v(10,0);
	q.push(root);
	//int flag=0;
	if(root==NULL)
		return ;
	while(!q.empty()){
			node *temp = q.front();
			arr[temp->data]=-1;
		if(root->left!=NULL){
			kthAncestor(root->left,k);
		}
		if(root->right!=NULL){
			kthAncestor(root->right,k);	
		}
		q.pop();
	}	
	//finding kth ancestor;
	while(arr[k]!=0){
		cout<<"arr[k] = "<<arr[k]<<"\n";
		v.push_back(arr[k]);
		k = arr[k];
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
int main(){
	node *root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	root->right->left = newnode(6);
	root->left->left->left = newnode(7);
	cout<<"Preoder traversal :\n";
	preOrder(root);
	int k;
	cin>>k;
	kthAncestor(root,k);	
}
