#include<bits/stdc++.h>
using namespace std;

void printPrime(int num){
	for(int p=2;p*p<=num;p++){
		while(num%p == 0){
			cout<<p<<" ";
			num = num/ p;
		}
	}
	
		if(num>1)
			cout<<num;
}

int main(){
	printPrime(13);
}
