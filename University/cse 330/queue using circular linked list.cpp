#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
}*head=NULL,*tail=NULL;
void enter(int data){
	node *temp = new node;
	temp->data=data;
	temp->next=head;
	if(head==NULL)
		head=tail=temp;
	else{
		tail=temp;
		tail->next=temp;
		temp=head;
		temp->next=head;
	}
}
void display(){
	node *curr= new node;
	curr=head;
	int data=head->data;
	while(curr!=tail){
		cout<<curr->data;
		curr=curr->next;
	}
}
int main(){
	int n,data;
	cin>>n;
	while(n>0){
		cin>>data;
		enter(data);
		n--;
	}	
	display();
}
