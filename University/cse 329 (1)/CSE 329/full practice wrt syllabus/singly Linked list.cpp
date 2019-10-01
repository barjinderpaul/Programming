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
	temp->next = NULL;
	if(head == NULL){
		head = temp;
	}
	else{
		node *temp2 = head;
		while(temp2->next!=NULL)
			temp2=temp2->next;
		temp2->next = temp;
		temp2 = temp;	
	}
	
		
}

void printList(){
	node *ptr = head;
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr = ptr->next;
		
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
}
