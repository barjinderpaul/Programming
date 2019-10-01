#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left, *right;
};

node *newnode(int data){
    node *newNode = new node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void insert(node **root, int data){
    node *toAdd = newnode(data);
    if(*root==NULL){
        *root = toAdd;
        return;
    }
    if( (*root)->data > data){
        insert( &(*root)->left,data );
    }
    else if( (*root)->data < data )
        insert( &(*root)->right,data );

}

void bfs(node *root){
    if(!root)
        return;
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        cout<<temp->data <<" ";
        if(temp->left!=NULL)
            q.push(temp->left);
        if(temp->right!=NULL)
            q.push(temp->right);
    }
}

int main(){
    node *root = NULL;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>val,insert(&root,val);
    cout<<"BFS\n";
    bfs(root);
}
