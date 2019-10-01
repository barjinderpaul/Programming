#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left,*right;
};
map<node*,node *>m;
node *createNode(int data){
    node *newnode = new node;
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}
void insert(node **root, int data){
    node *toAdd = createNode(data);
    if(*root==NULL){
        *root = toAdd;
        return;
    }
    queue<node *>q;
    q.push(*root);
    while(!q.empty()){
        node *t = q.front();
        q.pop();
        if(!t->left){
            t->left = toAdd;
            return;
        }
        if(!t->right){
            t->right = toAdd;
            return;
        }
        q.push(t->left);
        q.push(t->right);
    }
}

int height(node *r){
    if(!r)
        return 0;
    return 1+max(height(r->left),height(r->right));
}

void preorder(node *root){
    if(!root)
        return;
    cout<<root->data<<" " ;
    preorder(root->left);
    preorder(root->right);
}

void print(node *root){
    if(!root){

    }
    else{
}
}

void bfs(node *root){
    if(!root)
        return;
    queue<node*>q;
}
int main(){
    node *root=NULL;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert(&root,val);
    }
    //print(root);
    bfs(root);
}
