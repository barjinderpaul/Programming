#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	uint64_t n;
	cin>>n;
	vector<uint64_t> output;
	
	//k==n;
	output.push_back(1);
	
	//n-1
	uint64_t kn1 =(n*(n+1))/2;
	output.push_back(kn1);
	
	//k==1
	uint64_t kn01 = (n*(n+1))/2;
	output.push_back(kn01);
	
	//sqrt
	if(n<10){
		output.push_back(12);
	}
	else{
	uint64_t sq = sqrt(n);
	uint64_t ks = sq*(sq-1);
	if(sq*sq == n){
		//cout<<"sqrt="<<ks;
		ks+=n;
		//cout<<" sqrt = with sum "<<ks<<endl;
		output.push_back(ks);
	}	
		}


	//sum k=1
	uint64_t k1 = (n*(n+1))/2;
	output.push_back(k1);
	
	//even
	uint64_t kd = n/2*n/2;
	output.push_back(kd);
	
	//odd
	uint64_t knd = (n*(n+1))/2;
	output.push_back(knd);
	
	//half;
	uint64_t kh = (n/2)+2;
	output.push_back(kh);
	
	 
	
	
	sort(output.begin(),output.end());
	output.erase( unique( output.begin(), output.end() ), output.end() );
	for(uint64_t j=0;j<output.size();j++){
		cout<<output[j]<<" ";
	}
	
}
