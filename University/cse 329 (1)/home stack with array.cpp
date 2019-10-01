#include<bits/stdc++.h>
#include<vector>
using namespace std;
int push(int n,int value,int arr[],int top){
	//entered only once
	for(int i=top;i<n;i++){
		cout<<"Enter value "<<endl;	
		cin>>value;
		top++;
		arr[i]=value;
	}
	return top;
}

int pop(int arr[],int top){
	for(int i=0;i<top;i++){
		cout<<"Elements in stack :  "<<arr[i]<<endl;
	}
	return top;
}
void showMiddle(int topMiddle,int arr[]){
	
	if(topMiddle==0)
		cout<<"No elements in Stack"<<endl;
	else if(topMiddle%2==0)
		topMiddle = topMiddle/2;
	else
		topMiddle = (topMiddle/2) +1;
	cout<<"Middle Element : " <<arr[topMiddle-1]<<endl;

}

void deleteMiddle(int topMiddle,int arr[],int top){
	int top2;
	vector<int> subMiddle;
	if(topMiddle==0)
		cout<<"No elements in Stack"<<endl;
	else if(topMiddle%2==0)
		topMiddle = topMiddle/2;
	else
		topMiddle = (topMiddle/2) +1;
	cout<<"After removing"<<endl;
	for(int i=0;i<top;i++){
		if(i==topMiddle-1)
			continue;
		cout<<"Elements in array : "<<arr[i]<<endl;
	}
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
			top = push(numberOfElements,value,arr,top);
				break;
			case 2:
				if(top == 0)
					cout<<"Stack Underflow"<<endl;
				else{
					cout<<"Element popped "<<arr[top-1]<<endl;
					top--;
					pop(arr,top);
				}
				break;
			case 3:
				cout<<"top : "<<arr[top-1]<<endl;
				break;
			case 4:
				showMiddle(top,arr);
				break;
			case 5:
				deleteMiddle(top,arr,top);
				break;				
		}
		
	}
}
