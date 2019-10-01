//Q1. write a program to find frequency of each number in array ;
#include<iostream>
using namespace std;
int main(){
	int array[5];
	cout<<"Enter elements ";
	
	for(int i=0;i<5;i++)
	{
		cin>>array[i];
	}
	for(int i=0;i<5;i++){
		int number=0;
		for(int j=0;j<5;j++)
		{
			if(array[i]==array[j])
			{
				number++;
			}
		}
		cout<<array[i] <<"came " <<number<<endl;
		
	}
	
}

