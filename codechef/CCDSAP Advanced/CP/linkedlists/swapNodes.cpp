#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

void insert(int data, node **head){
    node *temp = new node;
    temp->data = data;
    temp->next = NULL;
    if(*head==NULL){
        *head = temp;
        return;
    }
    node *c = *head;
    while(c->next!=NULL)
        c=c->next;
    c->next = temp;
    c = temp;
}

void display(node *head){
    if(head==NULL)
        return;
    node *c = head;
    while(c!=NULL){
        cout<<c->data<<" ";
        c = c->next;
    }


}

int main(){
    int n,val;
    node *head = NULL;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert(val,&head);
    }
    display(head);
}