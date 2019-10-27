#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c,input,elseinput;
	cin>>n>>c;
	int nflag=0,flag=0,flag1=0,totalCoins=1000;
	while(flag==0){
		if(nflag==0){
			n = n/2;
		}
		nflag=0;
		cout<<1<<" "<<n<<endl;
		totalCoins-=1;
		cin>>input;
		if(input==1){
			cout<<2<<endl;
			totalCoins-=c;
			flag1=1;
		}
		else if(input==0 && flag1==1){
			for(int i=n+1;i<=n*2;i++){
				cout<<1<<" "<<i<<endl;
				totalCoins-=1;
				cin>>elseinput;
				if(elseinput==1){
					cout<<3<<" "<<i<<endl;
					flag=1;
				}
			}
		}
		else if(input==0){
			n=n*2;
			nflag=1;
		}
		
	}
}
