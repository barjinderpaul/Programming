//Maths  : GCD, Seive, Prime (optimize), Bit Manipulation;
#include<bits/stdc++.h>

int findGCD(int a,int b){
	if(b==0)
		return a;
	return findGCD(b,a%b);
}

using namespace std;
int main(){
	uint64_t a,b;
	cin>>a>>b;
	cout<<findGCD(a,b);	
}
