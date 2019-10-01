#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
}*top;
void push(int value);
void topElement();
void popElement();
void showElement();

int main(){
	int choice,value;
	while(1){
		cout<<"1. Enter element "<<endl;
		cout<<"2. Top element" <<endl;
		cout<<"3. Pop element"<<endl;
		cout<<"4. Show element"<<endl;	
		cout<<"5. exit"<<endl;
		cin>>choice;
		switch(choice){
			case 1: cout<<"enter element"<<endl;
					cin>>value;
					push(value);
					break;
			case 2:
					topElement();
					break;
			case 3:
				 popElement();
					break;
			case 4: 
					showElement();
					break;
			case 5: 
					exit(0);
		}
	}
}
void push(int value){
	node *ptr = new node;
	ptr->data=value;
	ptr->next=NULL;
	if(top!=NULL)
		ptr->next=top;
	top=ptr; 
}

void topElement(){
	if(top==NULL)
		cout<<"Stack Underflow"<<endl;
	else
		cout<<"Element at top : " <<top->data<<endl;
}
void popElement(){
		node *temp = top;
		top = top->next;
		cout<<"Popped Element "<<temp->data;
		delete temp;
}
void showElement(){
	node *temp = top;
	if(top==NULL)
		cout<<"Stack Underflow"<<endl;
	while(temp!=NULL){
		cout<<"Elements" <<temp->data<<endl;
		temp = temp->next;
	}
}
