#include<bits/stdc++.h>
using namespace std;
int factors(int n){
	int i=2;
	while(i*i<=n){
		if(n%i==0){
			cout<<i << " ";
			n/=i;
		}
		else
			i++;
		}	
	if(n>1)
		cout<< n;
}
int main(){
	int n;
	cin>>n;
	cout<<"Factors: " ;
   	factors(n);
	
}
