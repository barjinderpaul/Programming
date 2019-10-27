#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		int64_t value;
		cin>>n;
		vector<int64_t> v;
		for(int i=0;i<n;i++){
			int flag=0;
			cin>>value;
			if(v.size()==0){
				v.push_back(value);
				//cout<<"size zero push"<<endl;
				continue;
			}
			
			auto it = upper_bound(v.begin(),v.end(),value);
			if(it!=v.end()){
				int index = it-v.begin();
				v[index]=value;
				flag=1;
			}
			if(flag==0){
				//cout<<"pushing value="<<value<<endl;
				v.push_back(value);
			}
		}
		cout<<v.size()<<" ";
		for(int64_t x:v){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
