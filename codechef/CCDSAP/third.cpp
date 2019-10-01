#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	lli t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		lli value,count=0;
		vector<lli> e,f;
		for(int i=0;i<n;i++){
			cin>>value;
			e.push_back(value);
		}
      int i = 0;
      int maximum = -1,maxx;
      for(int j=k;j>=0;j--){
          maxx = e[i]*e[n - j - 1];
          if(maximum<maxx)
          	maximum=maxx;
        
          i++;
      }
      cout<<maximum<<endl;
 
	}
}
