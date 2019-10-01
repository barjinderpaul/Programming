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

bool HappyNumber(int n){
	int slow=n,fast=n;
	do{
		slow = sumDigit(slow);
		fast = sumDigit(sumDigit(fast));
		//cout<<"slow = "<<slow<<endl;
		//cout<<"Fast = "<<fast<<endl;
	}
	while(slow!=fast);
	return(slow==1);
}

int main(){
	int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		n++;
		while(!HappyNumber(n)){
			n++;
		}
		cout<<n<<endl;		
	}
}
