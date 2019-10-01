/*
Problem : P-Smooth Number :
	n<=p;
	A number n is called P-smooth number, if max prime factor of n is <= p
		example : 
			7-smooth Number,
			n = 11;
			Greatest prime factor = 11, i.e, 11 !<= 7,
			Thus 11 is not a 7-smooth number;
			
Question : 
	8-smooth numbers between range : 20-40, 35-50;
	
	Bruteforce, go from left to right , and compute, with complexity = right-left*n;
	
	optimized, calculate p-smooth numbers till right, and then display from only range

*/
#include<bits/stdc++.h>
using namespace std;

void calcPrime(int num,int p,vector<int> &primeFactors){
		primeFactors.clear();
		for(int p=2;p*p<=num;p++){
		while(num%p == 0){
			primeFactors.push_back(p);
			num = num/ p;
		}
	}
	if(num>1){
			primeFactors.push_back(num);
			}
}

int main(){
	int leftRange,rightRange,num,p;
	cin>>p>>leftRange>>rightRange;
	vector<int> primeFactors;
	for(int i=leftRange;i<=rightRange;i++){
	{
		calcPrime(i,p,primeFactors);
		if(primeFactors[primeFactors.size()] <= p)
			cout<<i<<" ";
	else
		continue;
		
	}
}
	
}

/*
Sir's implementation :
bool smooth[101]

int largest_pf(int num){
	int Max = 0;
	for(int i=2;i*i=num;i++){
		while(num%i == 0){
			if(1 < Max)
				Max=i;
			num/=i;
		}
		if(num > 1 && num > Max)
			Max = num;
		return Max;
		}
}

void printpsmooth(int i,int r){
	for(int i=1;i<=r;i++){
			if(smooth[i])
				cout<<i<<" ";
	
		}
					cout<<endl;
}

void genpsmooth(int n,int p){
	for(int i=1;i<=n;i++){
		if(largest_pf(i) <=p)
			smooth[i] = 1;
			}
}


int main(){
	genpsmooth(100,8);
	printpsmooth(20,40);
	printpsmooth(25,50);
}

*/

