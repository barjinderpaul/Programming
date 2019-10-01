#include<bits/stdc++.h>

int smallestPrime(int n){
	if(n%2==0)
		return 2;
	for(int i=3;i*i<=n;i++)
		if(n%i==0)
			return i;
	return n;
}

using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	if(smallestPrime(n) >= k)
		cout<<"K-jagged"<<endl;
	else
		cout<<"Not a k-Jagged"<<endl;
}
