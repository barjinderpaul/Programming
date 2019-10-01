#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,r,R;
	cin>>n>>r;
	for(int i=0;i<n;i++){
		cin>>R;
		if(R<r)
			cout<<"Bad boi"<<endl;
		else
			cout<<"Good boi"<<endl;
	}
	
}
