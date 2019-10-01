#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
}*head=NULL,*tail=NULL;

void insertAtHead(int value){
	node *temp = new node();
	temp->data = value;
	if(head==NULL){ head=tail=temp;	}
	else {
		temp->next=head;
		head=temp;
	}
}

void insertAtTail(int value){
	/*node *temp = new node();
	temp->data=value;
	temp->next=NULL;
	while(tail->next!=NULL){          //O(n)
		tail=tail->next;
	}
	tail->next=temp;
	tail=temp;
	*/
	node *temp = new node();
	temp->data=value;
	temp->next=NULL;				//O(1)
	tail->next=temp;
	tail=temp;	
}

void insertAtPosition(int value,int pos){
	node *temp = new node();
	temp->data=value;
	node *curr=new node();
	node *prev = new node();
	curr=head;
	if(pos==1){
		temp->next=head->next;
		head=temp;
	}
	for(int i=1;i<=pos;i++){
		prev=curr;
		curr=curr->next;
	}
	prev->next=temp;
	temp->next=curr;
}

void display(){
	node *temp = new node();
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}

void deleteFromHead(){
	node *temp = new node();
	temp=head;
	head=head->next;
	delete temp;
}

void deleteFromTail(){
	node *temp=new node();
	node *curr=new node();
	temp=head;
	while(temp->next!=tail){
		curr=temp;
		temp=temp->next;
	}
	temp->next=NULL;
	delete curr;
}

void deleteAtPosition(int pos){
	node *temp = new node();
	node *curr = new node();
	temp=head;
	for(int i=1;i<pos;i++){
		curr=temp;
		temp=temp->next;
	}
		curr->next=temp->next;
		delete temp;
}

void findMiddle(){
	node *temp = new node();
	temp=head;
	int mid,count=0;
	while(temp!=NULL){
			count++;
			temp=temp->next;
		}
	if(count==0)
		cout<<"list is empty"<<endl;
	if(count%2==0)
		mid=count/2;
	else
		mid=(count/2)+1;
	temp=head;
	for(int i=1;i<mid;i++){
		temp=temp->next;
	}
	cout<<"Data at middle element : "<<temp->data<<endl;
}

int main(){
	int data,value,pos;
	while(1){
		cout<<"1. Enter element at head"<<endl;
		cout<<"2. Enter element at tail"<<endl;
		cout<<"3. Enter element at position"<<endl;
		cout<<"4. Display linked list"<<endl;
		cout<<"5. Delete element from head"<<endl;
		cout<<"6. Delete element from tail"<<endl;
		cout<<"7. Delete element at position"<<endl;
		cout<<"8. Find middle element"<<endl;
		cout<<"9. Exit"<<endl;
	
	cin>>data;
	switch(data){
		case 1:
			cout<<"enter value";
			cin>>value;
			insertAtHead(value);
			break;
		case 2:
			cout<<"enter value";
			cin>>value;
			insertAtTail(value);
			break;
		case 3:
			cout<<"Enter value and position";
			cin>>value>>pos;
			insertAtPosition(value,pos);
			break;
		case 4:
			display();
			break;
		case 5:
			deleteFromHead();
			break;
		case 6:
			deleteFromTail();
			break;
		case 7:
			cout<<"enter position to delete:";
			cin>>pos;
			deleteAtPosition(pos);
			break;
		case 8:
			findMiddle();
			break;
		case 9:
			exit(0);
			break;
		}		
	}
}
