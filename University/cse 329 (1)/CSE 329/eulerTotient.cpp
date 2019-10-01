#include<bits/stdc++.h>
using namespace std;
int eulerTotient(int n){
	int count=0;
	for(int i=1;i<n;i++)
		if(__gcd(i,n)==1)
			count+=1;
	return count;
}
int main(){
	int n;
	cin>>n;
	cout<<eulerTotient(n);
}
