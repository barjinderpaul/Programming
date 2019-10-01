#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left, *right;
};

queue<node *>q;

node *newNode(int data){
    node *newnode = new node;
    newnode ->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

void insert(node **root, int data){
    node *toAdd = newNode(data);
    if(!(*root)){
        *root = toAdd;
        q.push(toAdd);
        return;
    }
    while(!q.empty()){
        node *temp = q.front();
       //q.pop();
        if(!temp->left){
            temp->left = toAdd;
            q.push(toAdd);
            break;
        }
        else if(!temp->right){
            temp->right = toAdd;
            q.push(toAdd);
            break;
        }
        else
            q.pop();

    }
}

void preorder(node *root){
    if(!root)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    int n,val;
    cin>>n;
    node *root = NULL;
    for(int i=0;i<n;i++){
        cin>>val;
        insert(&root,val);
    }
    preorder(root);
}
