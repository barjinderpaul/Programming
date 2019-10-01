#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	//int a[n]; //static memory allocation //cannot be freed;
	int *a = new int[n]; //dynamic memory allocation //can be freed;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"elements of the array ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
