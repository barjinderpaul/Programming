//Question : Find pairs in array such that it is equal to the number provided;

#include<bits/stdc++.h>
using namespace std;

int bin_search(int a[], int low, int high, int n, int val){
	if(low<=high){
		int mid = low+ (high-low)/2;
		if(a[mid] == val){
			return mid;
		}
		else if(val > a[mid])
			return bin_search(a,mid+1,high,n,val);
		else 
			return bin_search(a,low,mid-1,n,val);
	}
}
int main(){
	int a[] = {5,10,20,30,50,20};
	int n = sizeof(a)/sizeof(a[0]);
	int sumToFind = 40;
	//sorted array; //if not sorted, do sorting;
	//Brute Force
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++)
		{
			if( abs(a[i] - a[j])==sumToFind || a[i]+a[j]==sumToFind){
				cout<<"pair = "<<a[i]<<" " <<a[j]<<endl;
			}
		}
	}
	
	//With Binary Search :
	for(int i=0;i<n;i++){
		int index = bin_search(a,0,n-1,n,a[i] - 10);
		if(index != i && index!= -1)
			{
				cout<<a[index]<<" " <<a[i]<<endl;
				break;
			}
	}
		
}
