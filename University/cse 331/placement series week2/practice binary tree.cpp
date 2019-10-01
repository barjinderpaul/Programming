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
	node *toAdd = newNode(data);
	if(!*root){
		*root = toAdd;
		return;
	}
	queue<node *>q;
	q.push(*root);
	while(!q.empty()){
		node *temp = q.front();
		q.pop();
		if(!temp->left){
			temp->left = toAdd;
			return;
		}else{
			q.push(temp->left);
		}
		if(!temp->right){
			temp->right = toAdd;
			return;
		}else{
			q.push(temp->right);
		}
	}
}
void preorder(node *root){
	if(!root)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void bfs(node *root,map<int,int>&parent){
    if(!root)
        return ;
    parent[root->data]=-1;
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        node *curr = q.front();
        q.pop();
        if(curr->left){
            parent[curr->left->data]=curr->data;
            q.push(curr->left);
        }
        if(curr->right){
            parent[curr->right->data]=curr->data;
            q.push(curr->right);
        }
    }
}

int kthAncestor(node *root, int k, int node)
{
    map<int,int>parent;
    bfs(root,parent);
    cout<<parent.size()<<" ";
   		int c=0;
    while(node!=-1){
        node = parent[node];
        c++;
        if(c==k)
            break;
    }
    return node;
}

bool checkSibling(node *root,int k1,int k2){
	if(!root)
		return false;
	if(root->left && root->right){
		if( (root->left->data == k1 && root->right->data == k2) || (root->right->data==k2 && root->left->data==k1) )
			return 1;
	}
	if(root->left!=NULL)
		return checkSibling(root->left,k1,k2);
	if(root->right!=NULL)
		return checkSibling(root->right,k1,k2);
}
int main(){
	node *root = NULL;
	int n,val,toDelete;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>val;
		insert(&root,val);
	}
	preorder(root);
	cin>>toDelete;
	//deleteNode(root,toDelete);
	cout<<kthAncestor(root,1,3);
	cout<<"\nchecking sibling \n";
	cout<<checkSibling(root,4,5)<<"\n";
	cout<<checkSibling(root,4,3)<<"\n";
	cout<<checkSibling(root,1,5)<<"\n";
	cout<<checkSibling(root,2,3)<<"\n";

}
