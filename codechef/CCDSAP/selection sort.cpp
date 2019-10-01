#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={-515,1,-4,0,299,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int min;
	//selection sort:
	cout<<"Selection Sort " <<'\n';
	for(int i=0;i<n-1;i++){
		min = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min])
				min = j;
		}
		swap(arr[min],arr[i]);
	}
	
	cout<<"sorted array : "<<'\n';
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
