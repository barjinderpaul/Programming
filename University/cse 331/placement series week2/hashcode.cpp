#include<bits/stdc++.h>
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
	fast;
	int n,numberOfTags;
	string s;
	char ch;
	vector<int> h,v;
	for(int i=0;i<n;i++){
		cin>>ch>>numberOfTags;
		cout<<"ch = "<<ch<<"\n";
		cout<<"nu = "<<numberOfTags<<"\n";
		for(int j=0;j<numberOfTags;j++){
			cin>>s;	//not doing anything with tags yet
		}
		if(ch=='H')
			h.push_back(i);
		else
			v.push_back(i);			
		
	}
	lli total = (h.size() + (v.size()/2 + v.size()%2));
	cout<<total<<"\n";
	for(int i=0;i<h.size();i++)
		cout<<h[i]<<"\n";
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<"\n";	
}
