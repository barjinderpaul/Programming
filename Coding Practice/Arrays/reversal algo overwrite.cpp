#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int length,numberOfShifts;
	int a[5];
		cout<<"enter elements";
	for(int i=0;i<5;i++){
		cin>>a[i];
		}
	cout<<"enter number of shifts";
	cin>>numberOfShifts;
	int firsthalf=numberOfShifts;
	int farray[firsthalf];
	int lasthalf=5-numberOfShifts;
	int larray[lasthalf];
	for(int i=0;i<firsthalf;i++){
		//int t=a[i];
		//a[i]=a[i+1];
		//a[firsthalf-1]=t;
		farray[i]=a[i];
	}
	for(int i=numberOfShifts;i<lasthalf;i++){
	//	int t=a[i];
	//	a[i]=a[i+1];
	//	a[lasthalf-1]=t;
		larray[i]=a[i];
	}
	for(int i=0;i<lasthalf;i++)
		{
			cout<<larray[i];		
		}
	for(int i=0;i<firsthalf;i++){
		cout<<farray[i];
	}
		return 0;
	}
