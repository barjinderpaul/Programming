#include<iostream>
using namespace std;
void push(int n,int value,int arr[],int top){
	for(int i=top;i<n;i++){
		cout<<"Enter value "<<endl;	
		cin>>value;
		arr[i]=value;
	}
}
void showMiddle(){
	

}
void pop(int arr[],int top){
	for(int i=0;i<top;i++){
		cout<<"top : "<<arr[i]<<endl;
	}
}

void deleteMiddle(){
	
}
int main(){
	int choice,*arr=NULL,numberOfElements,value,count=0,top=0;
	while(1){
		cout<<"1. Enter elements"<<endl;
		cout<<"2. Pop top element"<<endl;
		cout<<"3. Display top element"<<endl;
		cout<<"4. Show Middle Element"<<endl;
		cout<<"5. Delete Middle Element"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"enter number of elements to enter"<<endl;
				cin>>numberOfElements;
				arr = new int[numberOfElements];
				push(numberOfElements,value,arr,top);
				break;
			case 2:
				if(top == 0)
					cout<<"Stack Underflow"<<endl;
				else{
					top--;
					pop(arr,top);
				}
				break;
			case 3:
				cout<<arr[top];
				break;
			case 4:
				showMiddle();
				break;
			case 5:
				deleteMiddle();
				break;				
		}
		
	}
}
