#include<bits/stdc++.h>
using namespace std;



int main(){
	int64_t l,r,d,t;
	cin>>t;
	while(t--){
		cin>>l>>r>>d;
		if(l<=d){
			int64_t q = r / d; 
  			int64_t n1 = d * q; 
    		int64_t n2 = (r * d) > 0 ? (d * (q + 1)) : (d * (q - 1)); 
    		//if (abs(r - n1) < abs(r - n2)) 
        	//	cout<<n1<<endl; 
    		cout<<n2<<endl;     
		}
		else{
			cout<<d<<endl;
			/*
			int64_t i=l-1;
			if(d==1){
				cout<<1<<endl;
			}else{
				while(1){
					if(i%d==0){
						cout<<i<<aendl;
						break;
					}
					i-=1;
				}
			}
			*/
		}
	}
}
