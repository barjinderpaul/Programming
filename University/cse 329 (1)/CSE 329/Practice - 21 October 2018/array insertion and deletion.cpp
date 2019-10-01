#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,element,flag=0;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"elements in the array ="<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"enter element to delete";
	cin>>element;
	
	//1st Approach

	for(int i=0;i<n;i++)
		{
		if(a[i] == element)
			flag=1;
		if(flag == 1)
			a[i] = a[i+1];
		}
	cout<<"elements in the array ="<<endl;
	for(int i=0;i<n-1;i++)
		cout<<a[i]<<" ";
	free(a);
	//2nd Approach
	/*
	cout<<"elements in the array ="<<endl;
	for(int i=0;i<n;i++)
		{
		if(a[i] == element)
			continue;
		cout<<a[i]<<" ";
	}
	*/

		
}
