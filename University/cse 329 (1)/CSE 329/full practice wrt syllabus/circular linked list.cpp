#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
}*head=NULL;

void insertNode(int value){
	//cout<<"in insert " ;
	node *temp = new node;
	temp->data = value;
	if(head==NULL){
		head = temp;
		temp->next = head;
	}
	else{
		node *ptr = head;
		while(ptr->next!=head)
			ptr=ptr->next;
		ptr->next = temp;
		ptr = temp;
		temp->next = head;
	}
	
		
}

void printList(){
	if(head==NULL){
		cout<<"List empty";
		return;
	}
	node *curr = head;
	cout<<curr->data<< " ";
	curr = curr->next;
	while(curr!=head){
		cout<<curr->data<< " " ;
		curr = curr->next;
	}

}

void deleteData(int del){
	if(head==NULL){
		cout<<"List already empty ";
		return ;
	}
	if(head->data==del){
		if(head->next== NULL)
			head = NULL;
		else
			head = head->next;
	}
	node *curr = head;
	node *prev;
	while(curr->data!=del){
		prev = curr;
		curr = curr->next;
	}
	if(curr->next!=head){
		prev->next = curr->next;
		delete(curr);
	}
	else{
		prev->next = head;
		delete(curr);
	}
}


int main(){
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		insertNode(x);
	}
	printList();
	int delN,deleteElement;
	cout<<endl<<"number of elements to delete = ";
	cin>>delN;
	for(int i=0;i<delN;i++){
		cin>>deleteElement;
		deleteData(deleteElement);		
		printList();
	}
	
}
