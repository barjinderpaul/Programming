#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
}*tail=NULL;
void enter(int data){
	node *temp = new node;
	temp->data=data;
	
	if(tail==NULL)
		temp->next=temp;
	else{
		temp->next = tail->next;
		tail->next = temp;
		}
	tail = temp;
	
}
int frnt(){
	if(tail == NULL){
		return -1;
	}
	else
		return tail->next->data;
}
int dq(){
	if(tail == NULL)
		return -1;
	node  *curr = tail->next;
	int data = curr->data;
	if(tail->next != tail)
		tail->next = tail->next->next;
	else
		tail= NULL;
	delete curr;
	return data;
}

int main(){
int data;
while(1){
	cout<<"enque"<<endl;
	cout<<"deque"<<endl;
	cout<<"front"<<endl;
	cout<<"exit"<<endl;
	cin>>data;
	switch(data){
		case 1 : cout<<"enter data"<<endl;
				cin>>data;
				enter(data);
				break;
		case 2:
				cout<<"deque element"<<endl;
				break;
		case 3: 
			cout<<"front"<<endl;
			break;
		default:
			cout<<"default";
	}
	
}
}
