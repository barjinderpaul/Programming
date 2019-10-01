#include<iostream>
using namespace std;

int positionarray(int a[],int poss,int noo){
		
		for(int i=9;i>poss;i--)
	{
		a[i]=a[i-1];
	}
	a[poss]=noo;
	cout<<"new array"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
	
}
int main(){
	int arr[10],pos,no;
	cout<<"Enter elements";
	for(int i=0;i<9;i++)
	{
		cin>>arr[i];
	}
	cout<<"Entered elements are :";
	for(int i=0;i<9;i++){
		cout<<arr[i]<<endl;
	}
	cout<<"Enter position to fill the element";
	cin>>pos;
	cout<<"enter the element that you wish to enter at specific position";
	cin>>no;
	
	positionarray(arr,pos,no);

}
