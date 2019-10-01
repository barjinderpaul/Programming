#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[] = {1,2,3,7,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int>nums(arr,arr+n);
	cout<<binary_search(nums.begin(),nums.end(),43);
}
