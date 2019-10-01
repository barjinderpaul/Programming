#include<bits/stdc++.h>
using namespace std;
void enque(){
	int n,value;
	cout<<"enter number of elements to enter";
	cin>>n;
	cout<<"enter elements";
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void deque(){
	
}
void display(){
	cout<<"elements of the queue are :"<<endl;
	for(int i=0;i<a;i++)
		cout<<a[i];
}
int main(){
	int choice;
	cout<<"1. Enque"<<endl;
	cout<<"2. Deque"<<endl;
	cout<<"3. Display"<<endl;
	cin>>choice;
	while(1){
		cout<<"1. Enque"<<endl;
		cout<<"2. Deque"<<endl;
		cout<<"3. Display"<<endl;
	switch(choice){
		case 1 : enque();
				 break;
		case 2 : deque();
				break;
		case 3 : display();
				break;
		default : cout<<"Invalid Option";	
	}
	}
	
}
