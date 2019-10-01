#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
};
queue<node *>q;

node *newNode(int data){
    node *temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void insert(node **root, int val ){
    cout<<"inserting - "<<val<<"\n";
    node *toAdd = newNode(val);
    if(*root==NULL && (q.empty())){
      *root = toAdd;
      q.push(toAdd);
    }
    else{
        while(!q.empty()){
            node *f = q.front();
            //cout<<"q.front() = "<<f->data<<"\n";
            if(f->left == NULL){
                f->left = toAdd;
                q.push(toAdd);
                break;
            }
            else if(f->right==NULL){
                f->right=toAdd;
                q.push(toAdd);
                break;
            }
            else{
                q.pop();
            }
        }
    }

}

void preorder(node *root){
    if(!root)
        return;
    cout<<root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    int n,val;
    cin>>n;
    node *root=NULL;
    for(int i=0;i<n;i++){
        cin>>val;
        insert(&root,val);
    }
  //  cout<<"q.size () + "<<q.size()<<"\n";
    preorder(root);

}
