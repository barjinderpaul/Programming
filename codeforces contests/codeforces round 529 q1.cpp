#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int jump=1;
	for(int i=0;i<s.length();i+=jump){
		cout<<s[i];
		jump+=1;
	}
}
