#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	uint64_t n,q,k,x,value;
	cin>>n>>q;
	vector<int> original;
	for(int i=0;i<n;i++){
		cin>>value;
		original.push_back(value);
	}
	
	for(int i=0;i<q;i++){
		//vector<int> duplicate(n);
		//copy(original.begin(),original.end(),duplicate.begin());
		cin>>k>>x;
		vector<int> duplicate(n);
		copy(original.begin(),original.end(),duplicate.begin());

		while(k--){
			for(int i=0;i<duplicate.size();i++)
				duplicate[i] = duplicate[i]^duplicate[i+1];		 
		}
		
		cout<<duplicate[x-1]<<endl;
	}

	
}

