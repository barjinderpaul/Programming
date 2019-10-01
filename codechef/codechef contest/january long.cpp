#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string str="";
		int flag=0;
		getline(cin,str);
		for(int i=0;i<str.length();i++){
			cout<<str[i]<<endl;
		}
		if(flag==0)
			cout<<"NO"<<endl;
	}
	
}
