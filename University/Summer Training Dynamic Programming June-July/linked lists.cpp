#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

void insert(node **head, int val){
    node *temp = new node;
    temp->data = val;
    temp->next = NULL;
    if(*head==NULL){
        temp->next = *head;
        *head = temp;
        return;
    }
    else{
        node *curr = *head;
        while(curr->next!=NULL)
            curr = curr->next;
        curr->next = temp;
                }
}

void display(node *head){
    cout<<"display\n";
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<< " ";
        temp=temp->next;
    }
}

int main(){
    int n,val;
    node *head = NULL;
    cin>>n;

    for(int i=0;i<n;i++)
       cin>>val, insert(&head,val);
    cout<<"finished insertion\n";
    display(head);

}
