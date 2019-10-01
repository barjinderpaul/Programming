#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
	if(n>=0){
		cout<<n;
		return reverse(n-1);
	}
	else
		exit(0);
}
int main(){
	int n;
	cin>>n;
	cout<<reverse(n);
}

