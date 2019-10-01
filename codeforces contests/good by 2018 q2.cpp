#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	uint64_t n;
	int flagdv=0,flaghalf=0,flagsqrt=0;
	cin>>n;
	vector<uint64_t> output;
	output.push_back(1);
	for(int k=2;k<n-2;k++){
		if(flaghalf==1 && flagsqrt==1 && flagdv==1){
			break;
		}
		if( (n/2)==k && flaghalf==0){
			uint64_t kh = (n/2)+2;
			output.push_back(kh);
			flaghalf=1;
		}
		else if(flagsqrt==0 && k==sqrt(n)  ){
			uint64_t ks = sqrt(n)*(sqrt(n)-1);
			ks+=n;
			output.push_back(ks);
			flagsqrt=1;
		}
		
		else{
			if(flagdv!=1){
				uint64_t kd = n/2*n/2;
				output.push_back(kd);
				flagdv=1;
			}
		}	
	}
	uint64_t k1 = n*(n+1)/2;
	output.push_back(k1);
	sort(output.begin(),output.end());
	for(uint64_t j=0;j<output.size();j++){
		cout<<output[j]<<" ";
	}
	
}
