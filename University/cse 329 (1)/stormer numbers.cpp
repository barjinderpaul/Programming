//stormer numbers : ( n *n+1 >=  2*n ) Greatest prime factor
//Program for generating first 14 stormer numbers :

/*
input = a number,
calculate Greatest Prime Factor (GPF)
Check GPF >= 2*number
If yes, stormer number
else, not a stormet number;
*/
#include<bits/stdc++.h>
using namespace std;


int main(){
	int num;
	cin>>num;
	num = num*num+1;
	vector<int> primeFactors;
		for(int p=2;p*p<=num;p++){
		while(num%p == 0){
			
			primeFactors.push_back(p);
			num = num/ p;
		}
	}
	if(num>1){
			primeFactors.push_back(num);
			
		}
	cout<<"Greatest Prime Factor " <<primeFactors[primeFactors.size()]<<endl;
	if(primeFactors[primeFactors.size()]  >= 2*num)
		cout<<"Stormer Number";
	else 
		cout<<"Not a stormer number";
	
}
