#include<bits/stdc++.h>
using namespace std;
//postfix expression evaluation for +,-,*,/,
//input string contains only for alphabetical chars and above mentioned operators
int main(){
	string s;
	cin>>s;
	stack<string> postfix;
	for(int i=0;i<s.length();i++){
		if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' ){
			if ( s[i]=='+' ){
				char b= postfix.top();
				postfix.pop();
				int a = atoi(postfix.top());
				postfix.pop();
				postfix.push(a+b);
			}
			else if(s[i]=='-' ){
				int b= postfix.top();
				postfix.pop();
				int a = postfix.top();
				postfix.pop();
				postfix.push(a-b);
				
			}
			else if(s[i]=='*' ){
				int b= postfix.top();
				postfix.pop();
				int a = postfix.top();
				postfix.pop();
				postfix.push(a*b);
				
			}
			else if(s[i]=='/'){
				int b= postfix.top();
				postfix.pop();
				int a = postfix.top();
				postfix.pop();
				postfix.push(a/b);
				
			}
		}
		else{
			postfix.push(s[i]);
		}
	}
	cout<<postfix.top();
}
