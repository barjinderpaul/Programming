#include<bits/stdc++.h>
using namespace std;

int main() {
	int T, W;;
	cin>>T;
	
	long long int N[71];
	N[0]=1; N[1]=1;
	for(int n=2;n<70;n++){
	    N[n] = N[n-1]+N[n-2];
	}
	
	for(int t=0;t<T;t++){
	    cin>>W;
	    cout<<N[W]<<endl;
	}
	
	return 0;
}
