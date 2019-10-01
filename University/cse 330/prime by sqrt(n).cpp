#include<bits/stdc++.h>
using namespace std;
string isPrime(int number){
	int flag=0;
	if(number==2){
		return "prime";
	}
	if(number==1)
		return "Not Prime";
	for(int i=2;i<=sqrt(number);i++){
		if(number%i == 0){
			flag=1;
		}
	}
	if(flag==0){
		return "Prime";
	}
	else{
		return "Not Prime";
	}
}
int main(){
	int number;
	cin>>number;
	cout<<isPrime(number);
}
