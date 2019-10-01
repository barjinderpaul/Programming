#include<bits/stdc++.h>
using namespace std;
struct node{
	int data,priority;
	node *next;
}*head=NULL,*tail=NULL;
void enter(int value,int priority){
	node *temp = new node;
	temp->data=value;
	temp->priority=priority;
	temp->next=NULL;
	if(head==NULL)
		head=tail=temp;
	else if(temp->priority > head->priority){
		temp->next=head;
		head=temp;
	}
	else{
		node *curr=head;
		while(curr->next!=NULL && curr->next->priority > priority){
			curr=curr->next;
		}
		temp->next = curr->next;
		curr->next = temp;
	}
}

void display(){
	node *temp = new node;
	temp=head;
	while(temp!=NULL){
		cout<<"Data : "<<temp->data<<" Priority" <<temp->priority<<endl;
		temp = temp->next;
	}
}
int  dq(){
	if(head == NULL)
			return -1;
	node *curr = new node;
	int data = curr->data;
	head = head->next;
	delete curr;
	return data; 
}
int frnt(){
	if(head==NULL)
		return -1;
	cout<<endl<<"Front : "<<"Data :"<<head->data<<" Priority :"<<head->priority;
}
int main(){
	int n,value,priority;
	cin>>n;
	while(n>0){
		cout<<"enter value";
		cin>>value;
		cout<<"enter priority";
		cin>>priority;
		enter(value,priority);
		n--;
	}
	display();
	cout<<endl;
	frnt();
	dq();
	cout<<endl;
	cout<<"After Deque"<<endl;
	display();
}
