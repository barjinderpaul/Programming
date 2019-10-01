#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int length,numberOfShifts;
	int a[length];
	cout<<"enter length";
	cin>>length;
	cout<<"enter elements";
	for(int i=0;i<length;i++){
		cin>>a[i];
		}
	cout<<"enter number of shifts";
	cin>>numberOfShifts;
	int firsthalf=numberOfShifts;
	int lasthalf=length-numberOfShifts;
	for(int i=0;i<firsthalf;i++){
		int t=a[i];
		a[i]=a[i+1];
		a[firsthalf-1]=t;
	}
	for(int i=0;i<lasthalf;i++){
		int t=a[i];
		a[i]=a[i+1];
		a[lasthalf-1]=t;
	}
	for(int i=0;i<length;i++)
		{
			cout<<a[i];		
		}
		return 0;
	}
