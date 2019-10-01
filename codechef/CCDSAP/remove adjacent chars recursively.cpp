
//Recursively remove same adjacent chars in a string;

#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int i=0;
	vector<char>st;
	while(i<s.length()){
	//	cout<<"i , s[i]"<<i<<" "<<s[i]<<endl;
		if(st.size()==0 || s[i]!=st[st.size()-1])
		{
			st.push_back(s[i]);
			i++;	
		}else{
			while(  i<s.length() && s[i]==st[st.size()-1]  ){
				i++;
			}
			st.pop_back();			

		}	
	}
	for(int i=0;i<st.size();i++)
		cout<<st[i];
}
