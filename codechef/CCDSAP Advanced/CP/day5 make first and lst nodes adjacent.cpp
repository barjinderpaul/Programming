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

void reversee(node **n,node *slow){
    if(*n==NULL)
        return;
    node *prev=slow,*curr,*next;
    curr = *n;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *n = prev;
}

void moveAdjacent(){
    node *slow=head;
    node *fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    cout<<"slow->data"<<slow->data<<"\n";
    node *slow2 = slow;
    reversee(&slow,slow->next);
    node *temp,*temp2=fast,*curr = head;
    cout<<"slow ->data = "<<slow->data;
    while(curr!=slow2 && fast!=slow2){
        cout<<"\ncurr->data  = "<<curr->data<<"\n";
        cout<<"fast->Data "<<fast->data;
        temp = curr->next;
        temp2 = fast->next;
        curr->next = fast;
        fast->next = temp;
        curr = temp;
        fast=temp2;
    }
    slow->next=NULL;

}

int main(){
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert(val);

    }
    display(head);
    cout<<"\n";
    moveAdjacent();
    display(head);


}

