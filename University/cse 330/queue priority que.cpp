#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	int priority;
	node *next;
}*head,*tail;
void enqueue(int value,int priority){
	node *temp = new node;
	temp->data=value;
	temp->priority=priority;
	temp->next=NULL;
	if(head==NULL)
		head=tail=temp;
	else{
		tail->next=temp;
		tail=temp;
	}
}
void display(){
	node *temp = new node;
	temp=head;
	while(temp!=NULL){
		cout<<"data :" << temp->data<<" Priority : " << temp->priority<<endl;
		temp=temp->next;
	}
}
int main(){
	int n,value,priority;
	cout<<"Enter number of elements";
	cin>>n;
	while(n>0){
		cout<<"enter value";
		cin>>value;
		cout<<"enter priority";
		cin>>priority;
		enqueue(value,priority);
		n--;
	}
	display();
}
