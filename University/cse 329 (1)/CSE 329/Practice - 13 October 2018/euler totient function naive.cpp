#include<bits/stdc++.h>
using namespace std;

int eulerTotientFunction(int n){
	int count=0;
	for(int i=1;i < n ;i++)
		if(__gcd(i,n) == 1)
			count++;
	return count;
}

int main(){
	int n;
	cin>>n;
	cout<<eulerTotientFunction(n);	
}
