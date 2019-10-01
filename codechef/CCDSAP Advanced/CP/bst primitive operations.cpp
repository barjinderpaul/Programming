#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node *newnode(int data){
    node *temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void insert(node **root,int data){
    node *toAdd = newnode(data);
    if(*root==NULL){
        *root = toAdd;
        return;
    }
    if ( (*root)->data > data )
        insert( &(*root)->left,data );
    else if( (*root)->data  < data )
        insert( &(*root)->right,data  );
}

void inorder(node *root){
    if(!root)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

bool search(node *root,int key){
    if(!root)
        return 0;
    if(root->data == key)
        return 1;
    if(root->data > key)
        search(root->left,key);
    else if(root->data < key)
        search(root->right,key);
}

void deleteLeafs(node **root){
    if(*root==NULL)
        return;
    if( (*root)->left==NULL && (*root)->right==NULL){
        *root = NULL;
        delete(root);
        cout<<"\nTree now empty\n";
        return;
    }
    queue<node *>q;
    q.push(*root);
    while(!q.empty()){
        node *f = q.front();
        q.pop();
        if(f->left!=NULL){
            if(f->left->left==NULL && f->left->right==NULL){
                node *temp = f->left;
                delete(temp);
                f->left = NULL;
            }
        }
        if(f->right!=NULL){
            if(f->right->left==NULL && f->right->right==NULL ){
                node *temp = f->right;
                delete(temp);
                f->right = NULL;
            }
        }
        if(f->left!=NULL){
            q.push(f->left);
        }
        if(f->right!=NULL){
            q.push(f->right);
        }
    }

}

int main(){
    int n;
    cin>>n;
    node *root=NULL;
    int val;
    for(int i=0;i<n;i++){
        cin>>val;
        insert(&root,val);
    }
    inorder(root);
    /*int key;
    cin>>key;
    if(search(root,key))
        cout<<"present";
    else
        cout<<"not present";
        */
    deleteLeafs(&root);
    cout<<"\n";
    inorder(root);
}
