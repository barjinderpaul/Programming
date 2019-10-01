#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		uint64_t value,count=0;
		vector<uint64_t> e;
		for(int i=0;i<n;i++){
			cin>>value;
			e.push_back(value);
		}
		int i=0;
		while(count<k){
			if(e[i] > e[e.size()-1]){
				e.pop_back();
			}
			else{
				e.erase(e.begin());
			}
			count++;
		}
		cout<<e[0]*e[e.size()-1]<<endl;
	}
}
