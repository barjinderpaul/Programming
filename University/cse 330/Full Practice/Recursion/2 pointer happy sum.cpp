#include<bits/stdc++.h>
using namespace std;

int sumDigit(int n){
	int digitSum = 0;
	while(n){
		digitSum += pow(n%10,2);
		n/=10;
	}
	return digitSum;
}

int isHappyNumber(int n){
	int slow=n,fast=n;
	do{
		slow = sumDigit(slow);
		fast = sumDigit(sumDigit(fast));
		cout<<"slow = "<<slow<<endl;
		cout<<"Fast = "<<fast<<endl;
	}
	while(slow!=fast);
	if(slow==1)
		return 1;
}

int main(){
	int n;
	cin>>n;
	if(isHappyNumber(n))
		cout<<"True";
	else
		cout<<"False";
}
