#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={-515,1,-4,0,299,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	stable_sort(arr,arr+n);
	cout<<"sorted array : "<<'\n';
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
