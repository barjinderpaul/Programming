	//Implementing stack with array
#include<bits/stdc++.h>
using namespace std;
int push(int n,int a[],int top){
		a[top]=n;
		cout<<"elements of array :";
	for(int i=0;i<=top;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int pop(int n,int a[],int top){
	
	for(int i=0;i<top;i++){
		cout<<a[i] << " ";
	}
	cout<<endl;
}
int main(){
	int a[50],top=0,choice,n;
	
	while(1){
	cout<<"1. Push Elements"<<endl;
	cout<<"2. Pop Elements"<<endl;
	cout<<"enter choice"<<endl;
	cin>>choice;
		switch(choice){
			case 1:
					cout<<"enter number";
					cin>>n;
					if(top<50){
						push(n,a,top);
						top++;
					}
					else
						cout<<"Stack Overflow"<<endl;
					break;
			case 2:
					cout<<"after popping 1 element"<<endl;
					if(top==0)
						cout<<"stack underflow"<<endl;
					else{
						top--;	
						pop(n,a,top);
				}
						
					break;
		}
	}
	
}
