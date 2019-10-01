#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int arr[]={1,2,3,4};
	int length=0;
	cout<<"Straight array : ";
	for(int i=0;i<4;i++){
		cout<<arr[i];
		length++;
	}
	cout<<endl<<length<<endl;
	cout<<"Reverse Array : ";
	for(int i=length;i>0;i--){
		cout<<arr[i-1];		
	}
		getch();
	
}
