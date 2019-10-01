	#include<bits/stdc++.h>
	using namespace std;
	typedef long long int lli;
	int main(){
		ios_base::sync_with_stdio(false);
		cin.tie(0);
		lli n,k;
		cin>>n>>k;
		lli range = 1000000,i=1;
		while(i<range){
			if( (i/k)*(i%k) == n){
				//cout<<" i,n,k = "<<i<<" "<<n<<" "<<k<<endl;
				cout<<i;
				return 0;
			}
			i+=1;
		}
			
	}
