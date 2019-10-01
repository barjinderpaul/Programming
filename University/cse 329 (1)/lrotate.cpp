#include<iostream>
using namespace std;
int main(){
	int length,numberOfShifts;
	cout<<"enter length of array";
	cin>>length;
	int array[length];
	cout<<"enter elements "<<endl;
	for(int i=0;i<length;i++)
	{
		cin>>array[i];
	}
	cout<<"enter number of shifts";
	cin>>numberOfShifts;
	int shiftarray[numberOfShifts];
	for(int i=0;i<numberOfShifts;i++)
	{
		shiftarray[i]=array[i];
	}
	int n=length-numberOfShifts;
	int narray[n];
	for(int i=numberOfShifts;i<length;i++){
		narray[i-numberOfShifts]=array[i];	
	}
	cout<<"remaining array";
	for(int i=0;i<n;i++){
		cout <<narray[i];
	}
	cout<<endl;
		cout<<"Shifted elements ";
	for(int i=0;i<numberOfShifts;i++)
	{
	 cout<<shiftarray[i];
	}
	cout<<endl;
	cout<<"After Rotating ";
	

for(int i=0;i<n;i++)
	{
		cout<<narray[i];
	}
	for(int i=0;i<numberOfShifts;i++){
		cout<<shiftarray[i];
	}
}
	

