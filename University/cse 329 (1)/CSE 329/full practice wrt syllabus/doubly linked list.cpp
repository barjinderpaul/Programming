#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
	node *prev;
}*head=NULL;

void insert(int val){
	node *temp = new node;
	temp->data = val;
	temp->next = NULL;
	temp->prev = NULL;
	if(head == NULL){
		cout<<"in if"<<endl;
		head = temp;
		cout<<head->data<< " " <<endl;
	}
	else{

		node *temp2 = head;
		while(temp2->next!=NULL)
			temp2 = temp2->next;
		temp2->next = temp->prev;
		temp2 = temp;
		cout<<"temp = "<<temp->data << endl;
		cout<<"temp2 = "<<temp2->data<<endl;
		
	}
}

void printList(){
	node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	
}

int main(){
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		insert(x);
	}
	printList();
}
