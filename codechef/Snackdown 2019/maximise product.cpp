#include<bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	uint64_t t,n,k,value;
	cin>>t;
	while(t--){
	cin>>n>>k;
	vector<uint64_t> numbers;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if( (i+j) == n )
			{
				value = (( (i*i) - i) * ( (j*j) - j)) %1000000007;
				numbers.push_back(value);
			}
			}
	}
		vector<uint64_t> :: iterator pos;
	pos = max_element(numbers.begin(),numbers.end());
	cout<<*pos<<endl;
}

}
