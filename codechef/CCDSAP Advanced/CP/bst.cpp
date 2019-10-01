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


int insert(node **root,int data){
    node *temp = newNode(data);
    if(*root==NULL)
        *root = temp;
    else{
        if( (*root)->data>data)
            insert(&(*root)->left,data);
        else if( (*root)->data<data)
            insert(&(*root)->right,data);

    }
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
