#include<bits/stdc++.h>
using namespace std;
int main(){
	int length=0;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;i++)
	{
		cout<<arr[i];
		length++;
	}
	cout<<endl<<length<<endl;
	for(int i=0;i<(length/2+1);i++)
	{
		cout<<"for i = "<<i<<endl;
		int temp=arr[i];
		arr[i]=arr[length-1];
		arr[length-1]=temp;
		length--;		
	}
	cout<<"Swapped array"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<arr[i];
	}
}
