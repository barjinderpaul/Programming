#include<iostream>
using namespace std;
//array is passed by reference
int positionarray(int a[],int poss,int value){
		int flag=0;
		for(int i=poss-1;i<10;i++)
	{
		a[i]=a[i+1];	
	}
	
		cout<<"new array"<<endl;
	for(int i=0;i<9;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"Base address of array"<<a<<endl;
		
	//Linear search;
	for(int i=0;i<10;i++)
	{
		if(value==a[i]){
			flag=1;
		}

	}
	if(flag==1)
		cout<<"element found";
	else
		cout<<"Element not found";

}
int main(){
	int arr[10],pos,value;
	cout<<"Enter elements";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"Entered elements are :";
	for(int i=0;i<10;i++){
		cout<<arr[i]<<endl;
	}
	cout<<"Enter position to delete the element";
	cin>>pos;
	cout<<"Enter the element that you want to search";
	cin>>value;
	positionarray(arr,pos,value);

}
