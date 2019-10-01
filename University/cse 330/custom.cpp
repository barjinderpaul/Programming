#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
using namespace std;
typedef long long int lli;
void make_Intervals(vector<pair<lli,lli>>&v,lli leftI,lli rightI){    
    vector<pair<lli,lli> > tempv;
	for(lli j=0;j<v.size();j++){
		if((v[j].first<=leftI&&v[j].second>=leftI)||(v[j].first>=leftI&&v[j].first<=rightI)){
			if(v[j].first<leftI)
			  	leftI=v[j].first;
			if(v[j].second>rightI)
			   rightI=v[j].second;
		}
		else
			tempv.push_back(make_pair(v[j].first,v[j].second));
	}
	tempv.push_back(make_pair(leftI,rightI));
	v.swap(tempv);
	tempv.clear();
}
bool customSort(pair<lli,lli> r,pair<lli,lli> s){
	if(r.second<s.second)
		return 1;
	return 0;
}
int main(){
	fast;
	lli t,i,n,j,leftI,rightI;
	cin>>t;
	while(t--){
		cin>>n;
		vector<pair<lli,lli> > v;
		for(j=0;j<n;j++){
			cin>>leftI>>rightI;
			make_Intervals(v,leftI,rightI);
		}
		sort(v.begin(),v.end(),customSort);
		lli total=0;
		for(lli i=0;i<v.size();i++){
		    lli f = v[i].first,l=v[i].second;
		    total+=(l-f+1);
		}
		cout<<total<<"\n";
	}
	return 0;
}
