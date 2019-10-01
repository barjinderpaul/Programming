#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	stack<char> balancedParenthesis;
	string s;
	cin>>s; //input of string to check;
	for(int i=0;i<s.length();i++){
		if(s[i] == '(' || s[i]=='{' || s[i]== '[')
			balancedParenthesis.push(s[i]);		//pushes onto the string if valid char
		else if(s[i] == ')' || s[i]=='}' || s[i]== ']'){
			if( balancedParenthesis.size()==0 ){
				cout<<"Not a balanced string1";
				return 0;
			}
			if( s[i]==')' && balancedParenthesis.top()=='(' ){	//if string matches for (), then pops else error
				balancedParenthesis.pop();
				continue;
			}
			else if(s[i] == '}' && balancedParenthesis.top()=='{' ){	//if string matches for {}, then pops else error
				balancedParenthesis.pop();
				continue;
			}
			else if( s[i]== ']' && balancedParenthesis.top()=='['){	//if string matches for [], then pops else error
				balancedParenthesis.pop();
				continue;
			}else{
				cout<<"Not a balanced string4";
				return 0;
			}
				
		}
	
		
	}
		if(balancedParenthesis.size()!=0)	//if after processing all string, stack size != 0, therefore string not balanced;
			cout<<"Not a balanced string5";
		else
			cout<<"String balanced";	//string balanced , stack size = 0
}
