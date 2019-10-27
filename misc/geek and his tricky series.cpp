#include<bits/stdc++.h>
using namespace std;


int main(){
	int t,n;
  	cin>>t;
    while(t--){
        cin>>n;
		int series[n];
		series[0] = 7;
    	for(int i=1;i<n;i++){
        series[i] = (series[i-1]%1000000007)*2+i;
      
        
    }
    cout<<series[n-1]%1000000007<<endl;
   }
    
}
