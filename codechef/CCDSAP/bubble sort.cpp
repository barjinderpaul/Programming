#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={-515,1,-4,0,299,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	bool swapped = false;
	for(int i=0;i<n;i++){
		swapped = false;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				swapped = true;
			}
		
		}
		if(swapped==false){
			break; //no swap done
		}
		
	}
	cout<<"sorted array : "<<'\n';
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
