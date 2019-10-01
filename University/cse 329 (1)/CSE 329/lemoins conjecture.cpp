#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n<=1)
		return false;
	if(n<=3)
		return true;
	if(n%2==0 || n%3==0)
		return false;
	for(int i=5;i*i<=n;i+=6)
		if(n%i==0 || n%(i+2)==0)
			return false;
	return true;
}

void printLemoine(int n){
	vector<pair<int,int>> lem;
	for(int q=1;q<=n/2;q++){
		int p=n-2*q;
		if(isPrime(p) && isPrime(q)){
			lem.push_back(make_pair(p,q));
		}
	}
	for(int i=0;i<lem.size();i++)
		cout<<lem[i].first<<" "<<"2 * "<<lem[i].second<<" "<<endl;
}

int main(){
	int n;
	cin>>n;
	if(n<=5 && n%2==0){
		cout<<"no lemoine ";
		return 0;
	}
	printLemoine(n);
}
