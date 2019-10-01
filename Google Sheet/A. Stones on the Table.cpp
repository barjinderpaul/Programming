#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,count=0;
	cin>>n;
	char value;
	char arr[n];
	cin>>value;
	arr[0] = value;
	for(int i=1;i<n;i++){
		cin>>arr[i];
		if(arr[i] == arr[i-1])
			count++;
	}
	cout<<count;
}
