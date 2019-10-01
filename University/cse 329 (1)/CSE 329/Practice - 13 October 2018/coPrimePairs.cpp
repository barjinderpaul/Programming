#include<bits/stdc++.h>
using namespace std;

void coPrimePairs(int n)
{
	int count=0;
	for(int i=2;i*i<=n;i++){
		if(n%i == 0){
			if(__gcd(i, (n/i)) ==1 )
				count++;
		}
	}
	cout<<"Totol Pairs = "<<count; 
}

int main(){
	int n;
	cin>>n;
	coPrimePairs(n);
}
