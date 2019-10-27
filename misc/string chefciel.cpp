#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		for(int i=s.length()-4;i>=0;i--){
			if( (s[i]=='?' || s[i]=='C') && (s[i+1]=='?' || s[i+1]=='H') &&
			(s[i+2]=='?' || s[i+2]=='E') && (s[i+3]=='?' || s[i+3]=='F')  ){
				if(s[i]=='?')
					s[i]='C';
				if(s[i+1]=='?')
					s[i+1]='H';
				if(s[i+2]=='?')
					s[i+2]='E';
				if(s[i+3]=='?')
					s[i+3]='F';				
			}	
		}
		for(int i=0;i<s.length();i++)
			if(s[i]=='?')
				s[i]='A';
		cout<<s<<endl;
	}
}
