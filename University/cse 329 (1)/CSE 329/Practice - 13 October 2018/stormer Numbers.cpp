// STORMER NUMBERS;
/*
A number "n" is a stormer number, when :
greatestPrimeFactor(n*n+1) >= 2*n

*/
#include<bits/stdc++.h>
using namespace std;

int greatestPrimeFactor(int number){
	int greatestPrime = -1;
	while(number%2 == 0){
		greatestPrime = 2;
		number/=2;
	}
	for(int p=3;p*p<=number;p+=2)
		{
			while(number%p == 0){
				greatestPrime = p;
				number/=p;
			}
		}
	if(number>2)
		greatestPrime = number;
	return greatestPrime;
}

void stormers(int i){
	int number = i*i+1;
	int gpf = greatestPrimeFactor(number);
	if(gpf >= 2*i)
		cout<<"Stormer Number " <<i<<endl;
	
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		stormers(i);
}
