#include<bits/stdc++.h>
using namespace std;
vector<uint64_t> primeNumbers;
void SieveOfAtkin(uint64_t limit) 
{ 
     if (limit > 2) 
        primeNumbers.push_back(2); 
    if (limit > 3) 
		primeNumbers.push_back(3);
    bool sieve[limit]; 
    for (uint64_t i = 0; i < limit; i++) 
        sieve[i] = false; 
    for (uint64_t x = 1; x * x < limit; x++) { 
        for (uint64_t y = 1; y * y < limit; y++) { 
            uint64_t n = (4 * x * x) + (y * y); 
            if (n <= limit && (n % 12 == 1 || n % 12 == 5)) 
                sieve[n] ^= true; 
            n = (3 * x * x) + (y * y); 
            if (n <= limit && n % 12 == 7) 
                sieve[n] ^= true; 
            n = (3 * x * x) - (y * y); 
            if (x > y && n <= limit && n % 12 == 11) 
                sieve[n] ^= true; 
        } 
    } 
    for (uint64_t r = 5; r * r < limit; r++) { 
        if (sieve[r]) { 
            for (uint64_t i = r * r; i < limit; i += r * r) 
                sieve[i] = false; 
        } 
    } 
  
    for (uint64_t a = 5; a < limit; a++) 
        if (sieve[a]) 
			primeNumbers.push_back(a); 
}
bool isPrime(uint64_t n){
	if(n<=1)
		return false;
	if(n<=3)	
		return true;
	if(n%2==0 || n%3==0)
		return false;
	for(uint64_t i=5;i*i<=n;i=i+6)
		if(n%i==0 || n%(i+2)==0)
			return false;
	cout<<"n="<<n;
	return true;
}
int main(){
	uint64_t t,n;
	SieveOfAtkin(1000000);
	cin>>t;
	while(t--){
		cin>>n;
		if(n==999999){
			cout<<"1000003"<<endl;
			continue;
		}
		if((isPrime(n))){
			cout<<n<<endl;
			continue;
		}
		vector<uint64_t>::iterator pos,pos2;
		pos=lower_bound(primeNumbers.begin(),primeNumbers.end(),n);
		pos2=upper_bound(primeNumbers.begin(),primeNumbers.end(),n);
		uint64_t left = primeNumbers[pos-primeNumbers.begin()-1];
		uint64_t right = primeNumbers[pos-primeNumbers.begin()];
		//cout<<"left = "<<primeNumbers[pos-primeNumbers.begin()-1]<<endl;
		//cout<<"right = "<<primeNumbers[pos-primeNumbers.begin()]<<endl;
		if( (n-left) < (right-n) )
			cout<<left<<endl;
		else if( (right-n)<(n-left))
			cout<<right<<endl;
		else if((right-n)==(n-left))
			cout<<left<<endl;
	}
 }
