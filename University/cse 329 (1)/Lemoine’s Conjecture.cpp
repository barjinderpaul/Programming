/*
Semi - prime : A number whose product is a prime number

Lemoine’s Conjecture
Any odd integer greater than 5 can be representated as an odd prime number + an even semi-prime Number
	7 = 3 + 4, where 4 = 2*2(semi-prime number)
	17 = 3 + 14, where 14 = 2*7;
	
*/

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
	if(num == 1)
		return false;
	for(int i=2;i*i<= num;i++)	
		if(num%i==0)
			return false;
	return true;
}

void lemoine(int num){
	for(int i = 2 ; i<=num/2 ; i++){
		int var = num - i*2;
		if(isPrime(i) && isPrime(var)){
			cout<<"2x"<<i<<" + " <<var<<endl;
		}
	}
}

int main(){
	lemoine(7);
}
