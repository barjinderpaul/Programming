#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
}*head=NULL,*head2=NULL,*head3=NULL;

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
void insert2(int val){
    node *temp = new node;
    temp->data = val;
    temp->next = NULL;
    if(head2==NULL)
        head2 = temp;
    else{
        node *t = head2;
        while(t->next!=NULL)
            t=t->next;
        t->next = temp;
        t = temp;
    }
}

void display2(){
    node *t = head2;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}
void insert3(int val){
    //cout<<"inserting\n";
    node *temp = new node;
    temp->data = val;
    temp->next = NULL;
    if(head3==NULL)
        head3 = temp;
    else{
        node *t = head3;
        while(t->next!=NULL)
            t=t->next;
        t->next = temp;
        t = temp;
    }
}
void mergeTwoSorted(){
    //cout<<"df";
    if(head==NULL && head2==NULL)
        return;
    if(head==NULL){

        display2();
        return;
    }
    if(head2==NULL){
        display();
        return;
    }

    //cout<<"as\n";
    node *t1 = head;
    //cout<<"t1";
    node *t2 = head2;
    //cout<<"heads = "<<head<<" "<<head2<<"\n";
    //cout<<"t2\n";
    while(t1!=NULL && t2!=NULL){
            //cout<<"wh";
        if(t1->data<t2->data){
            insert3(t1->data);
            t1=t1->next;
        }
        else if(t2->data<t1->data){
            insert3(t2->data);
            t2 = t2->next;
        }
        else if(t2->data == t1->data){
            insert3(t2->data);
            insert3(t1->data);
            t2 = t2->next;
            t1 = t1->next;
        }
    }
    if(t1!=NULL){
        while(t1!=NULL){
            insert3(t1->data);
            t1=t1->next;
        }
    }
    if(t2!=NULL){
        while(t2!=NULL){
            insert3(t2->data);
            t2=t2->next;
        }
    }

}

void display3(){
    node *t = head3;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}
int main(){
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert(val);
    }
    int n2;
    cin>>n2;
    for(int i=0;i<n2;i++){
        cin>>val;
        insert2(val);
    }
    //display();
    cout<<"\n";
    //display2();
    mergeTwoSorted();
    display3();
}
