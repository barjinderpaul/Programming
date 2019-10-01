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
    node *temp = newNode(data);
    if(*root==NULL){
        *root = temp;
        return;
    }
    if( (*root)->data > data )
        insert( &(*root)->left,data );
    else if( (*root)->data < data )
        insert( &(*root)->right,data );

}

void inorder(node *root){
    if(!root)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int minElement(node *root){
    if(!root)
        return -1 ;
    if(root->left==NULL)
        return root->data;
    minElement(root->left);
    //minElement(root->right);
}

int main(){
    int n,data;
    node *root=NULL;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        insert(&root,data);
    }
    inorder(root);
    cout<<"\n";
    cout<<minElement(root);
}
