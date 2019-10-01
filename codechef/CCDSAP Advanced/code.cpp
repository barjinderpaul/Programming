#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left,*right;
}

node *newnode(int data){
    node *newNode = new node;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void path(node *root){
    queue<node *>q;
    q.push(root);
    while(!q.empty()){

    }
}

int main(){
    node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(7);
    root->left->left->left = newnode(6);
    path(root);

}
