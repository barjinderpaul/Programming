#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c,input,elseinput;
	cin>>n>>c;
	int nflag=0,flag=0,flag1=0,totalCoins=1000;
	int tc=1;
	while(flag==0 and totalCoins>0){
		if(nflag==0){
			n = n/2;
		}
		nflag=0;
		cout<<1<<" "<<n<<endl;
		cout<<flush;
		totalCoins-=1;
		cin>>input;
		if(input==1){
			tc=n;
			cout<<2<<endl;
			cout<<flush;
			totalCoins-=c;
			if(totalCoins==0){
					tc = n;
					break;
				}
			flag1=1;
		}
		else if(input==0 && flag1==1){
			for(int i=n+1;i<=n*2;i++){
				cout<<1<<" "<<i<<endl;
				cout<<flush;
				totalCoins-=1;
				cin>>elseinput;
				if(elseinput==1){
					cout<<3<<" "<<i<<endl;
					cout<<flush;
					flag=1;
				}
				if(totalCoins==0){
					tc = i;
					break;
				}
			}
		}
		else if(input==0){
			n=n*2;
			nflag=1;
		}
		
	}
	if(totalCoins==0){
		cout<<3<<" "<<tc<<endl;
		cout<<flush;
	}
}
