#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
}*head=NULL;

void insert(int data){
    node *temp = new node;
    temp->data = data;
    temp->next = NULL;
    if(head==NULL)
        head = temp;
    else{
        node *t = head;
        while(t->next!=NULL)
            t=t->next;
        t->next = temp;
        t = temp;
    }
}

int countLength(){
    node *t = head;
    int c=0;
    while(t!=NULL){
        t=t->next;
        c++;
    }
    return c;
}

void display(){
    node *t = head;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}

int getmid(){
    if(head==NULL)
        return 0;
    node *f = head;
    node *s = head;
    while(f->next!=NULL && f->next->next!=NULL){
            //while(f!=NULL && f->next!=NULL)
        f=f->next->next;
        s=s->next;
    }
    return s->data;
}

void del(int k){
    node *f = head;
    node *s = head;
    while(k-- && f->next!=NULL){
        f=f->next;
    }
    if(k>0){
        cout<<-1<<"\n";
        return;
    }
    if(f->next==NULL){
        head = head->next;
        return;
    }
    while(f->next!=NULL){
        f=f->next;
        s=s->next;
    }
    //cout<<"f->Data  = "<<f->data<<" " <<s->data;
    s->next = s->next->next;

}
void removeDups(){
    node *t1 = head;
    node *t2 = head;
    t2 = t2->next;
    while(t1!=NULL){
        while(t2!=NULL && t1->data == t2->data)
            t2=t2->next;
        t1->next = t2;
        t1 = t2;
    }
}
int main(){
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert(val);
    }
    removeDups();
    display();
}
