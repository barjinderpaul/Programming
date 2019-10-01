#include<bits/stdc++.h>
#include<string>
using namespace std;

string convert(int n){
	stringstream ss;
	ss << n;
	return ss.str();
}
long long double convertInt(string s){
	stringstream geek(s); 
    long long double x = 0; 
    geek >> x; 
    return x;
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		string s(convert(n));
	//	cout<<"s = "<<s<<endl;
		int len = s.length();
	//	cout<<"len = "<<len<<endl;
		vector<int>v;
		while(n){
			v.insert(v.begin(),n%10);
			n/=10;
		}
		cout<<"vector = "<<endl;
		for(int i=0;i<v.size();i++)
			cout<<v[i];
		cout<<endl;
		int i=0;
		sort(v.begin(),v.end(),greater<int>());
		vector<string> nw;
		
		while(i<len-1){
			string temp("");
			std::rotate(v.begin(), v.begin()+1, v.end());
			
			for(int j=0;j<v.size();j++){
				cout<<"after ro = "<<v[j]<<endl;
				temp.append(convert(v[j]));
			}
			nw.push_back(temp);
			i+=1;
		}
		for(int i=0;i<nw.size();i++){
			s.append(nw[i]);
		}
		cout<<convertInt(s)%1000000007;
	}
	
}
