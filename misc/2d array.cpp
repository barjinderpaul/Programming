#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a,b,t;
	cin>>t;
	while(t--){
		cin>>a>>b;
		int flag1=0;
		if(a==b){
			cout<<"YES";
			break;
		}
		for(int i=2;(abs(a*i-b*i)<=a+b);i++){
			long long int a1 = a*i;
			long long int b1 = b*i;
			//cout<<"a1 = "<<a1<< " b1 = "<<b1<<endl;
			if( abs(a1 - b1) == a+b){
				flag1=0;
				cout<<"YES"<<endl;
				break;
			}
			else
				flag1 = 1;
		}
		if(flag1 == 1)
			cout<<"NO"<<endl;
	}
}
