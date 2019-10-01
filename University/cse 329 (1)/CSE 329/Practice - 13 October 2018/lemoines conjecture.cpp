//lemoins conjecture;
/*
A number can be expressed as a sum of an odd prime and the product of 2*a semi prime;
where, a semi prime is number who is a product of 2 prime numbers;
*/
#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n){
	if(n<2)
		return false;
	for(int i=2;i*i<=n;i++)
		if(n%i == 0)
			return false;
	return true;
}

void lemoinesConjecture(int n){
	vector<int> lemoines;
	for(int i=1;i<=n/2;i++)
		{
			int p = n-2*i;
			if(isPrime(p) && isPrime(i)){
			
				lemoines.push_back(p);
				lemoines.push_back(i);
				
				}
		}
		for(int i=0;i<=lemoines.size()-1;++i){
			cout<<n<<" can be represented as "<<lemoines[i]<<" + 2*"<<lemoines[i+1]<<endl;
			i++;
			}
}

int main(){
	int n;
	cin>>n;
	lemoinesConjecture(n);
}
