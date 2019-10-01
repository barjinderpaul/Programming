#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left,*right;
};

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

void isBalanced(node *r){
    if(r==NULL)
        return;
    int lh = height(r->left);
    int rh = height(r->right);
    if( (abs(lh-rh)<=1) && isBalanced(r->left) && isBalanced(r->right))
        return 1;
    else
        return 0;
}

void preorder(node *root){
    if(!root)
        return;
    cout<<root->data<<" " ;
    preorder(root->left);
    preorder(root->right);
}
int main(){
    node *root=NULL;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert(&root,val);
    }
    if(areSame(root,root2)){
        cout<<"same:;";
    }
    else
        cout<<"no";
}
xxxxxh
