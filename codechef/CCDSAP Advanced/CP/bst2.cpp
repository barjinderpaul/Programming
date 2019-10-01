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
    if(*root==NULL)
        *root = temp;
    else{
        if( (*root)->data < data )
            insert( &(*root)->right,data );
        else if( (*root)->data > data )
            insert( &(*root)->left,data );
    }
}

void inorder(node *root){
    if(!root)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

bool searchKey(node *root,int key){
    if(!root)
        return 0;
    if(root->data == key)
        return 1;
    if(root->data < key)
        searchKey(root->right,key);
    else if(root->data > key)
        searchKey(root->left,key);
    return 0;
}

int main(){
    node *root=NULL;
    int n,val,key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert(&root,val);
    }
    inorder(root);
    cout<<"\nenter value to search \n";
    cin>>key;
    if(searchKey(root,key))
        cout<<"Key present\n";
    else
        cout<<"Not present";
}
