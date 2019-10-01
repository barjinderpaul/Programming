#include<bits/stdc++.h>
using namespace std;

void push(int a[],int top,int value){
	cout<<endl;
	if(top>50){
		cout<<"Overflow";
		return;
	}
	a[top] = value;
	cout<<"Elements  : "; 
	for(int i=0;i<top;i++)
		cout<<a[i]<<" ";
}

int main(){
	int stackArray[50],top=0;
	cout<<"enter number of elements to enter into stack"<<endl;
	int n,value;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>value;
		push(stackArray,top,value);
		top++;
	}	
}
