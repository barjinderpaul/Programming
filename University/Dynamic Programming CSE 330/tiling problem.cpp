#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	int f[n+2];
	f[0] = 0;
	f[1] = 1;
	for(int i=2;i<=n+2;i++){
		f[i] = f[i-1] + f[i-2];
		}
	cout<<"No. of ways = " << f[n+1]; 
}
int main(){
	int n;
	cin>>n;
	fib(n);
}
