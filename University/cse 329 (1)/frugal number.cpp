//Frugal Numbers:
/*
A number n is said to be frugal :
primeFactors(n) in exponential form : 
	example : 12;
		primeFactors : 2^2 * 3;
if(numerOfDigits(n) > numberOfDigits(primeFactors)
	then,	Frugal Number
else
	Non-frugal Number
	
example2:
125 = 5^3,
Digits on LHS = 3, Digits on RHS = 2(5,3)
LHS > RHS , Therefore, frugal numbers;

if factors on rhs 
	17^2 * 3  
	Digits = 4 ( Because 1,7,2,3)
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int num,countLHS;
	cin>>num;
	vector<int> primeFactors;
	for(int p=2;p*p<=num;p++){
		while(num%p == 0){
			primeFactors.push_back(p);
			num = num/ p;
		}
	}
	
		if(num>1){
			primeFactors.push_back(p);
		}
	while(num>0 && n%i == 0 ){
		countLHS++;
		num=num/10;
	}
	
}
