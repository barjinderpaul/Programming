#include<bits/stdc++.h>
using namespace std;

void checkPattern(string t, string p){
	int count=0;
	int lt= t.length();
	int pt= p.length();
	for(int i=0;i<lt-pt+1;i++){
		int j;
		for(j=0;j<pt;j++){
			if(t[i+j]!=p[j])
				break;
		}
		if(j==pt){
			cout<<"Pattern at = "<<i<<endl;
			count++;
		}
	}
	cout<<"pattern found "<<count<<" times"<<endl;
}

int main(){
	string text,pattern;
	cin>>text>>pattern;
	checkPattern(text,pattern);
}
