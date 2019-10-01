#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
	fast;
	string s;
	cin>>s;
	stack<char>chars;
	int countdouble=0;
	for(int i=0;i<s.length();i++){
		if(chars.empty()){
			chars.push(s[i]);
			continue;
		}
	//	cout<<"in for"<<i<<" "<<endl;
	//	cout<<"top = "<<chars.top()<<endl;
	//	cout<<"s[i]="<<s[i]<<endl;
		if(s[i]== chars.top()){
	//		cout<<"in if2"<<endl;
			countdouble+=1;
			chars.pop();
		}else{
			chars.push(s[i]);
		}
		
	}
	//cout<<"count = "<<countdouble<<endl;
	if(countdouble==0 )
		cout<<"No"<<endl;
	else if(countdouble%2==1)
		cout<<"Yes"<<endl;
	else if(countdouble%2==0)
		cout<<"No"<<endl;
}
