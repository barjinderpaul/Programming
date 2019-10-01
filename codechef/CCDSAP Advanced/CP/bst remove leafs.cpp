#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node *newNode(int data){
    node *newnode = new node;
    newnode->left = newnode->right = NULL;
    return newnode;
}

void insert(node **root,int data){
    node *toAdd = newNode(data);
    if(*root==NULL){
        *root = toAdd;
        return;
    }
    if ( (*root)->data > data )
        insert( &(*root)->left,data );
    else if( (*root)->data  < data )
        insert( &(*root)->right,data  );
}

void inorder(node *root){
    if(!root)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    node *root=NULL;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert(&root,val);
    }
    inorder(root);

}
