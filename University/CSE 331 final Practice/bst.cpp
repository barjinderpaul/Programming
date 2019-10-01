#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef int64_t lli;

struct node{
    lli data;
    node *left,*right;
};

node *newnode(lli data){
    node *newNode = new node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void insert(node **root, lli data){
    node *toAdd = newnode(data);
    if(!(*root)){
        *root = toAdd;
        return;
    }
    else{
        if((*root)->data > data){
            insert( &(*root)->left,data );
        }
        else
            insert( &(*root)->right,data );
    }
}

void lca(node *root, lli first, lli second){
    while(root!=NULL){
        if(root->data > first && root->data > second)
            root = root->left;
        else if(root->data < first && root->data < second)
            root = root->right;
        else
            break;
    }
    cout<<root->data;
}

void inorder(node *root){
    if(!root)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

node* search(node* root, int key) {
    if (root == NULL || root->data == key)
       return root;
    if (root->data < key)
       return search(root->right, key);
    return search(root->left, key);
}

node * minValue(struct node* node) {
  struct node* current = node;
  while (current->left != NULL) {
    current = current->left;
  }
  return current;
}

node * inOrderSuccessor(struct node *root, struct node *n) {
    if( n->right != NULL )
        return minValue(n->right);
    struct node *succ = NULL;
    while (root != NULL) {
        if (n->data < root->data)
            succ = root,root = root->left;
        else if (n->data > root->data)
            root = root->right;
        else
           break;
    }
    return succ;
}

int main(){
    fast;
    node *root=NULL;
    lli n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert(&root,val);
    }
    inorder(root);

    //lca of two nodes;
    lli first,second;
    cin>>first>>second;
    cout<<"\n";
    lca(root,first,second);
    cout<<"\n";


    //inorder successor;
    //search key
    lli succ;
    cin>>succ;
    node * succNode = search(root,succ);
    node *retNode;
    retNode = inOrderSuccessor(root,succNode);
    cout<<retNode->data;
}
