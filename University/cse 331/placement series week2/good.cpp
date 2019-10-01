#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	string s;
	while(t--){
		int chars[123]={0};
		cin>>s;
		for(int i=0;i<s.length();i++){
			chars[int(s[i])]++;
		}
		int64_t mul=1;
		for(int i=97;i<=122;i++){
			if(chars[i]>0)
				mul = (mul*chars[i])%1000000007;
		}
		cout<<mul<<endl;
		
	}
}
