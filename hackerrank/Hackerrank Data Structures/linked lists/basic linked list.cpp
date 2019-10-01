#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
}*head=NULL,*tail=NULL;
void createnode(int value){
	node *temp = new node;
	temp->data=value;
	temp->next=NULL;
	if(head==NULL){ //linked list is empty
		head=temp;
		tail=temp;
		temp=NULL;
	}
	else{ //linked list not empty
		tail->next=temp;
		tail=temp;
	}
}
void display(){
	node *temp = new node;
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
}
int main(){
	int n,value;
	cout<<"enter number of values to enter " ;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>value;
		createnode(value);
	}
	cout<<endl<<"Elements of the linked list are : " <<endl;
	
}
