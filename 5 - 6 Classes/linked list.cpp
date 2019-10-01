#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
}*head=NULL;

void insert(int x){
//	cout<<"in insert"<<endl;
	node *temp = new node();
	temp->data = x;
	temp->next = NULL;
//	cout<<"temp data"<<temp->data<<endl;
	if(head == NULL)
			head=temp;
	else
		{
			node *curr = new node();
			curr= head;
			while(curr->next!=NULL){
			curr=curr->next;
			}
				curr->next=temp;
				curr = temp;
		}
}

void display(){
	cout<<"in display"<<endl;
	node *temp = new node();
	temp = head;
	if(head == NULL)
		cout<<"Empty list"<<endl;
	else
		{

			while(temp!=NULL){
				cout<<temp->data<< " ";
				temp=temp->next;
			}
		}
}

int main(){
	int x,n;
	cout<<"enter number of elements"<<endl;
	cin>>n;
	cout<<"Enter elements"<<endl;
	while(n--)
		{
		cin>>x;
		insert(x);	
	}
	display();
}
