#include<bits/stdc++.h>
using namespace std;

int naive_search(string t,string p){
	int total = 0;
	for(int i=0;i<=t.size() - p.size() ;i++){
		int j;
		for(j = 0;j<p.size();j++){
			if(t[i+j]!=p[j])
				break;
		}
		if(j==p.size()){
			total++;
			cout<<"INDEX = " <<i<<endl;
		}
	}
	return total;
}

int main(){
	string t = "AXABXBABA" , p ="AXAB";
	cout<<naive_search(t,p);
}
