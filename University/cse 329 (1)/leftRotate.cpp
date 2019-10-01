#include<iostream>
using namespace std;
int main(){
	int array[5]={1,2,3,4,5};
	int numberOfShifts,len;
	
	cout<<"Number of shifts";
	cin>>numberOfShifts;
	int narray[numberOfShifts];
	cout<<"enter elements";
	for(int i=0;i<5;i++)
	{
		cin>>array[i];
		len++;
	}
	for(int i=0;i<numberOfShifts;i++){
		narray[i] = array[i];
		array[i]=array[i+1];
		}
	for(int i=0;i<numberOfShifts;i++){
		array[len-1-numberOfShifts] = narray[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<array[i]<<endl;
	}

	
}
