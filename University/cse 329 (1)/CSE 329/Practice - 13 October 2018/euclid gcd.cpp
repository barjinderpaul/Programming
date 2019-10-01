//GCD euclid
#include<iostream>
using namespace std;

uint64_t gcd(uint64_t a, uint64_t b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}

int main(){
	uint64_t a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
}
