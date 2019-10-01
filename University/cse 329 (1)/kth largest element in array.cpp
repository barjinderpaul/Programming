//Q3. WAP to find kth largest element in array :
#include<iostream>
using namespace std;
int main(){
	int array[5];
	for(int i=0;i<5;i++)
	{
		cin>>array[i];
	}	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++){
		
		if(array[i]<array[i+1]){
			int num = array[i];
			array[i]=array[i+1];
			array[i+1]=num;
			
		}
	}
	}
	cout<<"sorted array";
	for (int i=0;i<5;i++)
	{
		cout<<array[i];
	}
}
