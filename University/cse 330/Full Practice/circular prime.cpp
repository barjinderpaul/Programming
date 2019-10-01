/*
Circular prime = when a number is prime as well as all permutations
				of that number is prime;
		example = 113;
			-> Number itself is prime;
			-> 1st Circular Permutation : 311, which is also a prime;
			-> 2nd Circular Permutation : 131, which is also a prime;
			-> 3rd Circular Permutation : 113, which is also a prime and
												we reached our original number;
								Thus we stop here;
			Optimisations = If the number contains :
							0,2,4,5,6,8 it will be divisible by 2 or 5;
							Thus, cannot be circular primes;
				
*/

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n<=1)
		return false;
	if(n<=3)
		return true;
	if(n%2==0 || n%3==0)
		return false;
	for(int i=5;i*i<=n;i+=6)
		if(n%i==0 || n%(i+2)==0)
			return false;
	return true;
}

bool isCircularPrime(int n){
	int digitsCounts=0,temp=n;
	while(temp){
		digitsCounts++;
		temp/=10;
		cout<<"tem ="<<temp<<endl;
	}
	cout<<"digits="<<digitsCounts<<endl;
	int num=n;
	while(isPrime(num)){
		int rem = num%10;
		cout<<"rem ="<<rem<<endl;
		int div = num/10;
		cout<<"div ="<<div<<endl;
		num = (pow(10,digitsCounts-1))*rem + div;
		cout<<"num = "<<num<<endl;
		if(num==n)
			return true;
	}
	return false;
	
}

int main(){
	int n;	
	cin>>n;
	if(isCircularPrime(n))
		cout<<"Circular Prime"<<endl;
	else
		cout<<"Not a circular Prime "<<endl;
	}
