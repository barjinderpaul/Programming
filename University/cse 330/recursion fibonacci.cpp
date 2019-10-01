#include<iostream>
using namespace std;
int fib(int i){
	if(i==0||i==1)
		return i;
	else
		return fib(i-1)+fib(i-2);
}
int main(){
	int n,i=0;
	cin>>n;
	while(i<n){
		cout<<fib(i);
		i++;
	}
	
}
