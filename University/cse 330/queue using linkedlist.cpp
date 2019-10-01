#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
}*head=NULL,*tail=NULL;
int enter_node(int value){
	node *temp = new node;
	temp->data=value;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
		tail=temp;
	}
	else{	
		tail->next=temp;
		tail=temp;
		
	}
}
void display(){
	node *temp = new node;
	temp=head;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
}

int main(){
int value,n;
cin>>n;
while(n>0){
cin>>value;
enter_node(value);
n--;
}
display();
}
