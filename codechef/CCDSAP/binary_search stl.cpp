#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[] = {13,14,15,15,16,27,28};
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int>nums(arr,arr+n);
	
	//returns 1 if element found else false
	cout<<binary_search(nums.begin(),nums.end(),43)<<endl;
	
	//lower bound
	//returns index of first occurence of number if it exists:
	cout<<lower_bound(nums.begin(),nums.end(),15)-nums.begin()<<endl;
	
	//returns lower bound if number does not exists
	cout<<lower_bound(nums.begin(),nums.end(),20)-nums.begin()<<endl;
	
	//upper bound
	//returns position of the next higher number than num whether element exists or not
	cout<<upper_bound(nums.begin(),nums.end(),27)-nums.begin()<<endl;

}
