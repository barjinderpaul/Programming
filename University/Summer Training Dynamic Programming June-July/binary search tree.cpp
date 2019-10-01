#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node *newnode(int val){
    node *newNode = new node;
    newNode->data = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void insert(node **root, int val){
    node *toAdd = newnode(val);
    if(*root==NULL){
        *root = toAdd;
        return;
    }
    if((*root)->data < val){
        insert(&(*root)->right,val);
    }
    else
        insert(&(*root)->left,val);
}

void inorder(node *root){
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void search(node *root, int key,int &flag){
    if(root==NULL)
        return;
    if(root->data==key){
        flag=1;
        return;
    }
    if(root->data < key)
        search(root->right,key,flag);
    else
        search(root->left,key,flag);

}

int main(){
    node *root = NULL;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>val,insert(&root,val);
    inorder(root);

    int key,flag=0;
    cin>>key;
    search(root,key,flag);
    if(flag)
        cout<<"\mElement present\n";
    else
        cout<<"\mNot present\n";

    int toDelete;
    cin>>toDelete;

    delete(&root, toDelete);


}
