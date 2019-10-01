#include<bits/stdc++.h>
using namespace std;
int main(){
	uint64_t n,sub,add,input;
	cin>>n;
	vector<uint64_t> abc;
	cin>>input;
	abc.push_back(input);
	sub=input;add=input;
	for(uint64_t i=1;i<n;i++){
		cin>>input;
		abc.push_back(input);
		sub = abs(input-sub);
		add = input+add;
	}
	if(sub ==0 ||add==360 )
	{
		cout<<"YES";
		return 0;
	}
	
	uint64_t sumBefore=0,sumAfter=0;
	if(n%2==0){
		for(uint64_t i=0;i<abc.size();i++){
			if(i<(abc.size()/2)){
				sumBefore+=abc[i];
			}else{
				sumAfter+=abc[i];
			}
			
		}
	}
	//cout<<"sum before "<<sumBefore<<" "<<sumAfter<<endl;
	if(sumBefore == sumAfter)
		{
			cout<<"YES";
			return 0;
		}
	
	sort(abc.begin(),abc.end());
	uint64_t summ=0;
	for(uint64_t i=0;i<abc.size()-1;i++){
		summ+=abc[i];
	}
	if(summ==abc[abc.size()-1]){
		cout<<"YES";
		return 0;
	}
	
	cout<<"NO";
}
