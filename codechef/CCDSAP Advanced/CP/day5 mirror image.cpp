
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

int areSame(node *root){
    if(r1 == NULL && r2 == NULL)
    if(r1!=NULL && r2==NULL)
        return 1;
    if(r1==NULL && r2!=NULL)
        return 0;
    if(r1->data!=r2->data)
        return 0;
    return areSame(r1->left,r2->left)&areSame(r1->right,r2->right);

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
    if(isMirror(root)){
        cout<<"same:;";
    }
    else
        cout<<"no";
}
