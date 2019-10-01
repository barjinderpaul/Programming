#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int n,int x){
	int start=0,end=n-1;
	while(start<=end){
		int mid = (start+end)/2;
		if(x==a[mid]){
			return mid;
		}
		if(x<a[mid]){
			end = mid-1;
		}
		if(x>a[mid]){
			start = mid+1;
		}
	}
}

int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x=2;
	cout<<binarySearch(arr,n,x);
}
