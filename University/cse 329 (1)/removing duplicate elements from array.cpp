//Q2. WAP to remove duplicate values from array;
#include<iostream>
using namespace std;
int main(){
	int length,array[10];
	cout<<"enter length of array";
	cin>>length;
	for(int i=0;i<length;i++)
	{
		cin>>array[i];
	}
		for(int i=0;i<length;i++)
	{
		cout<<array[i]<<endl;
	}
	cout<<"Removing duplicates";
	for(int i=0;i<length;i++)
	{
		for(int j=1;j<length;j++)
		{
			if(array[i]==array[j])
			{
				array[j]=array[j+1];
				length--;
			}
		}
	}
	cout<<endl<<"After removing duplicates ";
	for(int i=0;i<length;i++)
	{
		cout<<array[i]<<endl;
	}

}
