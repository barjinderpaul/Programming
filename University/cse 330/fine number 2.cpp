//Program to check whether the number is fine or not;
/*
19 = 1^2 + 9^2  =82;
82= 8^2 + 2^2;
...
100 = 1^2 + 0^2 + 0^2;
	= 1
	therefore fine number.
*/
#include<bits/stdc++.h>
using namespace std;

int calc(int n){
		int p,o,m=0,j;
		while(n>0){
		p=n%10;
		o=p*p;
		m+=o;
		j=n/10;
		cout<<m;
		return calc(j);
	}

	}
	
	
	

int main(){
	int n;
	cin>>n;
	calc(n);

}
