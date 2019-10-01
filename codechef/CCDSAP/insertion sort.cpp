#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={-515,1,-4,0,299,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Insertion sort"<<endl;
	int j,v;
	for(int i=1;i<=n-1;i++){
		v = arr[i];
		j = i;
		while(arr[j-1]>v && j>=1){
			arr[j] = arr[j-1];
			j--;
		}
		arr[j] = v;
	}
	
	cout<<"sorted array : "<<'\n';
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
