#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
}*head=NULL;

void insert(int val){
    node *temp = new node;
    temp->data = val;
    temp->next = NULL;
    if(head==NULL)
        head=temp;
    else{
        node *c = head;
        while(c->next!=NULL)
            c=c->next;
        c->next = temp;
        c = temp;
        temp->next = NULL;
    }
    //cout<<"inserted\n";

}
void display(node *head){
    node *c = head;
    if(head==NULL)
        return;
    while(c!=NULL){
        cout<<c->data<<" ";
        c=c->next;
    }
    return;
}

void reversee(){
    if(head==NULL)
        return;
    node *prev,*curr,*next;
    curr = head;
    while(curr!=NULL){
        next = curr->next;
        prev = curr;
        curr = curr->next;
    }
    head = prev;
}

int main(){
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert(val);

    }
    display(head);
    reversee();
    display(head);
}
