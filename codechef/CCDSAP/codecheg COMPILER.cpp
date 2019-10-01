#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
	lli t;
	string input;
	cin>>t;
	while(t--){
		lli ans=0,count=0;
		stack<char>s;
		cin>>input;
		for(int i=0;i<input.length();i++){
			if(input.substr(i,1)==">")
				count-=1;
			else
				count+=1;
			if(count==0)
				ans=i+1;
			else if(count<0)
				break;
		}
		cout<<ans<<endl;
	}
}
