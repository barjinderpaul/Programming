#include<iostream>
using namespace std;

int printODD(int a[], int n)
{
	int res=0;
	for(int i=0;i<n;i++)
		res ^= a[i];
	return res;
}

//If there is more than one element which is odd, it returns the sum of those numbers;


int main(){
	int arr[] = {1,1,2,3,4,2,3,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Odd occuring element "<<printODD(arr,n);
	
}
