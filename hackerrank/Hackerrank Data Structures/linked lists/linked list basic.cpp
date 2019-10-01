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
int display(int count){
	node *tempp = new node;
	tempp=head;
	cout<<endl;
		while(tempp!=NULL){
		count++;
		cout<<"Address " << tempp ;
		cout<<", Element : " << tempp->data<<endl;
		tempp=tempp->next;
	}
	return count;
}
int insertAtPosition(int pos,int value){
node *temp=new node;
node *prev = new node;
node *curr = new node;
curr=head;
if(pos==0){ 
		temp->next=head;
		head=temp;

}
for(int i=0;i<pos;i++){
	prev=curr;
	curr=curr->next;
}
temp->data=value;
prev->next=temp;
temp->next=curr;
}
void deleteElement(int pos){
	
	node *temp= new node;
	node *prev = new node;
	if(pos==0){
		temp=head;
		head=head->next;
		delete temp;
	}
	else if(pos==5){
		temp=head;
		while(temp->next!=NULL){
			prev=temp;
			temp=temp->next;
		}
		prev->next=NULL;
		delete temp;
	}
	else{
		temp=head;
		for(
		int i=0;i<pos;i++){
			prev=temp;
			temp=temp->next;
		}
		prev->next=temp->next;
	}
	
}
int main(){
	int n,value,pos,count=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>value;
		createnode(value);
	}
	cout<<"elements of the linked list are : ";	
	display(count);
	cout<<"at which position you want to enter an element ?";
	cin>>pos;
	cout<<"enter data for that position ";
	cin>>value;
	insertAtPosition(pos,value);
	cout<<"After adding "<<endl;
	display(count);
	cout<<"Delete element at position?  " ;
	cin>>pos;
	deleteElement(pos);
	cout<<"After deleting "<<endl;
	display(count);
	cout<<display(count);
	}
