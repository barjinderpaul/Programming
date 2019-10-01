#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left,*right;
};

node *newnode(int data){
    node *newNode = new node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void insert(node **root,int data){
    node *toAdd = newnode(data);
    if(*root==NULL){
        *root = toAdd;
        return;
    }
    queue<node *>q;
    q.push(*root);
    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        if(temp->left == NULL){
            temp->left = toAdd;
            return;
        }
        if(temp->right == NULL){
            temp->right = toAdd;
            return;
        }
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}

void bfs(node *root){
    if(!root)
        return;
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        node *temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left)  q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
}

void preorder(node *root){
    if(!root)
        return;
    cout<<root->data<< " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root){
    if(!root)
        return;
    inorder(root->left);
    cout<<root->data << " ";
    inorder(root->right);
}

void postorder(node *root){
    if(!root)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node *root = NULL;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert(&root,val);
    }
    cout<<"BFS\n";
    bfs(root);
    cout<<"\nPreorder\n";
    preorder(root);
    cout<<"\nInorder\n";
    inorder(root);
    cout<<"\nPostorder\n";
    postorder(root);

}
