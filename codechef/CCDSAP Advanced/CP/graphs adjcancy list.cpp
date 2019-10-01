
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
}*head[5];

void addedge(int u,int v){
    node *newnode = new node;
    newnode->next = NULL;
    newnode->data = v;
    if(head[u]==NULL)
        head[u] = newnode;
    else{
        node *curr = head[u];
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next = newnode;
    }
    node *anode = new node;
    anode->data = u;
    anode->next = NULL;
    if(head[v]==NULL)
        head[v] = anode;
    else{
        node *curr = head[v];
        while(curr->next!=NULL)
            curr = curr->next;
        curr->next = anode;
    }

}

void print(){
    for(int i=0;i<5;i++){
        cout<<"Vertex = "<<i+1<<"\n";
        node *curr = head[i];
        while(curr!= NULL){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
        cout<<"\n";
    }
}

int main(){
    addedge(0,1);
    addedge(0,2);
    addedge(1,3);
    addedge(2,3);
    addedge(2,4);
    addedge(3,4);
    print();

}
