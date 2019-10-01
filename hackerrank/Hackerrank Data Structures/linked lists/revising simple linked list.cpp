#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
}*head=NULL,*tail=NULL;

void createLinkedList(int value){
	node *temp = new node;
	temp->data=value;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
		tail=temp;
		temp=NULL;
	}
	else{
		tail->next=temp;
			tail=temp;
		}
}
void display(){
	node *temp=new node;
	temp=head;
	while(temp!=NULL){
		cout<<&temp << " " <<temp->data<<endl;
		temp=temp->next;
	}
}
int addToLinkedList(int pos,int value){
	node *temp= new node;
	node *prev = new node;
	node *curr = new node;
	curr=head;
	temp->data=value;
	if(pos==0){
		temp->next=head;
		head=temp;
			}

	for(int i=0;i<pos;i++){
		prev=curr;
		curr=curr->next;	
	}
	prev->next=temp;
	temp->next=curr;
	
	return 0;
}
int main(){
	cout<<"Enter number of values to enter";
	int n,value,pos;
	cin>>n;
	while(n>0){	
	cin>>value;
	createLinkedList(value);
	n--;
	}
	display();
	cout<<"position to enter element";
	cin>>pos;
	cout<<"enter value to enter ";
	cin>>value;
	addToLinkedList(pos,value);
	display();
}
