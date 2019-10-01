#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,D,Q,deadQ,reqQ;
	cin>>t;
	while(t--){
		cin>>D;
		int di[D],pi[D];
		for(int i=0;i<D;i++)
			cin>>di[i]>>pi[i];
		cin>>Q;
		while(Q--){
			int totalProblems=0;
			cin>>deadQ>>reqQ;
			for(int j=0;j<D;j++){
				if(di[j]<=deadQ)
					totalProblems+=pi[j];
			}
			if(totalProblems>=reqQ)
				cout<<"Go Camp"<<endl;
			else
				cout<<"Go Sleep"<<endl;
		}
	}
}
