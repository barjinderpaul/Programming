#include<bits/stdc++.h>
using namespace std;

void sieveOfAtkins(int limit){
	if(limit>2)
		cout<<2<<" ";
	if(limit>3)
		cout<<3<<" ";
	bool sieve[limit];
	for(int i=0;i<limit;i++)
		sieve[i]=false;
	for(int x=1;x*x<limit;x++){
		for(int y=1;y*y<limit;y++){
			int n= (4*x*x) + (y*y);
			if(n<=limit && (n%12==1 || n%12==5))
				sieve[n]^=true;
			n = (3*x*x) + (y*y);
			if(n<=limit && n%12==7)
				sieve[n]^=true;
			n = (3*x*x) - (y*y);
			if(x>y && n<=limit && n%12==11)
				sieve[n]^=true;
		}
	}
	for(int r=5;r*r<limit;r++){
		if(sieve[r]==true){
			for(int i=r*r;i<limit;i+=r*r)
				sieve[i]=false;
		}
	}
	for(int i=5;i<limit;i++)
		if(sieve[i]==true)
			cout<<i<<" ";
}

int main(){
	int limit,t;
	cin>>t;
	while(t--){
	cin>>limit;
	sieveOfAtkins(limit);
}
}
